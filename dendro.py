##########################################################################
# module: dendro
# author: Hari Sundar
# email:  hari@cs.utah.edu
#
# python module to generate efficient code for General Relativity.
#
# (c) 2016 University of Utah, All rights reserved.
##########################################################################

import pickle
from sympy import *
from sympy.tensor.array import *
from sympy.functions.special.tensor_functions import KroneckerDelta
from sympy.utilities import numbered_symbols
from sympy.printing import print_ccode
from sympy.printing.dot import dotprint
import networkx as nx
import nxgraph
from nxgraph import ExpressionGraph
import sympy
import re as regex
import os

from sympy.printing.c import C99CodePrinter

import string
import random
import statistics

################################################################################
# VARIABLES
################################################################################
undef = symbols("undefined")

metric = undef
inv_metric = undef
C1 = undef
C2 = undef
# C2_spatial
C3 = undef

# first derivative
d = undef
# second derivative
d2s = undef
# advective derivative
ad = undef

# Kreiss-Oliger dissipation operator
kod = undef

one = symbols("one_")
negone = symbols("negone_")

e_i = [0, 1, 2]
e_ij = [(0, 0), (0, 1), (0, 2), (1, 0), (1, 1), (1, 2), (2, 0), (2, 1), (2, 2)]
e_ij_offdiag = [(0, 1), (0, 2), (1, 2)]

Ricci = undef


def d2(i, j, a):
    global d2s
    if i > j:
        return d2s(j, i, a)
    else:
        return d2s(i, j, a)


##########################################################################
# VARIABLE INITIALIZATION FUNCTIONS
##########################################################################


def scalar(name, idx):
    """
    Create a scalar variable with the corresponding name. The 'name' will be during code generation, so should match the
    variable name used in the C++ code.
    """
    tname = name + idx
    return symbols(tname)


def vec3(name, idx):
    """
    Create a 3D vector variable with the corresponding name. The 'name' will be during code generation, so should match
    the variable name used in the C++ code. The returned variable can be indexed(0,1,2), i.e.,

    b = dendro.vec3("beta")
    b[1] = x^2
    """
    vname = " ".join([name + repr(i) + idx for i in [0, 1, 2]])
    return symbols(vname)


def sym_3x3(name, idx):
    """
    Create a symmetric 3x3 matrix variables with the corresponding name. The 'name' will be during code generation, so
    should match the variable name used in the C++ code. The returned variable can be indexed(0,1,2)^2, i.e.,

    gt = dendro.sym_3x3("gt")
    gt[0,2] = x^2
    """

    vname = " ".join([name + repr(i) + idx for i in range(6)])
    m1, m2, m3, m4, m5, m6 = symbols(vname)

    return Matrix([[m1, m2, m3], [m2, m4, m5], [m3, m5, m6]])


def mat_3x3(name, idx):
    """
    Create a 3x3 matrix variables with the corresponding name. The 'name' will be during code generation, so
    should match the variable name used in the C++ code. The returned variable can be indexed(0,1,2)^2, i.e.,

    gt = dendro.sym_3x3("gt")
    gt[0,2] = x^2
    """
    vname = " ".join([name + repr(i) + idx for i in range(9)])
    m1, m2, m3, m4, m5, m6, m7, m8, m9 = symbols(vname)
    return Matrix([[m1, m2, m3], [m4, m5, m6], [m7, m8, m9]])


##########################################################################
# DERIVATIVE FUNCTIONS
##########################################################################


def set_first_derivative(g):
    """
    Set how the stencil for the first derivative will be called. Here g is a string

    Typically,

    d_i u =  g(i, u)
    """
    global d
    d = Function(g)
    return d


def set_second_derivative(g):
    """
    Set how the stencil for the second derivative will be called. Here g is a string

    Typically,

    d_ij u =  g(i, j, u)
    """
    global d2s
    d2s = Function(g)
    return d2s


def set_advective_derivative(g):
    """
    Set how the stencil for the second derivative will be called. Here g is a string

    Typically,

    ad_i u =  g(i, u)
    """
    global ad
    ad = Function(g)
    return ad


def set_kreiss_oliger_dissipation(g):
    """
    Set how the stencil for Kreiss-Oliger dissipation will be called. Here g is a string.

    Typically,

    kod_i u = g(i, u)
    """
    global kod
    kod = Function(g)
    return kod


# Covariant Derivatives
def DiDj(a):
    """
    Actually this defines two covariant derivatives acting on a scalar.  The
    derivative in this case is built from the full (non-conformal) metric as
    C3 is built from the full (non-conformal) metric.  This object is
    symmetric in both indices.
    """
    global d, C3

    m = Matrix(
        [d2(i, j, a) - sum([C3[l, i, j] * d(l, a) for l in e_i]) for i, j in e_ij]
    )
    return m.reshape(3, 3)


def _Di_Dj(a):
    """
    This defines two covariant derivatives acting on a scalar.
    The use of C2 below, however, suggests that this derivative is built
    from the conformal metric.  Such an operator and term shows up in the
    definition of the Ricci scalar which, in turn shows up in the trace-free
    term in the At evolution equation.  As with DiDj, this object is symmetric
    in both indices when acting on a scalar.
    """
    global d, C2

    m = Matrix(
        [d2(i, j, a) - sum([C2[l, i, j] * d(l, a) for l in e_i]) for i, j in e_ij]
    )
    return m.reshape(3, 3)


# Index Raising
def up_up(A):
    """
    raises both the indices of A, i.e., A_{ij} --> A^{ij}
    """
    global inv_metric

    m = Matrix(
        [
            sum([inv_metric[i, k] * inv_metric[j, l] * A[k, l] for k, l in e_ij])
            for i, j in e_ij
        ]
    )
    return m.reshape(3, 3)


# One index rasing
def up_down(A):
    """
    raises the first index of A, i.e., A_{ij} --> A^i_j
    """
    global inv_metric

    m = Matrix([sum([inv_metric[i, k] * A[k, j] for k in e_i]) for i, j in e_ij])
    return m.reshape(3, 3)


def lie(b, a, weight=0):
    """
    Computes the Lie derivative of a field, a, along the vector b.  Assumes
    the metric has been set.  An optional weight for the field can be
    specified.

    b must be of type dendro.vec3
    a can be scalar, vec3 or sym_3x3

    Computes L_b(v)
    """
    global d, ad

    # e_ij = [(0, 0), (0, 1), (0, 2), (1, 1), (1, 2), (2, 2)]

    if type(b) != tuple:
        raise ValueError(
            "Dendro: The field wrt which the Lie derivative is calculated needs to be vec3."
        )

    if type(a) == Symbol:
        return sum([b[i] * ad(i, a) for i in e_i]) + weight * a * sum(
            [d(i, b[i]) for i in e_i]
        )
    elif type(a) == tuple:
        return [
            sum(
                [
                    b[j] * ad(j, a[i]) - a[j] * d(j, b[i]) + weight * a[i] * d(j, b[j])
                    for j in e_i
                ]
            )
            for i in e_i
        ]
    elif type(a) == Matrix:
        m = Matrix(
            [
                sum(
                    [
                        b[k] * ad(k, a[i, j])
                        + a[i, k] * d(j, b[k])
                        + a[k, j] * d(i, b[k])
                        + weight * a[i, j] * d(k, b[k])
                        for k in e_i
                    ]
                )
                for i, j in e_ij
            ]
        )
        return m.reshape(3, 3)
    else:
        raise ValueError(
            "Dendro: Unknown type for input field to compute Lie derivative for."
        )


def kodiss(a):
    """
    Kreiss-Oliger dissipation operator
    """
    global kod

    if type(a) == Symbol:
        return sum([kod(i, a) for i in e_i])
    elif type(a) == tuple:
        return [sum([kod(i, a[j]) for i in e_i]) for j in e_i]
    elif type(a) == Matrix:
        return Matrix([sum([kod(k, a[i, j]) for k in e_i]) for i, j in e_ij]).reshape(
            3, 3
        )
    else:
        raise ValueError("Dendro: Unknown type for input to computer kodiss.")


def laplacian(a, chi):
    """
    Computes the laplacian of a scalar function with respect to the 3D metric
    gamma_ij.  Assumes that the conformally rescaled metric (called gt in
    various places) and the conformal factor (chi) is set.  Note that C3 is
    built from the same 3D metric.  The only place that this laplacian is
    used in the bssn equations is in the evolution equation for K and is
    the laplacian of alpha (the lapse).
    """
    global d, metric, C3

    full_metric = metric / chi
    inv_full_metric = simplify(full_metric.inv("ADJ"))

    # this could be optimized a tad as a symmetric x symmetric quantity is being summed over
    # return ( sum([ inv_full_metric[i, i] * ( d2(i, i, a) - sum([C3[l, i, i] * d(l, a) for l in e_i]) ) for i in e_i ]) + 2*sum([ inv_full_metric[i,j] * ( d2(i,j,a) - sum([C3[l,i,j] * d(l,a) for l in e_i ]) ) for i,j in e_ij_offdiag ]) )

    return sum(
        [
            inv_full_metric[i, j]
            * (d2(i, j, a) - sum([C3[l, i, j] * d(l, a) for l in e_i]))
            for i, j in e_ij
        ]
    )


def laplacian_conformal(a):
    """
    Computes the (conformal) laplacian of a scalar function with respect
    to the tilded or conformally rescaled metric (called gt in various
    places).  We assume the rescaled metric is set as well the conformal
    factor, chi.  Note that C2 is built from the conformally rescaled
    metric.  This (conformal) laplacian is only used in the definition of
    Ricci that shows up in the evolution equation for At (under the trace
    free operation), and even then only in the part that multiplies the
    metric and which will drop out on taking the trace free part.  So, in
    fact, the code could be written to completely ignore this operation
    in the evolution equations themselves.  However, if the constraints
    are included or the full Ricci is needed for another reason, this
    would be needed.
    """
    global d, inv_metric, C2

    if inv_metric == undef:
        inv_metric = get_inverse_metric()

    return sum(
        [
            inv_metric[i, j] * (d2(i, j, a) - sum([C2[l, i, j] * d(l, a) for l in e_i]))
            for i, j in e_ij
        ]
    )


def sqr(a):
    """
    Computes the square of the matrix. Assumes metric is set.
    """
    global inv_metric

    if inv_metric == undef:
        inv_metric = get_inverse_metric()

    return sum(
        [
            a[i, j]
            * sum(
                [
                    inv_metric[i, k] * inv_metric[j, l] * a[k, l]
                    for k in e_i
                    for l in e_i
                ]
            )
            for i, j in e_ij
        ]
    )

    # return ( sum([a[i,i]*sum([inv_metric[i, k] * inv_metric[i, l] * a[k, l] for k in e_i for l in e_i]) for i in e_i]) + 2*sum([a[i,j]*sum([inv_metric[i, k] * inv_metric[j, l] * a[k, l] for k in e_i for l in e_i]) for i,j in e_ij_offdiag]) )


