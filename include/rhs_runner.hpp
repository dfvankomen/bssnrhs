#pragma once

#include <functional>
#include <map>
#include <stdexcept>
#include <string>

#include "bssnrhstests.hpp"

namespace bssnrhstests {

struct RHSFunctionInputs {
    const double *const alpha;
    const double *const chi;
    const double *const K;
    const double *const gt0;
    const double *const gt1;
    const double *const gt2;
    const double *const gt3;
    const double *const gt4;
    const double *const gt5;
    const double *const beta0;
    const double *const beta1;
    const double *const beta2;
    const double *const At0;
    const double *const At1;
    const double *const At2;
    const double *const At3;
    const double *const At4;
    const double *const At5;
    const double *const Gt0;
    const double *const Gt1;
    const double *const Gt2;
    const double *const B0;
    const double *const B1;
    const double *const B2;

    double *const a_rhs;
    double *const chi_rhs;
    double *const K_rhs;
    double *const gt_rhs00;
    double *const gt_rhs01;
    double *const gt_rhs02;
    double *const gt_rhs11;
    double *const gt_rhs12;
    double *const gt_rhs22;
    double *const b_rhs0;
    double *const b_rhs1;
    double *const b_rhs2;
    double *const At_rhs00;
    double *const At_rhs01;
    double *const At_rhs02;
    double *const At_rhs11;
    double *const At_rhs12;
    double *const At_rhs22;
    double *const Gt_rhs0;
    double *const Gt_rhs1;
    double *const Gt_rhs2;
    double *const B_rhs0;
    double *const B_rhs1;
    double *const B_rhs2;

    // all gradient/derivative pointers
    double *grad_0_alpha, *grad_1_alpha, *grad_2_alpha, *grad_0_beta0,
        *grad_1_beta0, *grad_2_beta0, *grad_0_beta1, *grad_1_beta1,
        *grad_2_beta1, *grad_0_beta2, *grad_1_beta2, *grad_2_beta2, *grad_0_B0,
        *grad_1_B0, *grad_2_B0, *grad_0_B1, *grad_1_B1, *grad_2_B1, *grad_0_B2,
        *grad_1_B2, *grad_2_B2, *grad_0_chi, *grad_1_chi, *grad_2_chi,
        *grad_0_Gt0, *grad_1_Gt0, *grad_2_Gt0, *grad_0_Gt1, *grad_1_Gt1,
        *grad_2_Gt1, *grad_0_Gt2, *grad_1_Gt2, *grad_2_Gt2, *grad_0_K,
        *grad_1_K, *grad_2_K, *grad_0_gt0, *grad_1_gt0, *grad_2_gt0,
        *grad_0_gt1, *grad_1_gt1, *grad_2_gt1, *grad_0_gt2, *grad_1_gt2,
        *grad_2_gt2, *grad_0_gt3, *grad_1_gt3, *grad_2_gt3, *grad_0_gt4,
        *grad_1_gt4, *grad_2_gt4, *grad_0_gt5, *grad_1_gt5, *grad_2_gt5,
        *grad_0_At0, *grad_1_At0, *grad_2_At0, *grad_0_At1, *grad_1_At1,
        *grad_2_At1, *grad_0_At2, *grad_1_At2, *grad_2_At2, *grad_0_At3,
        *grad_1_At3, *grad_2_At3, *grad_0_At4, *grad_1_At4, *grad_2_At4,
        *grad_0_At5, *grad_1_At5, *grad_2_At5, *grad2_0_0_gt0, *grad2_0_1_gt0,
        *grad2_0_2_gt0, *grad2_1_1_gt0, *grad2_1_2_gt0, *grad2_2_2_gt0,
        *grad2_0_0_gt1, *grad2_0_1_gt1, *grad2_0_2_gt1, *grad2_1_1_gt1,
        *grad2_1_2_gt1, *grad2_2_2_gt1, *grad2_0_0_gt2, *grad2_0_1_gt2,
        *grad2_0_2_gt2, *grad2_1_1_gt2, *grad2_1_2_gt2, *grad2_2_2_gt2,
        *grad2_0_0_gt3, *grad2_0_1_gt3, *grad2_0_2_gt3, *grad2_1_1_gt3,
        *grad2_1_2_gt3, *grad2_2_2_gt3, *grad2_0_0_gt4, *grad2_0_1_gt4,
        *grad2_0_2_gt4, *grad2_1_1_gt4, *grad2_1_2_gt4, *grad2_2_2_gt4,
        *grad2_0_0_gt5, *grad2_0_1_gt5, *grad2_0_2_gt5, *grad2_1_1_gt5,
        *grad2_1_2_gt5, *grad2_2_2_gt5, *grad2_0_0_chi, *grad2_0_1_chi,
        *grad2_0_2_chi, *grad2_1_1_chi, *grad2_1_2_chi, *grad2_2_2_chi,
        *grad2_0_0_alpha, *grad2_0_1_alpha, *grad2_0_2_alpha, *grad2_1_1_alpha,
        *grad2_1_2_alpha, *grad2_2_2_alpha, *grad2_0_0_beta0, *grad2_0_1_beta0,
        *grad2_0_2_beta0, *grad2_1_1_beta0, *grad2_1_2_beta0, *grad2_2_2_beta0,
        *grad2_0_0_beta1, *grad2_0_1_beta1, *grad2_0_2_beta1, *grad2_1_1_beta1,
        *grad2_1_2_beta1, *grad2_2_2_beta1, *grad2_0_0_beta2, *grad2_0_1_beta2,
        *grad2_0_2_beta2, *grad2_1_1_beta2, *grad2_1_2_beta2, *grad2_2_2_beta2;

