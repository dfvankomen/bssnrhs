"""
BSSN core variables .
"""

import argparse
import sys as sys

import dendro
from sympy import symbols, sqrt, exp, Rational, Matrix

###################################################################
# Math Initialization **
###################################################################

l1, l2, l3, l4, eta = symbols("lambda[0] lambda[1] lambda[2] lambda[3] eta")
lf0, lf1 = symbols("lambda_f[0] lambda_f[1]")

# Additional parameters for damping term
R0 = symbols("BSSN_ETA_R0")
ep1, ep2 = symbols("BSSN_ETA_POWER[0] BSSN_ETA_POWER[1]")

xi1, xi2, xi3 = symbols("BSSN_XI[0] BSSN_XI[1] BSSN_XI[2] ")

# ------
# declare variables
a = dendro.scalar("alpha", "[pp]")
chi = dendro.scalar("chi", "[pp]")
K = dendro.scalar("K", "[pp]")

Gt = dendro.vec3("Gt", "[pp]")
b = dendro.vec3("beta", "[pp]")
B = dendro.vec3("B", "[pp]")

gt = dendro.sym_3x3("gt", "[pp]")
At = dendro.sym_3x3("At", "[pp]")

Gt_rhs = dendro.vec3("Gt_rhs", "[pp]")

# -----
# Lie derivative weight
weight = -Rational(2, 3)
weight_Gt = Rational(2, 3)

# specify the functions for computing first and second derivatives
dendro.d = lambda i, x: symbols("grad_%d_%s" % (i, x))
dendro.d2 = lambda i, j, x: symbols("grad2_%d_%d_%s" % (min(i, j), max(i, j), x))
dendro.ad = dendro.d
dendro.kod = dendro.undef

d = dendro.d
ad = dendro.ad
kod = dendro.kod
d2 = dendro.d2

# CAD/SSL SYMBOLS
t = symbols("t")  # time; needed for SSL
ham = symbols("ham[pp]")  # hamiltonian constraint violation
C_CAHD = symbols("BSSN_CAHD_C")  # coefficient for CAHD strength
dt = symbols("dt")  # simulation time step
dx_i = symbols("dx_i")  # spatial resolution of current grid
dx_min = symbols("dx_min")  # spatial resolution of finest grid

dendro.set_metric(gt)
igt = dendro.get_inverse_metric()

ham_temp_var = symbols("ham_temp")


eta_func = (
    R0
    * sqrt(sum([igt[i, j] * d(i, chi) * d(j, chi) for i, j in dendro.e_ij]))
    / ((1 - chi**ep1) ** ep2)
)


def compute_bssn_rhs(
    gauge="standard", eta_val=eta, enable_ssl=False, enable_cahd=False
):
    """
    Compute the RHS for the BSSN Equations
    """

    # precompute the christoffel symbols and ricci, note that this sets some global vars
    C1 = dendro.get_first_christoffel()
    C2 = dendro.get_second_christoffel()
    C2_spatial = dendro.get_complete_christoffel(chi)
    [R, Rt, Rphi, CalGt] = dendro.compute_ricci(Gt, chi)

    if enable_ssl:
        # enable slow-start lapse
        W = chi**0.5

        h = symbols("h_ssl")
        sig = symbols("sig_ssl")
        # h = 0.6
        # sig = 20
        a_rhs = (
            l1 * dendro.lie(b, a)
            - 2 * a * K
            - W * (h * exp(-(t**2) / (2 * sig**2))) * (a - W)
        )
    else:
        a_rhs = l1 * dendro.lie(b, a) - 2 * a * K

    # beta, the shift is gauge dependent
    if gauge == "rochester":
        b_rhs = [
            (
                xi2 * dendro.vec_j_ad_j(b, b[i])
                + Rational(3, 4) * xi3 * Gt[i]
                - eta_val * b[i]
            )
            for i in dendro.e_i
        ]
    else:
        # standard shift
        b_rhs = [
            (Rational(3, 4) * (lf0 + lf1 * a) * B[i] + l2 * dendro.vec_j_ad_j(b, b[i]))
            for i in dendro.e_i
        ]

    # metric evolution
    gt_rhs = dendro.lie(b, gt, weight) - 2 * a * At
    chi_rhs = dendro.lie(b, chi, weight) + Rational(2, 3) * (chi * a * K)

    if enable_cahd:
        # curvature-adjusted Hamiltonian constraint damping
        ham_computation = (
            sum(chi * igt[j, k] * R[j, k] for j, k in dendro.e_ij)
            - dendro.sqr(At)
            + Rational(2, 3) * K**2
        )
        # chi_rhs += C_CAHD * chi * (dt * dx_i / dx_min) * ham # Etienne's method
        chi_rhs += C_CAHD * chi * (dx_i**2 / dt) * ham_computation  # WKB's method

    # Now for the Extrinsic Curvature Evolution
    AikAkj = Matrix(
        [
            sum(
                [
                    At[i, k]
                    * sum([dendro.inv_metric[k, l] * At[l, j] for l in dendro.e_i])
                    for k in dendro.e_i
                ]
            )
            for i, j in dendro.e_ij
        ]
    )

    At_rhs = (
        dendro.lie(b, At, weight)
        + chi * dendro.trace_free(a * R - dendro.DiDj(a))
        + a * (K * At - 2 * AikAkj.reshape(3, 3))
    )

    K_rhs = (
        dendro.lie(b, K) - dendro.laplacian(a, chi) + a * (K * K / 3 + dendro.sqr(At))
    )

    # Conformal evolution (Gt)
    At_UU = dendro.up_up(At)

    Gt_rhs = (
        Matrix([sum(b[j] * ad(j, Gt[i]) for j in dendro.e_i) for i in dendro.e_i])
        - Matrix([sum(CalGt[j] * d(j, b[i]) for j in dendro.e_i) for i in dendro.e_i])
        + Rational(2, 3)
        * Matrix([CalGt[i] * sum(d(j, b[j]) for j in dendro.e_i) for i in dendro.e_i])
        + Matrix(
            [
                sum(
                    [
                        igt[j, k] * d2(j, k, b[i]) + igt[i, j] * d2(j, k, b[k]) / 3
                        for j, k in dendro.e_ij
                    ]
                )
                for i in dendro.e_i
            ]
        )
        - Matrix(
            [sum([2 * At_UU[i, j] * d(j, a) for j in dendro.e_i]) for i in dendro.e_i]
        )
        + Matrix(
            [
                sum([2 * a * dendro.C2[i, j, k] * At_UU[j, k] for j, k in dendro.e_ij])
                for i in dendro.e_i
            ]
        )
        - Matrix(
            [
                sum(
                    [
                        a
                        * (
                            3 / chi * At_UU[i, j] * d(j, chi)
                            + Rational(4, 3) * dendro.inv_metric[i, j] * d(j, K)
                        )
                        for j in dendro.e_i
                    ]
                )
                for i in dendro.e_i
            ]
        )
    )

    # flatten out Gt_rhs
    Gt_rhs = [item for sublist in Gt_rhs.tolist() for item in sublist]

    # B_rhs is based on Gt_rhs in standard gauge
    if gauge == "standard":
        B_rhs = [
            (
                Gt_rhs[i]
                - eta_val * B[i]
                + l3 * dendro.vec_j_ad_j(b, B[i])
                - l4 * dendro.vec_j_ad_j(b, Gt[i])
            )
            for i in dendro.e_i
        ]
    else:
        # rochester gauge doesn't evolve B
        B_rhs = [Rational(0, 1), Rational(0, 1), Rational(0, 1)]

    return {
        "a_rhs": a_rhs,
        "b_rhs": b_rhs,
        "gt_rhs": gt_rhs,
        "chi_rhs": chi_rhs,
        "At_rhs": At_rhs,
        "K_rhs": K_rhs,
        "Gt_rhs": Gt_rhs,
        "B_rhs": B_rhs,
        # NOTE: calgt is exposed for the staged structure
        "CalGt": CalGt,
    }