def trace_free(x):
    """
    makes the operator trace-free
    """
    global metric, inv_metric

    if inv_metric == undef:
        inv_metric = get_inverse_metric()

    trace = sum([inv_metric[i, j] * x[i, j] for i, j in e_ij])

    # X_{ab} - 1/3 gt_{ab} X.
    # tf = Matrix([x[i, j] - 1/3*metric[i,j]*trace for i, j in e_ij])
    tf = Matrix(
        [x[i, j] - metric[i, j] * trace * sympy.Rational(1, 3) for i, j in e_ij]
    )

    return tf.reshape(3, 3)


def vec_j_del_j(b, a):
    r"""
    expands to  $\beta^i\partial_i \alpha$
    """
    return sum([b[i] * d(i, a) for i in e_i])


# [ewh] Adding this as this term needs to be in the beta equation as an
#      advective derivative ... and not as a regular (partial) derivative.
def vec_j_ad_j(b, f):
    r"""
    expands to  $\beta^i\partial_i f$
    """
    return sum([b[i] * ad(i, f) for i in e_i])

    # vec_k_del_k = vec_j_del_j


##########################################################################
# metric related functions
##########################################################################


def set_metric(g):
    """
    sets the metric variable, so that dendro knows how to compute the derived variables. This should be done fairly
    early on. e.g.,

    gt = dendro.sym_3x3("gt")
    dendro.set_metric(gt)
    """
    global metric

    metric = g


def get_inverse_metric():
    """
    Computes and returns the inverse metric. The variables need for be defined in advance. e.g.,

    gt = dendro.sym_3x3("gt")
    dendro.set_metric(gt)
    igt = dendro.get_inverse_metric()
    """
    global metric, inv_metric, undef

    if metric == undef:
        raise ValueError("Dendro: Metric not defined.")

    if inv_metric == undef:
        # method : ('GE', 'LU', or 'ADJ')
        inv_metric = simplify(metric.inv("ADJ"))

    return inv_metric


def get_first_christoffel():
    """
    Computes and returns the first Christoffel symbols (the quantity with three
    lower indices). It assumes the metric has been set. e.g.,

    dendro.set_metric(gt);

    Note, this is used to calculate the second Christoffel symbols as well
    as the 3D (conformal) Ricci tensor.  This should be built from the
    conformal metric, called "gamma tilde" or gt.  If the usual (non-conformal)
    metric gets used, this will be wrong.

    C1 = dendro.get_first_christoffel();
    """
    global metric, inv_metric, undef, C1, d

    if inv_metric == undef:
        get_inverse_metric()

    one_half = sympy.Rational(1, 2)

    if C1 == undef:
        C1 = MutableDenseNDimArray(range(27), (3, 3, 3))

        for k in e_i:
            for j in e_i:
                for i in e_i:
                    C1[k, i, j] = one_half * (
                        d(j, metric[k, i]) + d(i, metric[k, j]) - d(k, metric[i, j])
                    )

    return C1


def get_second_christoffel():
    """
    Computes and returns the second Christoffel symbols. Assumes the metric
    has been set. Will compute the first Christoffel if not already
    computed. e.g.,

    dendro.set_metric(gt);

    Note that this assumes that the metric that comes in is the conformal
    metric, gt.  This calculates the "usual" Christoffel symbols that we
    usually refer to.  This includes the factor with the inverse metric.
    The final quantity has one index up and two indices down.

    C2 = dendro.get_second_christoffel();
    """
    global C2, C1, inv_metric

    if C2 == undef:
        if C1 == undef:
            get_first_christoffel()

        igt_t = Array(inv_metric, (3, 3))
        C2 = tensorcontraction(tensorproduct(igt_t, C1), (1, 2))

    return C2


def get_complete_christoffel(chi):
    """
    Computes and returns the second Christoffel symbols (despite the
    returned name of C3 -- sort of a bad choice).  These (in comparison
    to C2) are built from the non-conformal metric using the conformal
    metric ("gamma tilde") and the conformal factor, chi. Assumes the
    metric (i.e. the conformal metric) has been set and pulls in the
    conformal factor, chi. Will compute the first/second Christoffels if
    not already computed. e.g.,

    dendro.set_metric(gt);

    C2_spatial = dendro.get_complete_christoffel();
    """
    global metric, inv_metric, undef, C1, C2, C3, d

    one_half = sympy.Rational(1, 2)

    if C3 == undef:
        C3 = MutableDenseNDimArray(range(27), (3, 3, 3))

        if C2 == undef:
            get_second_christoffel()

        for k in e_i:
            for j in e_i:
                for i in e_i:
                    C3[i, j, k] = C2[i, j, k] - one_half / (chi) * (
                        KroneckerDelta(i, j) * d(k, chi)
                        + KroneckerDelta(i, k) * d(j, chi)
                        - metric[j, k]
                        * sum([inv_metric[i, m] * d(m, chi) for m in e_i])
                    )

    return C3


def compute_ricci(Gt, chi):
    """
    Computes the (3D) Ricci tensor. e.g.,

    dendro.set_metric(gt)

    R = dendro.compute_ricci(Gt, chi)

    or

    dendro.compute_ricci(Gt, chi)

    and use

    dendro.ricci

    The conformal connection coefficient and the conformal variable needs
    to be supplied.
    """
    global metric, inv_metric, C1, C2

    Lchi = laplacian_conformal(chi)

    # print(type(Lchi))

    # print('Done with Lphi') #simplify(Lchi))

    # ewh4 DKchiDkchi = Matrix([4*metric[i, j]*sum([sum([inv_metric[k, l]*d(l, chi) for l in e_i])*d(k, chi) for k in e_i]) for i, j in e_ij])

    one_fourth = sympy.Rational(1, 4)
    one_half = sympy.Rational(1, 2)
    three_halves = sympy.Rational(3, 2)

    def s_sum(iterable):
        return sympy.Add(*iterable)

    DKchiDkchi_list = []
    for i, j in e_ij:
        inner_terms = [
            s_sum([inv_metric[k, l] * d(l, chi) for l in e_i]) * d(k, chi) for k in e_i
        ]

        full_term = (one_fourth / (chi * chi)) * metric[i, j] * s_sum(inner_terms)

        DKchiDkchi_list.append(full_term)

    DKchiDkchi = Matrix(DKchiDkchi_list).reshape(3, 3)

    # print('done with DKchi') # simplify(DKchiDkchi))

    CalGt = [s_sum(inv_metric[k, l] * C2[i, k, l] for k, l in e_ij) for i in e_i]

    Rt_list = []
    for i, j in e_ij:
        term1 = -one_half * s_sum(
            [inv_metric[l, m] * d2(l, m, metric[i, j]) for l, m in e_ij]
        )

        term2 = one_half * s_sum(
            [metric[k, i] * d(j, Gt[k]) + metric[k, j] * d(i, Gt[k]) for k in e_i]
        )

        term3 = one_half * s_sum([CalGt[k] * (C1[i, j, k] + C1[j, i, k]) for k in e_i])

        term4 = s_sum(
            [
                inv_metric[l, m]
                * (
                    C2[k, l, i] * C1[j, k, m]
                    + C2[k, l, j] * C1[i, k, m]
                    + C2[k, i, m] * C1[k, l, j]
                )
                for k in e_i
                for l, m in e_ij
            ]
        )

        Rt_list.append(term1 + term2 + term3 + term4)
    Rt = sympy.Matrix(Rt_list).reshape(3, 3)

    # print('done with Rt') #simplify(Rt))

    # ewh5    Rphi_tmp = Matrix([2*metric[i, j]*Lchi - 4*d(i, chi)*d(j, chi) for i, j in e_ij])
    # dwn    Rphi_tmp = Matrix([ 0.5*metric[i, j]*Lchi/chi - 0.25*d(i, chi)*d(j, chi)/chi/chi for i, j in e_ij])

    # print(simplify(Rphi_tmp))

    # ewh6    Rphi = -2*_Di_Dj(chi) - Rphi_tmp.reshape(3, 3) - DKchiDkchi.reshape(3, 3)
    # dwn    Rphi = -0.5*_Di_Dj(chi)/chi - Rphi_tmp.reshape(3, 3) - DKchiDkchi.reshape(3, 3)
    xRphi_list = []
    for i, j in e_ij:
        term = one_half / chi * (
            d2(i, j, chi) - s_sum(C2[k, j, i] * d(k, chi) for k in e_i)
        ) - (one_fourth / (chi * chi)) * d(i, chi) * d(j, chi)

        xRphi_list.append(term)
    xRphi = sympy.Matrix(xRphi_list).reshape(3, 3)

    Rphi_list = []
    for i, j in e_ij:
        term = (
            1
            / (2 * chi)
            * metric[i, j]
            * (
                s_sum(
                    inv_metric[k, l]
                    * (d2(k, l, chi) - (three_halves / chi) * d(k, chi) * d(l, chi))
                    for k, l in e_ij
                )
                - s_sum(CalGt[m] * d(m, chi) for m in e_i)
            )
        )
        Rphi_list.append(term)
    Rphi = sympy.Matrix(Rphi_list).reshape(3, 3)

    return [Rt.reshape(3, 3) + Rphi, Rt.reshape(3, 3), Rphi, CalGt]


##########################################################################
# code generation function
##########################################################################


def sanitize_floats(expr):
    if isinstance(expr, list):
        return [sanitize_floats(e) for e in expr]
    if isinstance(expr, sympy.Matrix):
        return expr.applyfunc(sanitize_floats)
    return sympy.nsimplify(expr, rational=True)


def padded_numbered_symbols(prefix="DENDRO_", start=0, n_digits=4):
    i = start
    while True:
        # Create the formatted number string, e.g., "001"
        num_str = str(i).zfill(n_digits)
        yield Symbol(f"{prefix}{num_str}")
        i += 1


def clean_cse_aliases(replacements, reduced_exprs):
    aliases = {}
    clean_repls = []

    for sym, val in replacements:
        resolved_val = val.xreplace(aliases)

        # check if the assignement is now trivial
        if resolved_val.is_Symbol:
            # this is a trivial assignment, we don't want it
            aliases[sym] = resolved_val
        else:
            # this is a real computation and must be kept
            clean_repls.append((sym, resolved_val))

    clean_reduced = [expr.xreplace(aliases) for expr in reduced_exprs]

    return clean_repls, clean_reduced