    const unsigned int bflag;

    const unsigned int nx;
    const unsigned int ny;
    const unsigned int nz;

    const double hx;
    const double hy;
    const double hz;

    double pmin[3] = {0.0, 0.0, 0.0};

    RHSFunctionInputs(
        // input data pointers
        const double *alpha, const double *chi, const double *K,
        const double *gt0, const double *gt1, const double *gt2,
        const double *gt3, const double *gt4, const double *gt5,
        const double *beta0, const double *beta1, const double *beta2,
        const double *At0, const double *At1, const double *At2,
        const double *At3, const double *At4, const double *At5,
        const double *Gt0, const double *Gt1, const double *Gt2,
        const double *B0, const double *B1, const double *B2,

        // output data pointers
        double *rhs_alpha, double *rhs_chi, double *rhs_K, double *rhs_gt0,
        double *rhs_gt1, double *rhs_gt2, double *rhs_gt3, double *rhs_gt4,
        double *rhs_gt5, double *rhs_beta0, double *rhs_beta1,
        double *rhs_beta2, double *rhs_At0, double *rhs_At1, double *rhs_At2,
        double *rhs_At3, double *rhs_At4, double *rhs_At5, double *rhs_Gt0,
        double *rhs_Gt1, double *rhs_Gt2, double *rhs_B0, double *rhs_B1,
        double *rhs_B2,

        // additional data
        const unsigned int bflag, const unsigned int nx, const unsigned int ny,
        const unsigned int nz, const double hx, const double hy,
        const double hz, const double pmin[3], double *const deriv_base)
        : alpha(alpha),
          chi(chi),
          K(K),
          gt0(gt0),
          gt1(gt1),
          gt2(gt2),
          gt3(gt3),
          gt4(gt4),
          gt5(gt5),
          beta0(beta0),
          beta1(beta1),
          beta2(beta2),
          At0(At0),
          At1(At1),
          At2(At2),
          At3(At3),
          At4(At4),
          At5(At5),
          Gt0(Gt0),
          Gt1(Gt1),
          Gt2(Gt2),
          B0(B0),
          B1(B1),
          B2(B2),

