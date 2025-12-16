#include <cmath>

enum VAR {
    U_ALPHA = 0,
    U_CHI,
    U_K,
    U_GT0,
    U_GT1,
    U_GT2,
    U_BETA0,
    U_BETA1,
    U_BETA2,
    U_B0,
    U_B1,
    U_B2,
    U_SYMGT0,
    U_SYMGT1,
    U_SYMGT2,
    U_SYMGT3,
    U_SYMGT4,
    U_SYMGT5,
    U_SYMAT0,
    U_SYMAT1,
    U_SYMAT2,
    U_SYMAT3,
    U_SYMAT4,
    U_SYMAT5,
    NUM_VARS
};

void rhs_computations(const unsigned int nx, const unsigned int ny,
                      const unsigned int nz, const unsigned int pw,
                      const double t, const double* __restrict__ pmin,
                      const double* __restrict__ pmax,
                      const double* __restrict__ input_rhs,
                      double* __restrict__ output_rhs,
                      double* __restrict__ deriv_base) {
    const double hx                  = (pmax[0] - pmin[0]) / (nx - 1);
    const double hy                  = (pmax[1] - pmin[1]) / (ny - 1);
    const double hz                  = (pmax[2] - pmin[2]) / (nz - 1);

    const unsigned int stride_y      = nx;
    const unsigned int stride_z      = nx * ny;
    const unsigned int n_pts         = nx * ny * nz;

    // set up the pointers
    const double* __restrict__ alpha = &input_rhs[U_ALPHA * n_pts];
    const double* __restrict__ chi   = &input_rhs[U_CHI * n_pts];
    const double* __restrict__ K     = &input_rhs[U_K * n_pts];
    const double* __restrict__ gt0   = &input_rhs[U_SYMGT0 * n_pts];
    const double* __restrict__ gt1   = &input_rhs[U_SYMGT1 * n_pts];
    const double* __restrict__ gt2   = &input_rhs[U_SYMGT2 * n_pts];
    const double* __restrict__ gt3   = &input_rhs[U_SYMGT3 * n_pts];
    const double* __restrict__ gt4   = &input_rhs[U_SYMGT4 * n_pts];
    const double* __restrict__ gt5   = &input_rhs[U_SYMGT5 * n_pts];
    const double* __restrict__ beta0 = &input_rhs[U_BETA0 * n_pts];
    const double* __restrict__ beta1 = &input_rhs[U_BETA1 * n_pts];
    const double* __restrict__ beta2 = &input_rhs[U_BETA2 * n_pts];
    const double* __restrict__ At0   = &input_rhs[U_SYMAT0 * n_pts];
    const double* __restrict__ At1   = &input_rhs[U_SYMAT1 * n_pts];
    const double* __restrict__ At2   = &input_rhs[U_SYMAT2 * n_pts];
    const double* __restrict__ At3   = &input_rhs[U_SYMAT3 * n_pts];
    const double* __restrict__ At4   = &input_rhs[U_SYMAT4 * n_pts];
    const double* __restrict__ At5   = &input_rhs[U_SYMAT5 * n_pts];
    const double* __restrict__ Gt0   = &input_rhs[U_GT0 * n_pts];
    const double* __restrict__ Gt1   = &input_rhs[U_GT1 * n_pts];
    const double* __restrict__ Gt2   = &input_rhs[U_GT2 * n_pts];
    const double* __restrict__ B0    = &input_rhs[U_B0 * n_pts];
    const double* __restrict__ B1    = &input_rhs[U_B1 * n_pts];
    const double* __restrict__ B2    = &input_rhs[U_B2 * n_pts];

    // output values
    double* __restrict__ a_rhs       = &output_rhs[VAR::U_ALPHA * n_pts];
    double* __restrict__ chi_rhs     = &output_rhs[VAR::U_CHI * n_pts];
    double* __restrict__ K_rhs       = &output_rhs[VAR::U_K * n_pts];
    double* __restrict__ gt_rhs00    = &output_rhs[VAR::U_SYMGT0 * n_pts];
    double* __restrict__ gt_rhs01    = &output_rhs[VAR::U_SYMGT1 * n_pts];
    double* __restrict__ gt_rhs02    = &output_rhs[VAR::U_SYMGT2 * n_pts];
    double* __restrict__ gt_rhs11    = &output_rhs[VAR::U_SYMGT3 * n_pts];
    double* __restrict__ gt_rhs12    = &output_rhs[VAR::U_SYMGT4 * n_pts];
    double* __restrict__ gt_rhs22    = &output_rhs[VAR::U_SYMGT5 * n_pts];
    double* __restrict__ b_rhs0      = &output_rhs[VAR::U_BETA0 * n_pts];
    double* __restrict__ b_rhs1      = &output_rhs[VAR::U_BETA1 * n_pts];
    double* __restrict__ b_rhs2      = &output_rhs[VAR::U_BETA2 * n_pts];
    double* __restrict__ At_rhs00    = &output_rhs[VAR::U_SYMAT0 * n_pts];
    double* __restrict__ At_rhs01    = &output_rhs[VAR::U_SYMAT1 * n_pts];
    double* __restrict__ At_rhs02    = &output_rhs[VAR::U_SYMAT2 * n_pts];
    double* __restrict__ At_rhs11    = &output_rhs[VAR::U_SYMAT3 * n_pts];
    double* __restrict__ At_rhs12    = &output_rhs[VAR::U_SYMAT4 * n_pts];
    double* __restrict__ At_rhs22    = &output_rhs[VAR::U_SYMAT5 * n_pts];
    double* __restrict__ Gt_rhs0     = &output_rhs[VAR::U_GT0 * n_pts];
    double* __restrict__ Gt_rhs1     = &output_rhs[VAR::U_GT1 * n_pts];
    double* __restrict__ Gt_rhs2     = &output_rhs[VAR::U_GT2 * n_pts];
    double* __restrict__ B_rhs0      = &output_rhs[VAR::U_B0 * n_pts];
    double* __restrict__ B_rhs1      = &output_rhs[VAR::U_B1 * n_pts];
    double* __restrict__ B_rhs2      = &output_rhs[VAR::U_B2 * n_pts];

    double *ham, *mom0, *mom1, *mom2, *psi4_real, *psi4_img;

    double* __restrict__ grad_0_alpha    = deriv_base + 0 * n_pts;
    double* __restrict__ grad_1_alpha    = deriv_base + 1 * n_pts;
    double* __restrict__ grad_2_alpha    = deriv_base + 2 * n_pts;
    double* __restrict__ grad_0_beta0    = deriv_base + 3 * n_pts;
    double* __restrict__ grad_1_beta0    = deriv_base + 4 * n_pts;
    double* __restrict__ grad_2_beta0    = deriv_base + 5 * n_pts;
    double* __restrict__ grad_0_beta1    = deriv_base + 6 * n_pts;
    double* __restrict__ grad_1_beta1    = deriv_base + 7 * n_pts;
    double* __restrict__ grad_2_beta1    = deriv_base + 8 * n_pts;
    double* __restrict__ grad_0_beta2    = deriv_base + 9 * n_pts;
    double* __restrict__ grad_1_beta2    = deriv_base + 10 * n_pts;
    double* __restrict__ grad_2_beta2    = deriv_base + 11 * n_pts;
    double* __restrict__ grad_0_B0       = deriv_base + 12 * n_pts;
    double* __restrict__ grad_1_B0       = deriv_base + 13 * n_pts;
    double* __restrict__ grad_2_B0       = deriv_base + 14 * n_pts;
    double* __restrict__ grad_0_B1       = deriv_base + 15 * n_pts;
    double* __restrict__ grad_1_B1       = deriv_base + 16 * n_pts;
    double* __restrict__ grad_2_B1       = deriv_base + 17 * n_pts;
    double* __restrict__ grad_0_B2       = deriv_base + 18 * n_pts;
    double* __restrict__ grad_1_B2       = deriv_base + 19 * n_pts;
    double* __restrict__ grad_2_B2       = deriv_base + 20 * n_pts;
    double* __restrict__ grad_0_chi      = deriv_base + 21 * n_pts;
    double* __restrict__ grad_1_chi      = deriv_base + 22 * n_pts;
    double* __restrict__ grad_2_chi      = deriv_base + 23 * n_pts;
    double* __restrict__ grad_0_Gt0      = deriv_base + 24 * n_pts;
    double* __restrict__ grad_1_Gt0      = deriv_base + 25 * n_pts;
    double* __restrict__ grad_2_Gt0      = deriv_base + 26 * n_pts;
    double* __restrict__ grad_0_Gt1      = deriv_base + 27 * n_pts;
    double* __restrict__ grad_1_Gt1      = deriv_base + 28 * n_pts;
    double* __restrict__ grad_2_Gt1      = deriv_base + 29 * n_pts;
    double* __restrict__ grad_0_Gt2      = deriv_base + 30 * n_pts;
    double* __restrict__ grad_1_Gt2      = deriv_base + 31 * n_pts;
    double* __restrict__ grad_2_Gt2      = deriv_base + 32 * n_pts;
    double* __restrict__ grad_0_K        = deriv_base + 33 * n_pts;
    double* __restrict__ grad_1_K        = deriv_base + 34 * n_pts;
    double* __restrict__ grad_2_K        = deriv_base + 35 * n_pts;
    double* __restrict__ grad_0_gt0      = deriv_base + 36 * n_pts;
    double* __restrict__ grad_1_gt0      = deriv_base + 37 * n_pts;
    double* __restrict__ grad_2_gt0      = deriv_base + 38 * n_pts;
    double* __restrict__ grad_0_gt1      = deriv_base + 39 * n_pts;
    double* __restrict__ grad_1_gt1      = deriv_base + 40 * n_pts;
    double* __restrict__ grad_2_gt1      = deriv_base + 41 * n_pts;
    double* __restrict__ grad_0_gt2      = deriv_base + 42 * n_pts;
    double* __restrict__ grad_1_gt2      = deriv_base + 43 * n_pts;
    double* __restrict__ grad_2_gt2      = deriv_base + 44 * n_pts;
    double* __restrict__ grad_0_gt3      = deriv_base + 45 * n_pts;
    double* __restrict__ grad_1_gt3      = deriv_base + 46 * n_pts;
    double* __restrict__ grad_2_gt3      = deriv_base + 47 * n_pts;
    double* __restrict__ grad_0_gt4      = deriv_base + 48 * n_pts;
    double* __restrict__ grad_1_gt4      = deriv_base + 49 * n_pts;
    double* __restrict__ grad_2_gt4      = deriv_base + 50 * n_pts;
    double* __restrict__ grad_0_gt5      = deriv_base + 51 * n_pts;
    double* __restrict__ grad_1_gt5      = deriv_base + 52 * n_pts;
    double* __restrict__ grad_2_gt5      = deriv_base + 53 * n_pts;
    double* __restrict__ grad_0_At0      = deriv_base + 54 * n_pts;
    double* __restrict__ grad_1_At0      = deriv_base + 55 * n_pts;
    double* __restrict__ grad_2_At0      = deriv_base + 56 * n_pts;
    double* __restrict__ grad_0_At1      = deriv_base + 57 * n_pts;
    double* __restrict__ grad_1_At1      = deriv_base + 58 * n_pts;
    double* __restrict__ grad_2_At1      = deriv_base + 59 * n_pts;
    double* __restrict__ grad_0_At2      = deriv_base + 60 * n_pts;
    double* __restrict__ grad_1_At2      = deriv_base + 61 * n_pts;
    double* __restrict__ grad_2_At2      = deriv_base + 62 * n_pts;
    double* __restrict__ grad_0_At3      = deriv_base + 63 * n_pts;
    double* __restrict__ grad_1_At3      = deriv_base + 64 * n_pts;
    double* __restrict__ grad_2_At3      = deriv_base + 65 * n_pts;
    double* __restrict__ grad_0_At4      = deriv_base + 66 * n_pts;
    double* __restrict__ grad_1_At4      = deriv_base + 67 * n_pts;
    double* __restrict__ grad_2_At4      = deriv_base + 68 * n_pts;
    double* __restrict__ grad_0_At5      = deriv_base + 69 * n_pts;
    double* __restrict__ grad_1_At5      = deriv_base + 70 * n_pts;
    double* __restrict__ grad_2_At5      = deriv_base + 71 * n_pts;
    double* __restrict__ grad2_0_0_gt0   = deriv_base + 72 * n_pts;
    double* __restrict__ grad2_0_1_gt0   = deriv_base + 73 * n_pts;
    double* __restrict__ grad2_0_2_gt0   = deriv_base + 74 * n_pts;
    double* __restrict__ grad2_1_1_gt0   = deriv_base + 75 * n_pts;
    double* __restrict__ grad2_1_2_gt0   = deriv_base + 76 * n_pts;
    double* __restrict__ grad2_2_2_gt0   = deriv_base + 77 * n_pts;
    double* __restrict__ grad2_0_0_gt1   = deriv_base + 78 * n_pts;
    double* __restrict__ grad2_0_1_gt1   = deriv_base + 79 * n_pts;
    double* __restrict__ grad2_0_2_gt1   = deriv_base + 80 * n_pts;
    double* __restrict__ grad2_1_1_gt1   = deriv_base + 81 * n_pts;
    double* __restrict__ grad2_1_2_gt1   = deriv_base + 82 * n_pts;
    double* __restrict__ grad2_2_2_gt1   = deriv_base + 83 * n_pts;
    double* __restrict__ grad2_0_0_gt2   = deriv_base + 84 * n_pts;
    double* __restrict__ grad2_0_1_gt2   = deriv_base + 85 * n_pts;
    double* __restrict__ grad2_0_2_gt2   = deriv_base + 86 * n_pts;
    double* __restrict__ grad2_1_1_gt2   = deriv_base + 87 * n_pts;
    double* __restrict__ grad2_1_2_gt2   = deriv_base + 88 * n_pts;
    double* __restrict__ grad2_2_2_gt2   = deriv_base + 89 * n_pts;
    double* __restrict__ grad2_0_0_gt3   = deriv_base + 90 * n_pts;
    double* __restrict__ grad2_0_1_gt3   = deriv_base + 91 * n_pts;
    double* __restrict__ grad2_0_2_gt3   = deriv_base + 92 * n_pts;
    double* __restrict__ grad2_1_1_gt3   = deriv_base + 93 * n_pts;
    double* __restrict__ grad2_1_2_gt3   = deriv_base + 94 * n_pts;
    double* __restrict__ grad2_2_2_gt3   = deriv_base + 95 * n_pts;
    double* __restrict__ grad2_0_0_gt4   = deriv_base + 96 * n_pts;
    double* __restrict__ grad2_0_1_gt4   = deriv_base + 97 * n_pts;
    double* __restrict__ grad2_0_2_gt4   = deriv_base + 98 * n_pts;
    double* __restrict__ grad2_1_1_gt4   = deriv_base + 99 * n_pts;
    double* __restrict__ grad2_1_2_gt4   = deriv_base + 100 * n_pts;
    double* __restrict__ grad2_2_2_gt4   = deriv_base + 101 * n_pts;
    double* __restrict__ grad2_0_0_gt5   = deriv_base + 102 * n_pts;
    double* __restrict__ grad2_0_1_gt5   = deriv_base + 103 * n_pts;
    double* __restrict__ grad2_0_2_gt5   = deriv_base + 104 * n_pts;
    double* __restrict__ grad2_1_1_gt5   = deriv_base + 105 * n_pts;
    double* __restrict__ grad2_1_2_gt5   = deriv_base + 106 * n_pts;
    double* __restrict__ grad2_2_2_gt5   = deriv_base + 107 * n_pts;
    double* __restrict__ grad2_0_0_chi   = deriv_base + 108 * n_pts;
    double* __restrict__ grad2_0_1_chi   = deriv_base + 109 * n_pts;
    double* __restrict__ grad2_0_2_chi   = deriv_base + 110 * n_pts;
    double* __restrict__ grad2_1_1_chi   = deriv_base + 111 * n_pts;
    double* __restrict__ grad2_1_2_chi   = deriv_base + 112 * n_pts;
    double* __restrict__ grad2_2_2_chi   = deriv_base + 113 * n_pts;
    double* __restrict__ grad2_0_0_alpha = deriv_base + 114 * n_pts;
    double* __restrict__ grad2_0_1_alpha = deriv_base + 115 * n_pts;
    double* __restrict__ grad2_0_2_alpha = deriv_base + 116 * n_pts;
    double* __restrict__ grad2_1_1_alpha = deriv_base + 117 * n_pts;
    double* __restrict__ grad2_1_2_alpha = deriv_base + 118 * n_pts;
    double* __restrict__ grad2_2_2_alpha = deriv_base + 119 * n_pts;
    double* __restrict__ grad2_0_0_beta0 = deriv_base + 120 * n_pts;
    double* __restrict__ grad2_0_1_beta0 = deriv_base + 121 * n_pts;
    double* __restrict__ grad2_0_2_beta0 = deriv_base + 122 * n_pts;
    double* __restrict__ grad2_1_1_beta0 = deriv_base + 123 * n_pts;
    double* __restrict__ grad2_1_2_beta0 = deriv_base + 124 * n_pts;
    double* __restrict__ grad2_2_2_beta0 = deriv_base + 125 * n_pts;
    double* __restrict__ grad2_0_0_beta1 = deriv_base + 126 * n_pts;
    double* __restrict__ grad2_0_1_beta1 = deriv_base + 127 * n_pts;
    double* __restrict__ grad2_0_2_beta1 = deriv_base + 128 * n_pts;
    double* __restrict__ grad2_1_1_beta1 = deriv_base + 129 * n_pts;
    double* __restrict__ grad2_1_2_beta1 = deriv_base + 130 * n_pts;
    double* __restrict__ grad2_2_2_beta1 = deriv_base + 131 * n_pts;
    double* __restrict__ grad2_0_0_beta2 = deriv_base + 132 * n_pts;
    double* __restrict__ grad2_0_1_beta2 = deriv_base + 133 * n_pts;
    double* __restrict__ grad2_0_2_beta2 = deriv_base + 134 * n_pts;
    double* __restrict__ grad2_1_1_beta2 = deriv_base + 135 * n_pts;
    double* __restrict__ grad2_1_2_beta2 = deriv_base + 136 * n_pts;
    double* __restrict__ grad2_2_2_beta2 = deriv_base + 137 * n_pts;

    const unsigned int lambda[4]         = {1, 3, 4, 1};
    const double A_lambda[3]             = {0.01, 0.03, 0.04};
    const double lambda_f[2]             = {0.01, 0.03};
    const double dx_i                    = 1.0;  // hx placeholder
    const double h_ssl                   = 0.01;
    const double sig_ssl                 = 1.45;
    const double BSSN_CAHD_C             = 0.0;
    const double RIT_ETA_WIDTH           = 1.0;
    const double RIT_ETA_CENTRAL         = 0.0;
    const double RIT_ETA_OUTER           = 1.0;
    const double dt                      = 0.01;

    for (unsigned int k = pw; k < nz - pw; k++) {
        const double z = pmin[2] + k * hz;
        for (unsigned int j = pw; j < ny - pw; j++) {
            const double y      = pmin[1] + j * hy;
            unsigned int offset = k * stride_z + j * stride_y;
            for (unsigned int i = pw; i < nx - pw; i++) {
                const double x       = pmin[0] + i * hx;
                const double r_coord = (x * x + y * y + z * z);

                const double w       = r_coord / RIT_ETA_WIDTH;
                const double arg     = -w * w * w * w;
                const double eta =
                    (RIT_ETA_CENTRAL - RIT_ETA_OUTER) * exp(arg) +
                    RIT_ETA_OUTER;

                const unsigned int pp = i + offset;

                // COPY AND PASTE THE CODE IN HERE
            }
        }
    }
}