# construct the common sub-expression ellimination tree
def construct_cse(ex, vnames, idx, do_pow_replace=False):
    mi = [0, 1, 2, 4, 5, 8]
    midx = ["00", "01", "02", "11", "12", "22"]

    # total number of expressions
    # print("--------------------------------------------------------")
    num_e = 0
    lexp = []
    lname = []
    for i, e in enumerate(ex):
        if type(e) == list:
            num_e = num_e + len(e)
            for j, ev in enumerate(e):
                lexp.append(ev)
                lname.append(vnames[i] + repr(j) + idx)
        elif type(e) == Matrix:
            num_e = num_e + len(e)
            for j, k in enumerate(mi):
                lexp.append(e[k])
                lname.append(vnames[i] + midx[j] + idx)
        else:
            num_e = num_e + 1
            lexp.append(e)
            lname.append(vnames[i] + idx)

    ee_name = (
        "DENDRO_"  #''.join(random.choice(string.ascii_uppercase) for _ in range(5))
    )

    cse_symbols = padded_numbered_symbols(prefix="DENDRO_", n_digits=4)

    # small optimizations for cse before hand
    print("// Running some lighter optimizations before hand (expand and frac cancels)")
    # optimized = []
    # for e in lexp:
    #     # NOTE: DO NOT EXPAND, this makes CSE take WAY longer
    #     new_e = e.expand()
    #     # new_e = sympy.cancel(new_e)
    #     optimized.append(new_e)
    # lexp = optimized
    print("// done!")

    print("// NOW COMPUTING CSE")
    repl, reduced = sympy.cse(lexp, symbols=cse_symbols, optimizations="basic")
    print("// CSE COMPLETE")

    # then we want to make sure we process the replace pow
    if do_pow_replace:
        print("// Now replacing pows...")
        processed_repls = []
        for sym, val in repl:
            processed_repls.append((sym, replace_pow(val)))
        processed_reduced = [replace_pow(r) for r in reduced]

        repl, reduced = processed_repls, processed_reduced
        print("// finished replacing pows!")

    # make sure aliases are removed
    print(f"// Cleaning cse aliases... orig_repl: {len(repl)}")
    repl, reduced = clean_cse_aliases(repl, reduced)
    print(f"// finished cleaning cse aliases... new_repl: {len(repl)}")

    # filter through the CSE to remove trivial garbage
    print(f"// Filtering Trivial CSEs (Initial count: {len(repl)})")
    trivial_substitutions = {}
    clean_replacements = []

    for sym, expr in repl:
        clean_expr = expr.subs(trivial_substitutions)
        if (
            clean_expr.is_Number
            or isinstance(
                clean_expr, (sympy.Integer, sympy.Float, sympy.Symbol, sympy.Rational)
            )
            or clean_expr == 1
            or clean_expr == -1
            or clean_expr == 0
        ):
            trivial_substitutions[sym] = clean_expr
        else:
            # if trivial, keep it but apply previous substitutions
            clean_replacements.append((sym, clean_expr))

    # then update the list of expressions
    clean_reduced_exprs = [e.xreplace(trivial_substitutions) for e in reduced]

    repl = clean_replacements
    reduced = clean_reduced_exprs

    print(f"// Final sanitized CSE count: {len(repl)}")
    print(f"// Removed {len(trivial_substitutions)} trivial variables.")

    return [(repl, reduced), count_ops(lexp)]


def construct_cse_from_list(
    expression_list,
    temp_var_prefix="DENDRO_",
    ignore_symbols=[],
    optimizations=None,
    replace_pow=False,
):
    temp_var_gen = padded_numbered_symbols(prefix="DENDRO_", n_digits=4)

    print("Now generating cse!")

    if replace_pow:
        p = Wild("p")
        q = Wild("q")

        def pow_to_mul(base, exp):
            if exp.is_integer and exp > 1 and exp < 10:
                mul_args = [base] * int(exp)

                return sym.Mul(*mul_args, evaulate=False)
            else:
                return sym.Pow(base, exp)

        preprocessed_list = []
        for e in expression_list:
            preprocessed_list.append(e.replace(Pow(p, q), pow_to_mul))
    else:
        preprocessed_list = expression_list

    if optimizations is not None:
        print("    WARNING: Optimizations are set, this could take a while!")

    # cse_out = sym.cse(expression_list, symbols=temp_var_gen, optimizations="basic", order="none")
    cse_out = cse(
        preprocessed_list,
        symbols=temp_var_gen,
        optimizations="basic",
        order="none",
        ignore=ignore_symbols,
    )
    print("Finished generating cse!")

    return cse_out


########################
# TARGET FUNCTION
########################


def construct_expression_list(ex, vnames, idx="[pp]"):
    # NOTE: there seems to be an issue with the symmetric stuff
    mi = [0, 1, 2, 4, 5, 8]
    midx = ["00", "01", "02", "11", "12", "22"]

    # total number of expressions
    # print("--------------------------------------------------------")

    num_e = 0
    lexp = []
    lname = []
    for i, e in enumerate(ex):
        if type(e) == list:
            num_e = num_e + len(e)
            for j, ev in enumerate(e):
                lexp.append(ev)
                lname.append(vnames[i] + repr(j) + idx)
        elif type(e) == Matrix:
            num_e = num_e + len(e)

            # NOTE: Original
            for j, k in enumerate(mi):
                lexp.append(e[k])
                lname.append(vnames[i] + midx[j] + idx)

            # NOTE: my implementation if there's symmetry is currently
            # really slow and broken, need to consider more info...
            # check for matrix symmetry
            # if simplify(e) == simplify(e.T):
            #     # print("Symmetric matrix found")
            #     for jj in range(e.shape[0]):
            #         for kk in range(jj, e.shape[1]):
            #             lname.append(vnames[i] + repr(jj) + repr(kk) + idx)
            #             lexp.append(e[jj, kk])
            # else:
            #     for jj in range(e.shape[0]):
            #         for kk in range(e.shape[1]):
            #             lname.append(vnames[i] + repr(jj) + repr(kk) + idx)
            #             lexp.append(e[jj, kk])
        else:
            num_e = num_e + 1
            lexp.append(e)
            lname.append(vnames[i] + idx)

    print("// Sanitizing floats in expressions for simplification...")
    lexp = sanitize_floats(lexp)
    print("// Finished sanitizing floats!")

    return lexp, lname, num_e


def generate_cpu_preextracted(
    cse_list,
    rhs_var_names,
    idx,
    orig_ops,
    dtype="double",
    use_const=False,
    return_stats=False,
    generate_for_python=False,
):
    custom_functions = {
        "grad": "grad",
        "grad2": "grad2",
        "agrad": "agrad",
        "kograd": "kograd",
    }

    if generate_for_python:
        code_exporter = pycode
        comm = "#"
        type_decl = ""
        ender = ""
    else:
        code_exporter = ccode
        comm = "//"
        type_decl = f"{'const ' if use_const else ''}{dtype} "
        ender = ";"

    output_str = f"{comm} Dendro: Equation Code Generation {{{{\n"

    reduced_ops = 0
    output_str += f"{comm} Dendro: TEMPORARY VARIABLES\n"
    for v1, v2 in cse_list[0]:
        # extract the c-generated code for the expression
        if generate_for_python:
            rhs_text = code_exporter(replace_pow(v2), user_functions=custom_functions)
            code_text = f"{v1} = {change_deriv_names(rhs_text)}"
        else:
            rhs_text = code_exporter(replace_pow(v2), user_functions=custom_functions)
            code_text = f"{v1} = {change_deriv_names(rhs_text)}"

        # add add the text
        output_str += f"{type_decl}{code_text}{ender}\n"

        reduced_ops += count_ops(v2)

    output_str += f"{comm} Dendro: END TEMPORARY VARIABLES\n"
    output_str += f"\n{comm} Dendro: MAIN VARIABLES"
    for i, e in enumerate(cse_list[1]):
        output_str += f"\n{comm}--\n"

        # extract the c-generated code for the expression
        # ccode_text = cprinter.doprint(e, assign_to=str(rhs_var_names[i]) + idx)
        target_var_name = str(rhs_var_names[i]) + idx

        if generate_for_python:
            rhs_text = code_exporter(replace_pow(e), user_functions=custom_functions)
            code_text = f"{target_var_name} = {change_deriv_names(rhs_text)}"
        else:
            rhs_text = code_exporter(replace_pow(e), user_functions=custom_functions)
            code_text = f"{target_var_name} = {change_deriv_names(rhs_text)}"

        # then we need to pass it through the changing of derivative names
        code_text = change_deriv_names(code_text)

        # add add the text
        output_str += f"{code_text}{ender}\n"

        reduced_ops += count_ops(e)

    output_str += f"{comm} Dendro: END MAIN VARIABLES\n\n"

    if not return_stats:
        output_str += f"{comm} Dendro: INFORMATION\n"
        output_str += f"{comm} Dendro: number of original operations: {orig_ops} \n"
        output_str += f"{comm} Dendro: number of reduced operations: {reduced_ops} \n"
        output_str += f"{comm} Dendro: preprocessing reduced the "
        output_str += f"number of operations by {orig_ops - reduced_ops}\n"

        if orig_ops > 0:
            percent_reduction = (orig_ops - reduced_ops) / orig_ops
            output_str += f"{comm} Dendro: a {percent_reduction:0.5%} reduction\n"

        output_str += f"{comm} Dendro: }}}} End Code Generation \n"

        return output_str

    else:
        return output_str, reduced_ops


def generate_cpu(ex, vnames, idx):
    """
    Generate the C++ code by simplifying the expressions.
    """

    output_string = ""

    lexp, lname, num_e = construct_expression_list(ex, vnames, idx)

    cse = construct_cse(ex, vnames, idx)

    _v = cse[0]

    output_string += "// Dendro: {{{ \n"
    output_string += "// Dendro: original ops: %d \n" % (cse[1])

    ee_name = "DENDRO_"
    ee_syms = numbered_symbols(prefix=ee_name)

    custom_functions = {
        "grad": "grad",
        "grad2": "grad2",
        "agrad": "agrad",
        "kograd": "kograd",
    }

    rops = 0
    output_string += "// Dendro: printing temp variables\n"
    for v1, v2 in _v[0]:
        temp_str = "double "
        temp_str += change_deriv_names(
            ccode(v2, assign_to=v1, user_functions=custom_functions)
        )
        output_string += temp_str + "\n"
        rops = rops + count_ops(v2)

    output_string += "\n// Dendro: printing variables"
    for i, e in enumerate(_v[1]):
        output_string += "\n//--\n"
        output_string += (
            change_deriv_names(
                ccode(e, assign_to=lname[i], user_functions=custom_functions)
            )
            + "\n"
        )
        rops = rops + count_ops(e)

    output_string += "// Dendro: reduced ops: %d \n" % (rops)
    output_string += "// Dendro: }}} \n"

    return output_string