def generate_code(staged_type, gauge, eta_damp, prefix, enable_ssl, enable_cahd):
    eta_val = eta_func if eta_damp == "func" else eta

    print(
        f"//Codgen: gauge={gauge}, eta={eta_damp}, ssl={enable_ssl}, cahd={enable_cahd}"
    )

    # compute everything
    rhs_dict = compute_bssn_rhs(gauge, eta_val, enable_ssl, enable_cahd)

    # extract the lists for code generation like we've done before
    outs = [
        rhs_dict["a_rhs"],
        rhs_dict["b_rhs"],
        rhs_dict["gt_rhs"],
        rhs_dict["chi_rhs"],
        rhs_dict["At_rhs"],
        rhs_dict["K_rhs"],
        rhs_dict["Gt_rhs"],
        rhs_dict["B_rhs"],
    ]
    vnames = [
        "a_rhs",
        "b_rhs",
        "gt_rhs",
        "chi_rhs",
        "At_rhs",
        "K_rhs",
        "Gt_rhs",
        "B_rhs",
    ]

    # then generate the code
    # TODO: staged generation
    if staged_type == "staged":
        # staging originally split stuff
        pass

    print("//Codgen: Generating Optimized Block Code...")

    ex, vnames, idx = dendro.construct_expression_list(outs, vnames, "[pp]")

    cse_list = dendro.construct_cse(ex, vnames, "[pp]")

    output_code_original = dendro.generate_cpu_preextracted(
        cse_list[0], vnames, "[pp]", cse_list[1], generate_for_python=False
    )

    with open(f"{prefix}_bssn_ORIGINAL.cpp", "w") as f:
        f.write(output_code_original)

    output_code = dendro.generate_cpu_blocks(
        outs,
        vnames,
        "[pp]",
        cse_data=cse_list[0],
        orig_ops=cse_list[1],
        lname=vnames,
        lexp=ex,
    )

    with open(f"{prefix}_bssn_BLOCKS.cpp", "w") as f:
        f.write(output_code)


# choices...

if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        prog="BSSN Code Generation",
        description="Generate the Code for the BSSN RHS equations.",
    )

    parser.add_argument(
        "-t",
        "--staged_type",
        choices=["staged", "unstaged"],
        default="unstaged",
        help="If we should use staged or unstaged code",
    )
    parser.add_argument(
        "-g",
        "--gauge",
        choices=["standard", "rochester"],
        default="standard",
        help="The gauge type",
    )
    parser.add_argument(
        "-e",
        "--eta_damp",
        choices=["const", "func"],
        default="const",
        help="The eta damping type, a function or a constant",
    )
    parser.add_argument(
        "-p",
        "--prefix",
        help="The file prefix output code",
        default="output_",
    )
    parser.add_argument(
        "-s",
        "--enable_ssl",
        action="store_true",
        help="Whether or not to generate with the SSL code",
    )
    parser.add_argument(
        "-c",
        "--enable_cahd",
        action="store_true",
        help="Whether or not to enable CAHD",
    )

    args = parser.parse_args()

    generate_code(**vars(args))