          a_rhs(rhs_alpha),
          chi_rhs(rhs_chi),
          K_rhs(rhs_K),
          gt_rhs00(rhs_gt0),
          gt_rhs01(rhs_gt1),
          gt_rhs02(rhs_gt2),
          gt_rhs11(rhs_gt3),
          gt_rhs12(rhs_gt4),
          gt_rhs22(rhs_gt5),
          b_rhs0(rhs_beta0),
          b_rhs1(rhs_beta1),
          b_rhs2(rhs_beta2),
          At_rhs00(rhs_At0),
          At_rhs01(rhs_At1),
          At_rhs02(rhs_At2),
          At_rhs11(rhs_At3),
          At_rhs12(rhs_At4),
          At_rhs22(rhs_At5),
          Gt_rhs0(rhs_Gt0),
          Gt_rhs1(rhs_Gt1),
          Gt_rhs2(rhs_Gt2),
          B_rhs0(rhs_B0),
          B_rhs1(rhs_B1),
          B_rhs2(rhs_B2),
          bflag(bflag),
          nx(nx),
          ny(ny),
          nz(nz),
          hx(hx),
          hy(hy),
          hz(hz) {
        const unsigned int BLK_SZ = nx * ny * nz;
        this->pmin[0]             = pmin[0];
        this->pmin[1]             = pmin[1];
        this->pmin[2]             = pmin[2];

        grad_0_alpha              = deriv_base + 0 * BLK_SZ;
        grad_1_alpha              = deriv_base + 1 * BLK_SZ;
        grad_2_alpha              = deriv_base + 2 * BLK_SZ;
        grad_0_beta0              = deriv_base + 3 * BLK_SZ;
        grad_1_beta0              = deriv_base + 4 * BLK_SZ;
        grad_2_beta0              = deriv_base + 5 * BLK_SZ;
        grad_0_beta1              = deriv_base + 6 * BLK_SZ;
        grad_1_beta1              = deriv_base + 7 * BLK_SZ;
        grad_2_beta1              = deriv_base + 8 * BLK_SZ;
        grad_0_beta2              = deriv_base + 9 * BLK_SZ;
        grad_1_beta2              = deriv_base + 10 * BLK_SZ;
        grad_2_beta2              = deriv_base + 11 * BLK_SZ;
        grad_0_B0                 = deriv_base + 12 * BLK_SZ;
        grad_1_B0                 = deriv_base + 13 * BLK_SZ;
        grad_2_B0                 = deriv_base + 14 * BLK_SZ;
        grad_0_B1                 = deriv_base + 15 * BLK_SZ;
        grad_1_B1                 = deriv_base + 16 * BLK_SZ;
        grad_2_B1                 = deriv_base + 17 * BLK_SZ;
        grad_0_B2                 = deriv_base + 18 * BLK_SZ;
        grad_1_B2                 = deriv_base + 19 * BLK_SZ;
        grad_2_B2                 = deriv_base + 20 * BLK_SZ;
        grad_0_chi                = deriv_base + 21 * BLK_SZ;
        grad_1_chi                = deriv_base + 22 * BLK_SZ;
        grad_2_chi                = deriv_base + 23 * BLK_SZ;
        grad_0_Gt0                = deriv_base + 24 * BLK_SZ;
        grad_1_Gt0                = deriv_base + 25 * BLK_SZ;
        grad_2_Gt0                = deriv_base + 26 * BLK_SZ;
        grad_0_Gt1                = deriv_base + 27 * BLK_SZ;
        grad_1_Gt1                = deriv_base + 28 * BLK_SZ;
        grad_2_Gt1                = deriv_base + 29 * BLK_SZ;
        grad_0_Gt2                = deriv_base + 30 * BLK_SZ;
        grad_1_Gt2                = deriv_base + 31 * BLK_SZ;
        grad_2_Gt2                = deriv_base + 32 * BLK_SZ;
        grad_0_K                  = deriv_base + 33 * BLK_SZ;
        grad_1_K                  = deriv_base + 34 * BLK_SZ;
        grad_2_K                  = deriv_base + 35 * BLK_SZ;
        grad_0_gt0                = deriv_base + 36 * BLK_SZ;
        grad_1_gt0                = deriv_base + 37 * BLK_SZ;
        grad_2_gt0                = deriv_base + 38 * BLK_SZ;
        grad_0_gt1                = deriv_base + 39 * BLK_SZ;
        grad_1_gt1                = deriv_base + 40 * BLK_SZ;
        grad_2_gt1                = deriv_base + 41 * BLK_SZ;
        grad_0_gt2                = deriv_base + 42 * BLK_SZ;
        grad_1_gt2                = deriv_base + 43 * BLK_SZ;
        grad_2_gt2                = deriv_base + 44 * BLK_SZ;
        grad_0_gt3                = deriv_base + 45 * BLK_SZ;
        grad_1_gt3                = deriv_base + 46 * BLK_SZ;
        grad_2_gt3                = deriv_base + 47 * BLK_SZ;
        grad_0_gt4                = deriv_base + 48 * BLK_SZ;
        grad_1_gt4                = deriv_base + 49 * BLK_SZ;
        grad_2_gt4                = deriv_base + 50 * BLK_SZ;
        grad_0_gt5                = deriv_base + 51 * BLK_SZ;
        grad_1_gt5                = deriv_base + 52 * BLK_SZ;
        grad_2_gt5                = deriv_base + 53 * BLK_SZ;
        grad_0_At0                = deriv_base + 54 * BLK_SZ;
        grad_1_At0                = deriv_base + 55 * BLK_SZ;
        grad_2_At0                = deriv_base + 56 * BLK_SZ;
        grad_0_At1                = deriv_base + 57 * BLK_SZ;
        grad_1_At1                = deriv_base + 58 * BLK_SZ;
        grad_2_At1                = deriv_base + 59 * BLK_SZ;
        grad_0_At2                = deriv_base + 60 * BLK_SZ;
        grad_1_At2                = deriv_base + 61 * BLK_SZ;
        grad_2_At2                = deriv_base + 62 * BLK_SZ;
        grad_0_At3                = deriv_base + 63 * BLK_SZ;
        grad_1_At3                = deriv_base + 64 * BLK_SZ;
        grad_2_At3                = deriv_base + 65 * BLK_SZ;
        grad_0_At4                = deriv_base + 66 * BLK_SZ;
        grad_1_At4                = deriv_base + 67 * BLK_SZ;
        grad_2_At4                = deriv_base + 68 * BLK_SZ;
        grad_0_At5                = deriv_base + 69 * BLK_SZ;
        grad_1_At5                = deriv_base + 70 * BLK_SZ;
        grad_2_At5                = deriv_base + 71 * BLK_SZ;
        grad2_0_0_gt0             = deriv_base + 72 * BLK_SZ;
        grad2_0_1_gt0             = deriv_base + 73 * BLK_SZ;
        grad2_0_2_gt0             = deriv_base + 74 * BLK_SZ;
        grad2_1_1_gt0             = deriv_base + 75 * BLK_SZ;
        grad2_1_2_gt0             = deriv_base + 76 * BLK_SZ;
        grad2_2_2_gt0             = deriv_base + 77 * BLK_SZ;
        grad2_0_0_gt1             = deriv_base + 78 * BLK_SZ;
        grad2_0_1_gt1             = deriv_base + 79 * BLK_SZ;
        grad2_0_2_gt1             = deriv_base + 80 * BLK_SZ;
        grad2_1_1_gt1             = deriv_base + 81 * BLK_SZ;
        grad2_1_2_gt1             = deriv_base + 82 * BLK_SZ;
        grad2_2_2_gt1             = deriv_base + 83 * BLK_SZ;
        grad2_0_0_gt2             = deriv_base + 84 * BLK_SZ;
        grad2_0_1_gt2             = deriv_base + 85 * BLK_SZ;
        grad2_0_2_gt2             = deriv_base + 86 * BLK_SZ;
        grad2_1_1_gt2             = deriv_base + 87 * BLK_SZ;
        grad2_1_2_gt2             = deriv_base + 88 * BLK_SZ;
        grad2_2_2_gt2             = deriv_base + 89 * BLK_SZ;
        grad2_0_0_gt3             = deriv_base + 90 * BLK_SZ;
        grad2_0_1_gt3             = deriv_base + 91 * BLK_SZ;
        grad2_0_2_gt3             = deriv_base + 92 * BLK_SZ;
        grad2_1_1_gt3             = deriv_base + 93 * BLK_SZ;
        grad2_1_2_gt3             = deriv_base + 94 * BLK_SZ;
        grad2_2_2_gt3             = deriv_base + 95 * BLK_SZ;
        grad2_0_0_gt4             = deriv_base + 96 * BLK_SZ;
        grad2_0_1_gt4             = deriv_base + 97 * BLK_SZ;
        grad2_0_2_gt4             = deriv_base + 98 * BLK_SZ;
        grad2_1_1_gt4             = deriv_base + 99 * BLK_SZ;
        grad2_1_2_gt4             = deriv_base + 100 * BLK_SZ;
        grad2_2_2_gt4             = deriv_base + 101 * BLK_SZ;
        grad2_0_0_gt5             = deriv_base + 102 * BLK_SZ;
        grad2_0_1_gt5             = deriv_base + 103 * BLK_SZ;
        grad2_0_2_gt5             = deriv_base + 104 * BLK_SZ;
        grad2_1_1_gt5             = deriv_base + 105 * BLK_SZ;
        grad2_1_2_gt5             = deriv_base + 106 * BLK_SZ;
        grad2_2_2_gt5             = deriv_base + 107 * BLK_SZ;
        grad2_0_0_chi             = deriv_base + 108 * BLK_SZ;
        grad2_0_1_chi             = deriv_base + 109 * BLK_SZ;
        grad2_0_2_chi             = deriv_base + 110 * BLK_SZ;
        grad2_1_1_chi             = deriv_base + 111 * BLK_SZ;
        grad2_1_2_chi             = deriv_base + 112 * BLK_SZ;
        grad2_2_2_chi             = deriv_base + 113 * BLK_SZ;
        grad2_0_0_alpha           = deriv_base + 114 * BLK_SZ;
        grad2_0_1_alpha           = deriv_base + 115 * BLK_SZ;
        grad2_0_2_alpha           = deriv_base + 116 * BLK_SZ;
        grad2_1_1_alpha           = deriv_base + 117 * BLK_SZ;
        grad2_1_2_alpha           = deriv_base + 118 * BLK_SZ;
        grad2_2_2_alpha           = deriv_base + 119 * BLK_SZ;
        grad2_0_0_beta0           = deriv_base + 120 * BLK_SZ;
        grad2_0_1_beta0           = deriv_base + 121 * BLK_SZ;
        grad2_0_2_beta0           = deriv_base + 122 * BLK_SZ;
        grad2_1_1_beta0           = deriv_base + 123 * BLK_SZ;
        grad2_1_2_beta0           = deriv_base + 124 * BLK_SZ;
        grad2_2_2_beta0           = deriv_base + 125 * BLK_SZ;
        grad2_0_0_beta1           = deriv_base + 126 * BLK_SZ;
        grad2_0_1_beta1           = deriv_base + 127 * BLK_SZ;
        grad2_0_2_beta1           = deriv_base + 128 * BLK_SZ;
        grad2_1_1_beta1           = deriv_base + 129 * BLK_SZ;
        grad2_1_2_beta1           = deriv_base + 130 * BLK_SZ;
        grad2_2_2_beta1           = deriv_base + 131 * BLK_SZ;
        grad2_0_0_beta2           = deriv_base + 132 * BLK_SZ;
        grad2_0_1_beta2           = deriv_base + 133 * BLK_SZ;
        grad2_0_2_beta2           = deriv_base + 134 * BLK_SZ;
        grad2_1_1_beta2           = deriv_base + 135 * BLK_SZ;
        grad2_1_2_beta2           = deriv_base + 136 * BLK_SZ;
        grad2_2_2_beta2           = deriv_base + 137 * BLK_SZ;
    }
};

using BSSNRHSFunction = std::function<void(const RHSFunctionInputs &)>;

extern std::map<std::string, BSSNRHSFunction> rhs_functions_;

void register_rhs_function(const std::string &name, BSSNRHSFunction func);

void register_all_rhs_functions();

void run_rhs_function(std::string &func_name);

void bssn_bcs(double *f_rhs, const double *f, const double *dxf,
              const double *dyf, const double *dzf, const double *pmin,
              const double *pmax, const double f_falloff,
              const double f_asymptotic, const unsigned int *sz,
              const unsigned int &bflag);

}  // namespace bssnrhstests