def generate_code_from_graph(
    block_data_map,
    blocks_data,
    component_order,
    custom_functions,
    graph,
    scc,
    sub_var_names,
    generate_for_python=False,
) -> None:
    if generate_for_python:
        code_exporter = pycode
        comm = "#"
        type_prefix = ""
        const_prefix = ""
        ender = ""
    else:
        code_exporter = ccode
        comm = "//"
        type_prefix = "double "
        const_prefix = "const double "
        ender = ";"

    out_code = f"\n\n{comm} Dendro: {{{{\n"
    out_code += f"{comm} Dendro: Executing {len(blocks_data)} blocks in {len(component_order)} components.\n"

    printed_nodes = set()

    for component_index in component_order:
        component_block_ids = scc[component_index]
        out_code += f"\n{comm} -- DENDRO: Executing component {component_index} (Blocks: {component_block_ids}) ---\n"

        # get all expression node hashes from all blocks in this components
        all_node_hashes_in_component = set()
        for block_id in component_block_ids:
            block = block_data_map[block_id]
            # add all nodes from this blocks subgraph
            all_node_hashes_in_component.update(block["subgraph"].nodes())

        # use the random dfs sort
        component_nodes_in_order = graph.random_dfs_sort(
            relevant_nodes=all_node_hashes_in_component
        )

        # now we can iterate over the correctly ordered nodes
        for ii, node_hash in enumerate(component_nodes_in_order):
            if (
                node_hash not in printed_nodes
                and "vnames" in graph._G_.nodes[node_hash]
            ):
                expr = graph.get_expr_from_hash(node_hash)
                if expr is None:
                    out_code += (
                        f"{comm} Could not find expression for hash {node_hash}\n"
                    )
                    continue

                printed_nodes.add(node_hash)

                var_names = graph._G_.nodes[node_hash]["vnames"]

                # separate DENDRO_ and final vars
                temp_var_names = []
                final_var_names = []

                for vname in var_names:
                    if vname in sub_var_names:
                        temp_var_names.append(vname)
                    else:
                        final_var_names.append(vname)

                # now we generate the code
                if not temp_var_names and not final_var_names:
                    print(
                        f"WARNING: couldn't find temporary or final var names for hash {node_hash}"
                    )

                # print the *first* temp variable as the main definition
                main_def_var = None

                if temp_var_names:
                    main_def_var = temp_var_names[0]

                    rhs_text = change_deriv_names(
                        code_exporter(
                            replace_pow(expr),
                            user_functions=custom_functions,
                        )
                    )

                    # Manual Assignment: type var = rhs;
                    out_code += f"{type_prefix}{main_def_var} = {rhs_text}{ender}\n"

                    # print all other temp var names as aliases for this
                    for alias_temp_var in temp_var_names[1:]:
                        # alisases get const!
                        rhs_text = change_deriv_names(
                            code_exporter(
                                Symbol(main_def_var),
                                user_functions=custom_functions,
                            )
                        )
                        out_code += (
                            f"{const_prefix}{alias_temp_var} = {rhs_text}{ender}\n"
                        )

                # then all of the final assignments
                for final_name in final_var_names:
                    # assign from the main temp var if it exists (not likely, but still)
                    RHS = Symbol(main_def_var) if main_def_var else expr

                    out_code += f"{comm}--- TRUE OUTPUT VAR: {final_name} \n"

                    rhs_text = change_deriv_names(
                        code_exporter(
                            replace_pow(RHS),
                            user_functions=custom_functions,
                        )
                    )
                    out_code += f"{final_name} = {rhs_text}{ender}\n"

        out_code += f"{comm} --- END COMPONENT {component_index} ---\n\n"

    out_code += f"{comm} END Dendro }}}}\n"
    return out_code


def generate_code_from_graph_inplace(
    block_data_map,
    blocks_data,
    component_order,
    custom_functions,
    graph,
    scc,
    sub_var_names,
    cse_defs=None,
    generate_for_python=False,
):
    if generate_for_python:
        code_exporter = pycode
        comm = "#"
        type_prefix = ""
        ender = ""
        # Python doesn't declare types, so strict "reuse" logic is just assignment
    else:
        code_exporter = ccode
        comm = "//"
        type_prefix = "double "
        ender = ";"

    out_code = f"\n\n{comm} Dendro: {{{{\n"
    out_code += f"{comm} Dendro: Executing {len(blocks_data)} blocks in {len(component_order)} components.\n"

    # necessary map to be able to store which code we're working with
    node_to_temp_var = {}

    # this is our pre-traversal of the node checking to see what our count is
    uses_remaining = {n: graph._G_.in_degree(n) for n in graph._G_.nodes}

    # this is a stack of available vars that we are finished with, for reusing
    available_vars = []

    # this is our counter for creating new temp vars
    temp_var_counter = 0

    # then the set of temp vars that have been declared so far, to know if we need to use "double" on new and fresh ones
    # TODO: this should probably be a *prefix* so we could eventually just use a pool of contiguous data like an array
    defined_temp_vars = set()

    # seed map with input symbols
    for node_hash, data in graph._G_.nodes(data=True):
        expr = graph.get_expr_from_hash(node_hash)
        # nodes with no dependencies!
        if expr is not None:
            if expr.is_Number:
                node_to_temp_var[node_hash] = (
                    str(float(expr)) if not expr.is_Integer else str(expr)
                )
            elif expr.is_Symbol and not str(expr).startswith("DENDRO_"):
                node_to_temp_var[node_hash] = str(expr)

    # components need to be processed in topological order
    for component_index in component_order:
        component_block_ids = scc[component_index]
        out_code += f"\n{comm} -- DENDRO: Executing component {component_index} (Blocks: {component_block_ids}) ---\n"

        # get all expression node hashes from all blocks in this components
        all_node_hashes_in_component = set()
        for block_id in component_block_ids:
            block = block_data_map[block_id]
            # add all nodes from this blocks subgraph
            all_node_hashes_in_component.update(block["subgraph"].nodes())

        # # use the random dfs sort
        component_nodes_in_order = graph.random_dfs_sort(
            relevant_nodes=all_node_hashes_in_component
        )

        # now we can iterate over the correctly ordered nodes
        for ii, node_hash in enumerate(component_nodes_in_order):
            # skip nodes already in our map
            if node_hash in node_to_temp_var:
                continue

            expr = graph.get_expr_from_hash(node_hash)
            if expr is None:
                out_code += f"{comm} Could not find expression for hash {node_hash}\n"
                continue

            # build our substituted expression for the RHS
            deps_hashes = list(graph._G_.successors(node_hash))

            def resolve_dep(d_hash):
                if d_hash in node_to_temp_var:
                    return node_to_temp_var[d_hash]

                # simple fallback
                d_expr = graph.get_expr_from_hash(d_hash)
                if d_expr is not None:
                    if d_expr.is_Number:
                        val = (
                            str(float(d_expr)) if not d_expr.is_Integer else str(d_expr)
                        )
                        node_to_temp_var[d_hash] = val
                        return val
                    elif d_expr.is_Symbol:
                        val = str(d_expr)
                        node_to_temp_var[d_hash] = val
                        return val

                return None

            subs_dict = {}

            # do a standard substutition: expression to tempvar
            for d_hash in deps_hashes:
                d_var_name = resolve_dep(d_hash)
                if d_var_name is None:
                    # this really only happens if there's a broken graph or cross-component bug
                    d_expr_obj = graph.get_expr_from_hash(d_hash)
                    out_code += f"{comm} ERROR: Dep {d_hash} ({d_expr_obj}) missing for Node {node_hash}\n"
                    d_var_name = str(d_expr_obj)

                d_expr_obj = graph.get_expr_from_hash(d_hash)
                subs_dict[d_expr_obj] = sympy.Symbol(d_var_name)

            # then a CSE symbol substitution: symbol to tempvar
            if cse_defs:
                # look for atoms in the expression that are DENDRO_ symbols
                for atom in expr.atoms(sympy.Symbol):
                    atom_str = str(atom)
                    if atom_str in cse_defs:
                        rhs_hash = cse_defs[atom_str]

                        # if there's a temp var allocated for the RHS of this CSE symbol...
                        if rhs_hash in node_to_temp_var:
                            target_var = node_to_temp_var[rhs_hash]
                            subs_dict[atom] = sympy.Symbol(target_var)

            substituted_expr = expr.subs(subs_dict)

            # find a temporary variable (lhs) for this expression
            lhs_var = None
            freed_vars_from_this_op = []

            # decrement usage count for all deps and check for freeing
            for d_hash in deps_hashes:
                if d_hash in uses_remaining:
                    uses_remaining[d_hash] -= 1
                    if uses_remaining[d_hash] == 0:
                        # dep is no longer needed by others
                        d_temp = node_to_temp_var.get(d_hash)
                        if d_temp and d_temp.startswith("_dendro_tmp"):
                            freed_vars_from_this_op.append(d_temp)

            if freed_vars_from_this_op:
                # try to reuse a var that was just freed
                lhs_var = freed_vars_from_this_op.pop(0)
            elif available_vars:
                # otherwise reuse a var from global pool
                lhs_var = available_vars.pop()
            else:
                # otherwise we have to create a new one
                lhs_var = f"_dendro_tmp_{temp_var_counter}"
                temp_var_counter += 1

            # add other freed vars to global pool
            available_vars.extend(freed_vars_from_this_op)

            # now we finally just get the C/Py code for the substituted rhs
            rhs_text = change_deriv_names(
                code_exporter(
                    replace_pow(substituted_expr), user_functions=custom_functions
                )
            )

            # establish whether or not we have to declare the var
            if lhs_var not in defined_temp_vars:
                out_code += f"{type_prefix}{lhs_var} = {rhs_text}{ender}\n"
                defined_temp_vars.add(lhs_var)
            else:
                out_code += f"{lhs_var} = {rhs_text}{ender}\n"

            # map node's hash to new temp var
            node_to_temp_var[node_hash] = lhs_var

            # then handle assignments to cse vars and the final outputs
            if "vnames" in graph._G_.nodes[node_hash]:
                var_names = graph._G_.nodes[node_hash]["vnames"]
                for vname in var_names:
                    if vname.startswith("DENDRO_"):
                        vname_sym_hash = hash(Symbol(vname))
                        node_to_temp_var[vname_sym_hash] = lhs_var
                    else:
                        # this is a final output variable, we just assign the variable to it
                        out_code += (
                            f"{comm} ----- FINAL OUTPUT ASSIGNMENT {vname} ----- \n"
                        )
                        out_code += f"{vname} = {lhs_var}{ender}\n"

        out_code += f"{comm} --- END COMPONENT {component_index} ---\n\n"

    out_code += f"\n{comm} Now only allocates: {temp_var_counter + 1} total vars\n"
    out_code += f"{comm} END Dendro }}}}\n"
    return out_code


def generate_cpu_blocks(
    ex,
    vnames,
    idx,
    cse_data=None,
    orig_ops=None,
    lname=None,
    lexp=None,
    dont_read_cache=True,
    use_inplace_temporaries=True,
    generate_for_python=False,
    return_inplace_and_non_inplace=False,
):
    """
    Generate the C++ code by simplifying the expressions.
    """
    # generate_code_nx(ex,vnames,idx)
    # return
    # print(ex)
    custom_functions = {
        "grad": "grad",
        "grad2": "grad2",
        "agrad": "agrad",
        "kograd": "kograd",
    }
    mi = [0, 1, 2, 4, 5, 8]
    midx = ["00", "01", "02", "11", "12", "22"]

    cse_cache_file = "cse_data.pkl"
    graph_cache_file = "composed_graph.pkl"
    blocks_cache_file = "blocks.pkl"

    # generate the CSE if it doesn't already exist

    if cse_data is None:
        if os.path.exists(cse_cache_file) and not dont_read_cache:
            print("--- Cached CSE was found, loading from file...")
            with open(cse_cache_file, "rb") as f:
                cse_cache = pickle.load(f)
                cse_data = cse_cache["cse"]
                lname = cse_cache["lname"]
        else:
            # total number of expressions
            # print("--------------------------------------------------------")
            num_e = 0
            lexp = []
            lname = []
            for i, e in enumerate(ex):
                if type(e) == list:
                    num_e = num_e + len(e)
                    for j, ev in enumerate(e):
                        lexp.append(ev)
                        lname.append(vnames[i] + repr(j) + idx)
                elif type(e) == Matrix:
                    num_e = num_e + len(e)
                    for j, k in enumerate(mi):
                        lexp.append(e[k])
                        lname.append(vnames[i] + midx[j] + idx)
                else:
                    num_e = num_e + 1
                    lexp.append(e)
                    lname.append(vnames[i] + idx)

            print("--- Now generating csv...")
            cse = construct_cse(ex, vnames, idx)
            cse_data = cse[0]
            orig_ops = cse[1]
            print("--- CSV generated!")

            print("--- Saving CSV to pickle")
            cse_data_to_cache = {"cse": cse_data, "lname": lname, "orig_ops": orig_ops}
            with open(cse_cache_file, "wb") as f:
                pickle.dump(cse_data_to_cache, f)

    cse_defs = {}
    if cse_data:
        substitutions, _ = cse_data
        for var_sym, expr in substitutions:
            cse_defs[str(var_sym)] = hash(expr)

    if os.path.exists(graph_cache_file) and not dont_read_cache:
        print("--- Cached graph found, loading from file...")
        with open(graph_cache_file, "rb") as f:
            graph = pickle.load(f)
    else:
        print("--- converting csv to graph")
        graph = ExpressionGraph()
        substitutions, reduced_exprs = cse_data

        print(
            f"--- NOTE: n_substitutions={len(substitutions)} & n_reduced_exprs={len(reduced_exprs)}"
        )

        # add to the graph the output mapping so we know what the original expresions are like
        output_mapping = dict(zip(lname, reduced_exprs))
        graph.set_output_expressions(output_mapping)

        print("--- Adding CSE substitutions to the graph")
        for var, expr in substitutions:
            graph.add_expression(expr, str(var))

        print("--- Adding CSE final expressions to graph")
        for name, expr in zip(lname, reduced_exprs):
            graph.add_expression(expr, name)

        # sub_exprs = [expr for (_, expr) in substitutions]
        # all_exprs = sub_exprs + reduced_exprs
        #
        # ## MY EDITS
        #
        # # (gets it to work)
        # while len(vnames) < len(all_exprs):
        #     vnames.append(f"_tmp_expr_{len(vnames)}")
        #
        # graph.add_expressions(all_exprs, vnames)

        # NOTE: graph must be compsed first
        G = graph.composed_graph()

        # now we link together CSE symbols to their expressions
        print("--- Linking CSE symbols to their expressions")

        # look up for definitions
        cse_defs = {}
        substitutions, _ = cse_data
        for var_sym, expr in substitutions:
            cse_defs[str(var_sym)] = hash(expr)

        count_linked = 0
        for node, data in G.nodes(data=True):
            sym_name = None

            func = data.get("func")
            is_symbol_node = False

            if func is not None:
                if (isinstance(func, type) and func.__name__ == "Symbol") or (
                    isinstance(func, sympy.Symbol)
                ):
                    is_symbol_node = True

            if is_symbol_node or func is None:
                expr_obj = graph.get_expr_from_hash(node)
                if expr_obj is not None:
                    if isinstance(expr_obj, sympy.Symbol):
                        sym_name = str(expr_obj)

            # add edge if we found everything
            if sym_name and sym_name in cse_defs:
                rhs_hash = cse_defs[sym_name]

                # make sure we have the  hash in the graph
                if G.has_node(rhs_hash):
                    # also then don't create self-loops or edges, so we get the definition before usage
                    if node != rhs_hash and not G.has_edge(node, rhs_hash):
                        G.add_edge(node, rhs_hash)
                        count_linked += 1

        print(f"--- Linked {count_linked} CSE usages to their definitions.")

        print("--- Saving graph object to pickle file")
        with open(graph_cache_file, "wb") as f:
            pickle.dump(graph, f)

    if os.path.exists(blocks_cache_file) and not dont_read_cache:
        print("--- Cached blocks found, loading from ", blocks_cache_file)
        with open(blocks_cache_file, "rb") as f:
            cached_data = pickle.load(f)
            blocks = cached_data["blocks"]
            output_map = cached_data["output_map"]
    else:
        print("--- Generating cluster!")

        # then we can parse through the list
        blocks = graph.generate_clusters()  # returns expression graphs of blocks

        print("--- Mapping output variables to generated blocks...")
        output_map = graph.map_outputs_to_blocks(blocks)

        print("--- Dumping the blocks to a pickle file")
        with open(blocks_cache_file, "wb") as f:
            pickle.dump({"blocks": blocks, "output_map": output_map}, f)

    print(f"Found {len(blocks)} total blocks")

    # for i, (graph_cluster, data) in enumerate(blocks):
    #     print(f"\n--- BLOCK {i} ---")
    #     print(f" Storage: {data.storage}")
    #     print(f" num nodes in cluster: {graph_cluster.number_of_nodes()}")
    #     print(f" num edges in cluster: {graph_cluster.number_of_edges()}")
    #
    #     if graph_cluster.number_of_nodes() < 20:
    #         print(f"   Nodes: {list(graph_cluster.nodes())}")

    # import json

    # print(json.dumps(output_map, indent=2))

    blocks_data = []
    for i, (subgraph, data) in enumerate(blocks):
        inputs, outputs = graph.get_cluster_io(subgraph.nodes())
        blocks_data.append(
            {
                "id": i,
                "subgraph": subgraph,
                "inputs": inputs,
                "outputs": outputs,
                "data": data,
            }
        )

    # print(blocks_data)

    # build dependency graph
    block_dag = graph.build_block_graph(blocks)

    # compute strongly connected ocmponents
    scc = list(nx.strongly_connected_components(block_dag))
    print(f"Found {len(scc)} strongly connected components")

    # DAG of components to find execution order
    component_graph = nx.condensation(block_dag, scc=scc)

    # topologically sort the components
    component_order = list(nx.topological_sort(component_graph))

    print("--- Component execution order determined by ExpressionGraph:")
    print("    -> ".join(map(str, component_order)))

    sub_var_names = set()
    for var_sym, _ in cse_data[0]:
        sub_var_names.add(str(var_sym))

    # easy look up of block data by ID
    block_data_map = {b["id"]: b for b in blocks_data}

    # get main expression graph for compent-wide subgraphs
    main_expression_graph = graph._G_

    if return_inplace_and_non_inplace:
        out_code_inplace = generate_code_from_graph_inplace(
            block_data_map,
            blocks_data,
            component_order,
            custom_functions,
            graph,
            scc,
            sub_var_names,
            cse_defs=cse_defs,
            generate_for_python=generate_for_python,
        )

        out_code_graph = generate_code_from_graph(
            block_data_map,
            blocks_data,
            component_order,
            custom_functions,
            graph,
            scc,
            sub_var_names,
            generate_for_python=generate_for_python,
        )

        return out_code_inplace, out_code_graph
    if use_inplace_temporaries:
        out_code = generate_code_from_graph_inplace(
            block_data_map,
            blocks_data,
            component_order,
            custom_functions,
            graph,
            scc,
            sub_var_names,
            cse_defs=cse_defs,
            generate_for_python=generate_for_python,
        )
    else:
        out_code = generate_code_from_graph(
            block_data_map,
            blocks_data,
            component_order,
            custom_functions,
            graph,
            scc,
            sub_var_names,
            generate_for_python=generate_for_python,
        )

    return out_code


# MY older stuff in notes...

# TO DO:
# take a group of blocks (expression graphs) in order
# and produce C code that can go into testing program
# (old version of C code below)

# ORIGINAL DENDRO CODE
# print("// Dendro: {{{ ")
# print("// Dendro: original ops: %d " %(cse[1]))

# ee_name = 'DENDRO_'
# ee_syms = numbered_symbols(prefix=ee_name)


# rops=0
# print('// Dendro: printing temp variables')
# for (v1, v2) in _v[0]:
#     print('const double ', end='')
#     print(change_deriv_names(ccode(v2, assign_to=v1, user_functions=custom_functions)))
#     rops = rops + count_ops(v2)

# print()
# print('// Dendro: printing variables')
# for i, e in enumerate(_v[1]):
#     print("//--")
#     print(change_deriv_names(ccode(e, assign_to=lname[i], user_functions=custom_functions)))
#     rops = rops + count_ops(e)

# print('// Dendro: reduced ops: %d' %(rops))
# print('// Dendro: }}} ')
# END ORIGINAL BLOCK


def generate_cpu_no_cse(ex, vnames, idx):
    """
    Generate the C++ code by simplifying the expressions.
    """
    # print(ex)
    custom_functions = {
        "grad": "grad",
        "grad2": "grad2",
        "agrad": "agrad",
        "kograd": "kograd",
    }
    mi = [0, 1, 2, 4, 5, 8]
    midx = ["00", "01", "02", "11", "12", "22"]

    # total number of expressions
    # print("--------------------------------------------------------")
    num_e = 0
    lexp = []
    lname = []
    for i, e in enumerate(ex):
        if type(e) == list:
            num_e = num_e + len(e)
            for j, ev in enumerate(e):
                lexp.append(ev)
                lname.append(vnames[i] + repr(j) + idx)
        elif type(e) == Matrix:
            num_e = num_e + len(e)
            for j, k in enumerate(mi):
                lexp.append(e[k])
                lname.append(vnames[i] + midx[j] + idx)
        else:
            num_e = num_e + 1
            lexp.append(e)
            lname.append(vnames[i] + idx)

    for i, e in enumerate(lexp):
        print(
            change_deriv_names(
                ccode(expand(e), assign_to=lname[i], user_functions=custom_functions)
            )
        )


def generate_fpcore(ex, vnames, idx):
    """
    Generate the FPCore code,
    """
    mi = [0, 1, 2, 4, 5, 8]
    midx = ["00", "01", "02", "11", "12", "22"]

    # total number of expressions
    # print("--------------------------------------------------------")
    num_e = 0
    lexp = []
    lname = []
    for i, e in enumerate(ex):
        if type(e) == list:
            num_e = num_e + len(e)
            for j, ev in enumerate(e):
                lexp.append(ev)
                lname.append(vnames[i] + repr(j) + idx)
        elif type(e) == Matrix:
            num_e = num_e + len(e)
            for j, k in enumerate(mi):
                lexp.append(e[k])
                lname.append(vnames[i] + midx[j] + idx)
        else:
            num_e = num_e + 1
            lexp.append(e)
            lname.append(vnames[i] + idx)

    cse = construct_cse(ex, vnames, idx)
    _v = cse[0]

    # print("// Dendro: {{{ ")
    # print("// Dendro: original ops: %d " %(cse[1]))

    ee_name = "DENDRO_"
    ee_syms = numbered_symbols(prefix=ee_name)

    custom_functions = {
        "grad": "grad",
        "grad2": "grad2",
        "agrad": "agrad",
        "kograd": "kograd",
    }
    rops = 0

    # re_symbol=regex.compile(r"Symbol\('[a-z,A-Z,_]+[0-9,\[pp\],\[0-9\]]*'\)")
    re_symbol = regex.compile(r"Symbol\('([a-z,A-Z,0-9,_,\[\]]*)'\)")
    re_integer = regex.compile(r"Integer\(([\-,0-9]+)\)")
    re_float = regex.compile(r"Float\('([\-,0-9]*\.[0-9]*)'\s prec=([0-9]+)\)")
    re_grad = regex.compile(
        r"Function\('([a-z]+[0-9]*)'\)\(Integer\(([0-9]+)\),\s*Symbol\('([a-z,A-Z]+[0-9]*\[pp\])'\)\)"
    )

    subs_functions = {
        "Add(": "(+ ",
        "Integer(-1)": "-1 ",
        "Mul(": "(* ",
        "Div(": "(/ ",
        "Pow(": "(pow ",
        "Rational(": "(/ ",
    }

    # print('// Dendro: printing temp variables')
    tmp_vars = list()
    for v1, v2 in _v[0]:
        tmp_vars.append(str(v1))
        sym_sub = dict()
        srep = srepr(v2)
        # print(srep)

        res = re_grad.findall(srep)
        for g in res:
            s = "Function('%s')(Integer(%s), Symbol('%s'))" % (g[0], g[1], g[2])
            # print(s)
            ss = "Symbol('%s')" % (g[0] + "_" + g[1] + "_" + g[2])
            srep = srep.replace(s, ss)

        srep = srep.replace(",", " ")
        # print(srep)

        res = re_symbol.findall(srep)
        inp_params = list()
        # print(res)
        for s in res:
            ss = s.replace("[pp]", "")
            for index in range(0, 6):
                ss = ss.replace("[" + str(index) + "]", str(index))
            inp_params.append(ss)
            tmp_vars.append(ss)
            sym_sub["Symbol('%s')" % (s)] = ss

        int_sub = dict()
        res = re_integer.findall(srep)
        for s in res:
            int_sub["Integer(%s)" % (s)] = s

        float_sub = dict()
        res = re_float.findall(srep)

        for s in res:
            float_sub["Float('%s'  prec=%s)" % (s[0], s[1])] = s[0]

        for key, val in sym_sub.items():
            # print("{%s: %s} "%(key,val))
            srep = srep.replace(key, val)

        for key, val in int_sub.items():
            # print("{%s: %s} "%(key,val))
            srep = srep.replace(key, val)

        for key, val in float_sub.items():
            # print("{%s: %s} "%(key,val))
            srep = srep.replace(key, val)

        for key, val in subs_functions.items():
            srep = srep.replace(key, val)

        print("(FPCore (%s)" % (" ".join(inp_params)))
        print("\t%s" % (srep))
        print(")\n")

    # print(tmp_vars)
    tmp_vars.clear()
    tmp_vars = list()
    for i, e in enumerate(_v[1]):
        srep = srepr(e)

        res = re_grad.findall(srep)
        for g in res:
            s = "Function('%s')(Integer(%s), Symbol('%s'))" % (g[0], g[1], g[2])
            # print(s)
            ss = "Symbol('%s')" % (g[0] + "_" + g[1] + "_" + g[2])
            srep = srep.replace(s, ss)

        srep = srep.replace(",", " ")

        res = re_symbol.findall(srep)
        inp_params = list()
        # print(res)
        for s in res:
            ss = s.replace("[pp]", "")
            for index in range(0, 6):
                ss = ss.replace("[" + str(index) + "]", str(index))
            inp_params.append(ss)
            tmp_vars.append(ss)
            sym_sub["Symbol('%s')" % (s)] = ss

        int_sub = dict()
        res = re_integer.findall(srep)
        for s in res:
            int_sub["Integer(%s)" % (s)] = s

        float_sub = dict()
        res = re_float.findall(srep)

        for s in res:
            float_sub["Float('%s'  prec=%s)" % (s[0], s[1])] = s[0]

        for key, val in sym_sub.items():
            # print("{%s: %s} "%(key,val))
            srep = srep.replace(key, val)

        for key, val in int_sub.items():
            # print("{%s: %s} "%(key,val))
            srep = srep.replace(key, val)

        for key, val in float_sub.items():
            # print("{%s: %s} "%(key,val))
            srep = srep.replace(key, val)

        for key, val in subs_functions.items():
            srep = srep.replace(key, val)

        tmp_vars = list(set(tmp_vars))
        print("(FPCore (%s)" % (" ".join(tmp_vars)))
        print("\t%s" % (srep))
        print(")")
        # print(")")
        # print(")")
        # print(change_deriv_names(ccode(e, assign_to=lname[i], user_functions=custom_functions)))


def generate_avx(ex, vnames, idx):
    mi = [0, 1, 2, 4, 5, 8]
    midx = ["00", "01", "02", "11", "12", "22"]

    # total number of expressions
    # print("--------------------------------------------------------")
    num_e = 0
    lexp = []
    lname = []
    for i, e in enumerate(ex):
        if type(e) == list:
            num_e = num_e + len(e)
            for j, ev in enumerate(e):
                lexp.append(ev)
                lname.append(vnames[i] + repr(j) + idx)
        elif type(e) == Matrix:
            num_e = num_e + len(e)
            for j, k in enumerate(mi):
                lexp.append(e[k])
                lname.append(vnames[i] + midx[j] + idx)
        else:
            num_e = num_e + 1
            lexp.append(e)
            lname.append(vnames[i] + idx)

    cse = construct_cse(ex, vnames, idx)
    _v = cse[0]

    print("// Dendro: {{{ ")
    print("// Dendro: original ops: %d " % (cse[1]))

    ee_name = "DENDRO_"
    ee_syms = numbered_symbols(prefix=ee_name)

    print("// Dendro vectorized code: {{{")
    oper = {"mul": "dmul", "add": "dadd", "load": "*"}
    prevdefvars = set()
    for v1, v2 in _v[0]:
        vv = numbered_symbols("v")
        vlist = []
        gen_vector_code(v2, vv, vlist, oper, prevdefvars, idx)
        print("  double " + repr(v1) + " = " + repr(vlist[0]) + ";")
    for i, e in enumerate(_v[1]):
        print("//--")
        vv = numbered_symbols("v")
        vlist = []
        gen_vector_code(e, vv, vlist, oper, prevdefvars, idx)
        # st = '  ' + repr(lname[i]) + '[idx] = ' + repr(vlist[0]) + ';'
        st = "  " + repr(lname[i]) + " = " + repr(vlist[0]) + ";"
        print(st.replace("'", ""))

    print("// Dendro vectorized code: }}} ")


def change_deriv_names(str):
    c_str = str
    derivs = ["agrad", "grad", "kograd"]
    for deriv in derivs:
        key = deriv + r"\(\d, \w+\[pp\]\)"
        slist = regex.findall(key, c_str)
        for s in slist:
            # print(s)
            w1 = s.split("(")
            w2 = w1[1].split(")")[0].split(",")
            # print(w1[0]+'_'+w2[0].strip()+'_'+w2[1].strip()+';')
            rep = w1[0]
            for v in w2:
                rep = rep + "_" + v.strip()
            # rep=rep+';'
            c_str = c_str.replace(s, rep)

    derivs2 = ["grad2"]
    for deriv in derivs2:
        key = deriv + r"\(\d, \d, \w+\[pp\]\)"
        slist = regex.findall(key, c_str)
        for s in slist:
            # print(s)
            w1 = s.split("(")
            w2 = w1[1].split(")")[0].split(",")
            # print(w1[0]+'_'+w2[0].strip()+'_'+w2[1].strip()+';')
            rep = w1[0]
            for v in w2:
                rep = rep + "_" + v.strip()
            # rep=rep+';'
            c_str = c_str.replace(s, rep)

    func_list = ["pow"]
    for func in func_list:
        key = func + r"\(\w+, \d\)"
        slist = regex.findall(key, c_str)
        for s in slist:
            # print(s)
            w1 = s.split("(")
            w2 = w1[1].split(")")[0].split(",")
            # print(w1[0]+'_'+w2[0].strip()+'_'+w2[1].strip()+';')
            if int(w2[1].strip()) == 2:
                rep = "(" + w2[0].strip() + " * " + w2[0].strip() + ")"
                c_str = c_str.replace(s, rep)
            # rep=w1[0]
            # for v in w2:
            #     rep=rep+'_'+v.strip()
            # #rep=rep+';'
            # c_str=c_str.replace(s,rep)
    return c_str


def generate_separate(ex, vnames, idx, prefix=""):
    """
    Generate the C++ code by simplifying the expressions.
    """
    # print(ex)
    if len(ex) != 1:
        print("pass each variable separately ", end="\n")
        return

    mi = [0, 1, 2, 4, 5, 8]
    midx = ["00", "01", "02", "11", "12", "22"]

    # total number of expressions
    # print("--------------------------------------------------------")
    num_e = 0
    lexp = []
    lname = []
    for i, e in enumerate(ex):
        if type(e) == list:
            num_e = num_e + len(e)
            for j, ev in enumerate(e):
                lexp.append(ev)
                lname.append(vnames[i] + repr(j) + idx)
        elif type(e) == Matrix:
            num_e = num_e + len(e)
            for j, k in enumerate(mi):
                lexp.append(e[k])
                lname.append(vnames[i] + midx[j] + idx)
        else:
            num_e = num_e + 1
            lexp.append(e)
            lname.append(vnames[i] + idx)

    # print(num_e)
    # print(len(lname))
    c_file = open(prefix + vnames[0] + ".cpp", "w")
    print("generating code for " + vnames[0])
    print("    bssn::timer::t_rhs.start();", file=c_file)
    print("for (unsigned int k = 3; k < nz-3; k++) { ", file=c_file)
    print("    z = pmin[2] + k*hz;", file=c_file)

    print("for (unsigned int j = 3; j < ny-3; j++) { ", file=c_file)
    print("    y = pmin[1] + j*hy; ", file=c_file)

    print("for (unsigned int i = 3; i < nx-3; i++) {", file=c_file)
    print("    x = pmin[0] + i*hx;", file=c_file)
    print("    pp = i + nx*(j + ny*k);", file=c_file)
    print("    r_coord = sqrt(x*x + y*y + z*z);", file=c_file)
    print("    eta=ETA_CONST;", file=c_file)
    print("    if (r_coord >= ETA_R0) {", file=c_file)
    print("    eta *= pow( (ETA_R0/r_coord), ETA_DAMPING_EXP);", file=c_file)
    print("    }", file=c_file)

    print("// Dendro: {{{ ", file=c_file)
    print("// Dendro: original ops: ", count_ops(lexp), file=c_file)

    # print("--------------------------------------------------------")
    # print("Now trying Common Subexpression Detection and Collection")
    # print("--------------------------------------------------------")

    # Common Subexpression Detection and Collection
    # for i in range(len(ex)):
    #     # print("--------------------------------------------------------")
    #     # print(ex[i])
    #     # print("--------------------------------------------------------")
    #     ee_name = ''.join(random.choice(string.ascii_uppercase) for _ in range(5))
    #     ee_syms = numbered_symbols(prefix=ee_name)
    #     _v = cse(ex[i],symbols=ee_syms)
    #     # print(type(_v))
    #     for (v1,v2) in _v[0]:
    #         print("double %s = %s;" % (v1, v2))
    #     print("%s = %s" % (vnames[i], _v[1][0]))

    # mex = Matrix(ex)
    ee_name = (
        "DENDRO_"  #''.join(random.choice(string.ascii_uppercase) for _ in range(5))
    )
    ee_syms = numbered_symbols(prefix=ee_name)
    _v = cse(lexp, symbols=ee_syms, optimizations="basic")

    custom_functions = {
        "grad": "grad",
        "grad2": "grad2",
        "agrad": "agrad",
        "kograd": "kograd",
    }

    rops = 0
    print("// Dendro: printing temp variables", file=c_file)
    for v1, v2 in _v[0]:
        # print("double %s = %s;" % (v1, v2)) # replace_pow(v2)))
        print("double ", end="", file=c_file)
        print(
            change_deriv_names(
                ccode(v2, assign_to=v1, user_functions=custom_functions)
            ),
            file=c_file,
        )
        rops = rops + count_ops(v2)

    print("// Dendro: printing variables", file=c_file)
    for i, e in enumerate(_v[1]):
        print("//--", file=c_file)
        # print("%s = %s;" % (lname[i], e)) # replace_pow(e)))
        f = open(str(vnames[0]) + ".gv", "w")
        print(dotprint(e), file=f)
        f.close()
        print(
            change_deriv_names(
                ccode(e, assign_to=lname[i], user_functions=custom_functions)
            ),
            file=c_file,
        )
        # c_file.write('\n')
        rops = rops + count_ops(e)

    print("// Dendro: reduced ops: ", rops, file=c_file)
    print("// Dendro: }}} ", file=c_file)

    print("  }", file=c_file)
    print(" }", file=c_file)
    print("}", file=c_file)
    print("     bssn::timer::t_rhs.stop();", file=c_file)
    c_file.close()
    print("generating code for " + vnames[0] + " completed")


def replace_pow(exp_in, max_expansion=15):
    """
    Convert integer powers in an expression to Muls, like a**2 => a*a
    :param exp_in: the input expression,
    :return: the output expression with only Muls
    """

    # NOTE: this replacement probably shouldn't be called before CSE, but it does force the optimization
    def visit(node):
        if not node.is_Pow:
            return node

        base, exp = node.as_base_exp()

        if not exp.is_Integer:
            print(f"// DENDRO: Skipping a non-integer pow: base={base} exp={exp}")
            return node

        if abs(exp) > max_expansion:
            print(f"// DENDRO: Skipping large integer pow: base={base} exp={exp}")
            return node

        # expand a small positive integer
        if exp > 0:
            print(f"//    expanding pow... {base} -> {exp}")
            expanded_mul = Mul(*[base] * int(exp), evaluate=False)
            return sympy.UnevaluatedExpr(expanded_mul)

        # expand small negative integer
        elif exp < 0:
            print(f"//    expanding negative pow... {base} -> {exp}")
            denom = Mul(*[base] * int(-exp), evaluate=False)
            return S.One / sympy.UnevaluatedExpr(denom)

    return sympy.bottom_up(exp_in, visit)


def generate_debug(ex, vnames):
    """
    Generate the C++ code by simplifying the expressions.
    """
    # print(ex)

    mi = [0, 1, 2, 4, 5, 8]
    midx = ["00", "01", "02", "11", "12", "22"]

    # total number of expressions
    # print("--------------------------------------------------------")
    num_e = 0
    lexp = []
    lname = []
    print("// Dendro: {{{ ")
    for i, e in enumerate(ex):
        if type(e) == list:
            num_e = num_e + len(e)
            for j, ev in enumerate(e):
                # lexp.append(ev)
                print(vnames[i] + repr(j), end="")
                print(" = ", end="")
                print(replace_pow(ev), ";")
        elif type(e) == Matrix:
            num_e = num_e + len(e)
            for j, k in enumerate(mi):
                # lexp.append(e[k])
                print(vnames[i] + midx[j], end="")
                print(" = ", end="")
                print(replace_pow(e[k]), ";")
        else:
            num_e = num_e + 1
            # lexp.append(e)
            print(vnames[i], end="")
            print(" = ", end="")
            print(replace_pow(e), ";")

    print("// Dendro: }}} ")


def vec_print_str(tv, pdvars):
    """
    This returns a string that will be used to print a line of code. If the
    variable tv has not yet been used before, then the declaration of this
    variable must be included in the string. pdvars is the list of variables
    that have been previously defined.

        tv:          new temporary variable
        pdvars:      list of previously declared variables.
    """
    st = "  "
    if tv not in pdvars:
        st += "double "
        pdvars.add(tv)
    return st


def gen_vector_code(ex, vsym, vlist, oper, prevdefvars, idx):
    """
    create vectorized code from an expression.
    options:
        ex:               expression
        vsym:             numbered symbols
        vlist:            an empty list that is used to process the tree. on return
                          this list contains the name of the variable with the final
                          result
        oper:             dictionary for '+' and '*' operators
        prevdefvars:      an empty set used to identify previously defined temporary variables.
        idx:              name of index for accessing arrays, i.e., alpha[idx].
    """
    one = symbols("one")
    negone = symbols("negone")
    # print (vlist)
    if isinstance(ex, Function):
        # check to see if we are processing a derivative
        if (
            isinstance(ex, ad)
            or isinstance(ex, d)
            or isinstance(ex, kod)
            or isinstance(ex, d2s)
        ):
            # print('...ex and args: ',ex,ex.func,ex.args)
            tv = next(vsym)
            vlist.append(tv)
            st = vec_print_str(tv, prevdefvars)
            str_args = [repr(a) for a in ex.args]
            o1 = oper["load"]
            o1s = repr(o1).replace("'", "")
            idxn = idx.replace("[", "")
            idxn = idxn.replace("]", "")
            st += (
                repr(tv)
                + " = "
                + o1s
                + "("
                + repr(ex.func)
                + "_"
                + "_".join(str_args)
                + "+"
                + idxn
                + " );"
            )
            # st += repr(tv) + ' = ' + repr(ex) + ';'
            print(st.replace(idx, ""))
            return

    if isinstance(ex, Pow):
        # check to see if we are processing a simple pow
        a1, a2 = ex.args
        # print('processing pow...',ex,a1,a2)
        if isinstance(a1, Symbol) and isinstance(a2, Number):
            # This is a simple Pow function. Process it here and return
            tv = next(vsym)
            vlist.append(tv)
            st = vec_print_str(tv, prevdefvars)
            if a2 == -1:
                st += repr(tv) + " = 1.0 / " + repr(a1) + ";"
            elif a2 == 2:
                st += repr(tv) + " = " + repr(a1) + " * " + repr(a1) + ";"
            else:
                st += repr(tv) + " = pow( " + repr(a1) + ", " + repr(a2) + ");"
            print(st)
            return

    # recursively process the arguments of the function or operator
    for arg in ex.args:
        gen_vector_code(arg, vsym, vlist, oper, prevdefvars, idx)

    if isinstance(ex, Number):
        if isinstance(ex, Integer) and ex == 1:
            vlist.append(one)
        elif isinstance(ex, Number) and ex == -1:
            vlist.append(negone)
        else:
            tv = next(vsym)
            vlist.append(tv)
            st = vec_print_str(tv, prevdefvars)
            if isinstance(ex, Rational):
                st += repr(tv) + " = " + repr(float(ex)) + ";"
            else:
                st += repr(tv) + " = " + repr(ex) + ";"
            print(st)
    elif isinstance(ex, Symbol):
        tv = next(vsym)
        vlist.append(tv)
        st = vec_print_str(tv, prevdefvars)
        st += repr(tv) + " = " + repr(ex) + ";"
        print(st)
    elif isinstance(ex, Mul):
        nargs = len(ex.args)
        # print('mul..',len(vlist))
        for i in range(nargs - 1):
            tv = next(vsym)
            st = vec_print_str(tv, prevdefvars)
            st += repr(tv) + " = "
            v1 = vlist.pop()
            v2 = vlist.pop()
            # st += repr(v1) + ' * ' + repr(v2) + ';'
            o1 = oper["mul"]
            st += repr(o1) + "(" + repr(v1) + ", " + repr(v2) + ");"
            print(st.replace("'", ""))
            vlist.append(tv)
    elif isinstance(ex, Add):
        nargs = len(ex.args)
        # print('add..',len(vlist))
        for i in range(nargs - 1):
            tv = next(vsym)
            st = vec_print_str(tv, prevdefvars)
            st += repr(tv) + " = "
            v1 = vlist.pop()
            v2 = vlist.pop()
            o1 = oper["add"]
            st += repr(o1) + "(" + repr(v1) + ", " + repr(v2) + ");"
            print(st.replace("'", ""))
            vlist.append(tv)
    elif isinstance(ex, Pow):
        tv = next(vsym)
        qexp = vlist.pop()
        qman = vlist.pop()
        a1, a2 = ex.args
        o1 = oper["mul"]
        if isinstance(a2, Integer):
            if a2 == -1:
                st = vec_print_str(tv, prevdefvars)
                st += repr(tv) + " =  1.0 / " + repr(qman) + ";"
            elif a2 == 2:
                st = vec_print_str(tv, prevdefvars)
                st += (
                    repr(tv)
                    + " = "
                    + repr(o1)
                    + "("
                    + repr(qman)
                    + ", "
                    + repr(qman)
                    + ");"
                )
            elif a2 == -2:
                v1 = next(vsym)
                st = vec_print_str(v1, prevdefvars)
                st += (
                    repr(v1)
                    + " = "
                    + repr(o1)
                    + "("
                    + repr(qman)
                    + ", "
                    + repr(qman)
                    + ");"
                )
                print(st.replace("'", ""))
                st = vec_print_str(tv, prevdefvars)
                st += repr(tv) + " = 1.0 / " + repr(v1) + ";"
            elif a2 > 2 and a2 < 8:
                v1 = next(vsym)
                st = vec_print_str(v1, prevdefvars)
                st += (
                    repr(v1)
                    + " = "
                    + repr(o1)
                    + "("
                    + repr(qman)
                    + ", "
                    + repr(qman)
                    + ");"
                )
                print(st.replace("'", ""))
                for i in range(a2 - 3):
                    v2 = next(vsym)
                    st = vec_print_str(v2, prevdefvars)
                    st += (
                        repr(v2)
                        + " = "
                        + repr(o1)
                        + "("
                        + repr(v1)
                        + ", "
                        + repr(qman)
                        + ");"
                    )
                    print(st.replace("'", ""))
                    v1 = v2
                st = vec_print_str(tv, prevdefvars)
                st += (
                    repr(tv)
                    + " = "
                    + repr(o1)
                    + "("
                    + repr(v1)
                    + ", "
                    + repr(qman)
                    + ");"
                )
            else:
                st = vec_print_str(tv, prevdefvars)
                st += repr(tv) + " = pow(" + repr(qman) + "," + repr(qexp) + ");"
        else:
            st = vec_print_str(tv, prevdefvars)
            st = repr(tv) + " = pow(" + repr(qman) + "," + repr(qexp) + ");"
        print(st.replace("'", ""))
        vlist.append(tv)


def store_node(v, at_idx, local_mem):
    for key, val in local_mem.items():
        if val is None:
            local_mem[key] = v
            # print("storing node %s at %d"%(v,key))
            break

    at_idx[v] = key


def evict_node(v, at_idx, local_mem):
    local_mem[at_idx[v]] = None
    # print("release %s"%v)
    at_idx[v] = -1


def visit_node(G: nx.DiGraph, v, work_queue, local_mem, is_allocated):
    at_eval = nx.get_node_attributes(G, "eval")
    at_func = nx.get_node_attributes(G, "func")
    at_args = nx.get_node_attributes(G, "args")
    at_idx = nx.get_node_attributes(G, "idx")
    at_eval[v] = True

    descendents_list = list(G.successors(v))

    if at_func[v] != sympy.core.add.Add and at_func[v] != sympy.core.mul.Mul:
        """
        Direct evaluation for non-reduction type functions such as pow
        """
        # print(at_func[v],v)
        if at_func[v] == sympy.core.power.Pow:
            a1 = at_args[v][0]
            a2 = at_args[v][1]

            # print(a1,a2)
            # print("a1 is at DENDRO_%d\n"%at_idx[a1])
            # print(type(a2))

            if at_idx[a1] == -1:
                assert False, "invalid traversal order"

            if (
                type(a2) == sympy.core.numbers.Integer
                or type(a2) == sympy.core.numbers.One
                or type(a2) == sympy.core.numbers.NegativeOne
            ):
                if at_idx[v] == -1:
                    store_node(v, at_idx, local_mem)

                if is_allocated[at_idx[v]] == True:
                    print("DENDRO_%d = DENDRO_%d;\n" % (at_idx[v], at_idx[a1]))
                else:
                    print("double DENDRO_%d = DENDRO_%d;\n" % (at_idx[v], at_idx[a1]))
                    is_allocated[at_idx[v]] = True

                for i in range(abs(int(a2)) - 1):
                    print("DENDRO_%d *= DENDRO_%d;" % (at_idx[v], at_idx[a1]))

                if int(a2) < 0:
                    print("DENDRO_%d = 1/DENDRO_%d;" % (at_idx[v], at_idx[v]))

            G.remove_edge(v, a1)
            G.remove_edge(v, a2)

            if G.in_degree(a1) == 0:
                evict_node(a1, at_idx, local_mem)

            if G.in_degree(a2) == 0:
                evict_node(a2, at_idx, local_mem)

        else:
            c_code = ccode(v)
            if at_idx[v] == -1:
                store_node(v, at_idx, local_mem)
                if is_allocated[at_idx[v]] == True:
                    print("DENDRO_%d = %s;" % (at_idx[v], c_code))
                else:
                    print("double DENDRO_%d = %s;" % (at_idx[v], c_code))
                    is_allocated[at_idx[v]] = True
    else:
        for u in descendents_list:
            if at_eval[u] == True:
                if at_idx[v] == -1:
                    store_node(v, at_idx, local_mem)
                    # print("\n// initialize reduce for %s"%v)
                    print("\n// initialize reduction for ")
                    if at_func[v] == sympy.core.add.Add:
                        if is_allocated[at_idx[v]] == True:
                            print("DENDRO_%d = 0;\n" % (at_idx[v]))
                        else:
                            print("double DENDRO_%d = 0;\n" % (at_idx[v]))
                            is_allocated[at_idx[v]] = True

                    elif at_func[v] == sympy.core.mul.Mul:
                        if is_allocated[at_idx[v]] == True:
                            print("DENDRO_%d = 1;\n" % (at_idx[v]))
                        else:
                            print("double DENDRO_%d = 1;\n" % (at_idx[v]))
                            is_allocated[at_idx[v]] = True

                if at_func[v] == sympy.core.add.Add:
                    print("DENDRO_%d += DENDRO_%d;" % (at_idx[v], at_idx[u]))
                elif at_func[v] == sympy.core.mul.Mul:
                    print("DENDRO_%d *= DENDRO_%d;" % (at_idx[v], at_idx[u]))

                G.remove_edge(v, u)
                if G.in_degree(u) == 0:
                    evict_node(u, at_idx, local_mem)

            else:
                work_queue.append(u)
                at_eval[v] = False

    nx.set_node_attributes(G, at_eval, "eval")
    nx.set_node_attributes(G, at_idx, "idx")
    return G, local_mem


###############
# Makes graph?
################


def generate_code_nx(ex, vnames, idx):
    """
    Generate the C++ code by simplifying the expressions.
    """
    # print(ex)
    mi = [0, 1, 2, 4, 5, 8]
    midx = ["00", "01", "02", "11", "12", "22"]

    # total number of expressions
    # print("--------------------------------------------------------")
    num_e = 0
    lexp = []
    lname = []
    for i, e in enumerate(ex):
        if type(e) == list:
            num_e = num_e + len(e)
            for j, ev in enumerate(e):
                lexp.append(ev)
                lname.append(vnames[i] + repr(j) + idx)
        elif type(e) == Matrix:
            num_e = num_e + len(e)
            for j, k in enumerate(mi):
                lexp.append(e[k])
                lname.append(vnames[i] + midx[j] + idx)
        else:
            num_e = num_e + 1
            lexp.append(e)
            lname.append(vnames[i] + idx)

    # WORK

    g = nxgraph.ExpressionGraph()
    g.add_expressions(lexp, lname)
    G = g.composed_graph(verbose=False)
    # Gr=G.reverse()
    # tgr = [g for g in nx.topological_generations(Gr)]

    all_tsorts = [nx.topological_sort(G)]

    for i, ts in enumerate(all_tsorts):
        Gp = nx.DiGraph(G)
        at_eval = nx.get_node_attributes(Gp, "eval")
        at_idx = dict()
        local_mem = dict()
        is_allocated = dict()
        for node_id, v in enumerate(Gp.nodes):
            at_idx[v] = -1
            local_mem[node_id] = None
            is_allocated[node_id] = False
            # if Gp.out_degree(v) == 0:
            #     at_eval[v]=True

        nx.set_node_attributes(Gp, at_eval, "eval")
        nx.set_node_attributes(Gp, at_idx, "idx")
        W = list(ts)
        # print("ts = %d"%(i))
        while len(W) > 0:
            v = W.pop()
            Gp, local_mem = visit_node(Gp, v, W, local_mem, is_allocated)
            at_eval = nx.get_node_attributes(Gp, "eval")
            at_idx = nx.get_node_attributes(Gp, "idx")
            if not at_eval[v]:
                W.append(v)
            else:
                c_code = ccode(v)
                if at_idx[v] == -1:
                    store_node(v, at_idx, local_mem)
                    if is_allocated[at_idx[v]] == True:
                        print("DENDRO_%d=%s;" % (at_idx[v], c_code))
                    else:
                        print("double DENDRO_%d=%s;" % (at_idx[v], c_code))
                        is_allocated[at_idx[v]] = True

                    # print("if ( fabs((DENDRO_%d) - (%s))>1e-6) {printf(\"reduction error %s at DENDRO_%d=%%.8E expected=%%.8E \\n\",DENDRO_%d,%s);}"%(at_idx[v],c_code,v,at_idx[v],at_idx[v],c_code))

                else:
                    # print("if ( fabs((DENDRO_%d) - (%s))>1e-6) {printf(\"reduction error %s at DENDRO_%d=%%.8E expected=%%.8E \\n\",DENDRO_%d,%s);}"%(at_idx[v],c_code,v,at_idx[v],at_idx[v],c_code))
                    if v in lexp:
                        print("%s=DENDRO_%d;" % (lname[lexp.index(v)], at_idx[v]))
                        if Gp.in_degree(v) == 0:
                            evict_node(v, at_idx, local_mem)

            nx.set_node_attributes(Gp, at_eval, "eval")
            nx.set_node_attributes(Gp, at_idx, "idx")
