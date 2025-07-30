#include "rhs_runner.hpp"

#include <chrono>
#include <iostream>
#include <ostream>
#include <stdexcept>

#include "bssnrhstests.hpp"
#include "derivs.h"

// rhs function includes
#include "rhsfuncs/default_rhs.hpp"
#include "rhsfuncs/nothing_rhs.hpp"
#include "rhsfuncs/ssl_cahd_rhs.hpp"

namespace bssnrhstests {

std::map<std::string, BSSNRHSFunction> rhs_functions_;

void register_all_rhs_functions() {
    register_rhs_function("default", rhs::default_original_rhs);
    register_rhs_function("nothing", rhs::do_nothing_rhs);
    register_rhs_function("ssl-cahd", rhs::ssl_cahd_original_rhs);
}

void register_rhs_function(const std::string &name, BSSNRHSFunction func) {
    rhs_functions_[name] = func;
}

void run_rhs_function(std::string &func_name) {
    // first fill the rhs vector with junk
    bssnrhstests::fill_vector_with_random_junk(bssnrhstests::vars_rhs);

    auto it = rhs_functions_.find(func_name);
    if (it == rhs_functions_.end()) {
        throw std::runtime_error("Unknown RHS: " + func_name);
    }

    auto start_time = std::chrono::high_resolution_clock::now();

    // take the vectors and 3d-ify them
    DendroScalar *uZipVars[bssnrhstests::bssn_num_vars];
    DendroScalar *unzipVarsRHS[bssnrhstests::bssn_num_vars];
    DendroScalar *uZipConstVars[bssnrhstests::bssn_num_consts];

    to_2d(bssnrhstests::vars, uZipVars, (size_t)bssnrhstests::total_pts_per_var,
          (size_t)bssnrhstests::bssn_num_vars);

    to_2d(bssnrhstests::vars_rhs, unzipVarsRHS,
          (size_t)bssnrhstests::total_pts_per_var,
          (size_t)bssnrhstests::bssn_num_vars);

    to_2d(bssnrhstests::constraints_vec, uZipConstVars,
          (size_t)bssnrhstests::total_pts_per_const,
          (size_t)bssnrhstests::bssn_num_consts);

    for (unsigned int iblk = 0; iblk < bssnrhstests::numBlocks; iblk++) {
        // gather the data from our globals
        const auto &blk           = bssnrhstests::block_list[iblk];
        const unsigned int offset = blk.offset;

        const double *const alpha = &uZipVars[VAR::U_ALPHA][offset];
        const double *const chi   = &uZipVars[VAR::U_CHI][offset];
        const double *const K     = &uZipVars[VAR::U_K][offset];
        const double *const gt0   = &uZipVars[VAR::U_SYMGT0][offset];
        const double *const gt1   = &uZipVars[VAR::U_SYMGT1][offset];
        const double *const gt2   = &uZipVars[VAR::U_SYMGT2][offset];
        const double *const gt3   = &uZipVars[VAR::U_SYMGT3][offset];
        const double *const gt4   = &uZipVars[VAR::U_SYMGT4][offset];
        const double *const gt5   = &uZipVars[VAR::U_SYMGT5][offset];
        const double *const beta0 = &uZipVars[VAR::U_BETA0][offset];
        const double *const beta1 = &uZipVars[VAR::U_BETA1][offset];
        const double *const beta2 = &uZipVars[VAR::U_BETA2][offset];
        const double *const At0   = &uZipVars[VAR::U_SYMAT0][offset];
        const double *const At1   = &uZipVars[VAR::U_SYMAT1][offset];
        const double *const At2   = &uZipVars[VAR::U_SYMAT2][offset];
        const double *const At3   = &uZipVars[VAR::U_SYMAT3][offset];
        const double *const At4   = &uZipVars[VAR::U_SYMAT4][offset];
        const double *const At5   = &uZipVars[VAR::U_SYMAT5][offset];
        const double *const Gt0   = &uZipVars[VAR::U_GT0][offset];
        const double *const Gt1   = &uZipVars[VAR::U_GT1][offset];
        const double *const Gt2   = &uZipVars[VAR::U_GT2][offset];
        const double *const B0    = &uZipVars[VAR::U_B0][offset];
        const double *const B1    = &uZipVars[VAR::U_B1][offset];
        const double *const B2    = &uZipVars[VAR::U_B2][offset];

        double *const a_rhs       = &unzipVarsRHS[VAR::U_ALPHA][offset];
        double *const chi_rhs     = &unzipVarsRHS[VAR::U_CHI][offset];
        double *const K_rhs       = &unzipVarsRHS[VAR::U_K][offset];
        double *const gt_rhs00    = &unzipVarsRHS[VAR::U_SYMGT0][offset];
        double *const gt_rhs01    = &unzipVarsRHS[VAR::U_SYMGT1][offset];
        double *const gt_rhs02    = &unzipVarsRHS[VAR::U_SYMGT2][offset];
        double *const gt_rhs11    = &unzipVarsRHS[VAR::U_SYMGT3][offset];
        double *const gt_rhs12    = &unzipVarsRHS[VAR::U_SYMGT4][offset];
        double *const gt_rhs22    = &unzipVarsRHS[VAR::U_SYMGT5][offset];
        double *const b_rhs0      = &unzipVarsRHS[VAR::U_BETA0][offset];
        double *const b_rhs1      = &unzipVarsRHS[VAR::U_BETA1][offset];
        double *const b_rhs2      = &unzipVarsRHS[VAR::U_BETA2][offset];
        double *const At_rhs00    = &unzipVarsRHS[VAR::U_SYMAT0][offset];
        double *const At_rhs01    = &unzipVarsRHS[VAR::U_SYMAT1][offset];
        double *const At_rhs02    = &unzipVarsRHS[VAR::U_SYMAT2][offset];
        double *const At_rhs11    = &unzipVarsRHS[VAR::U_SYMAT3][offset];
        double *const At_rhs12    = &unzipVarsRHS[VAR::U_SYMAT4][offset];
        double *const At_rhs22    = &unzipVarsRHS[VAR::U_SYMAT5][offset];
        double *const Gt_rhs0     = &unzipVarsRHS[VAR::U_GT0][offset];
        double *const Gt_rhs1     = &unzipVarsRHS[VAR::U_GT1][offset];
        double *const Gt_rhs2     = &unzipVarsRHS[VAR::U_GT2][offset];
        double *const B_rhs0      = &unzipVarsRHS[VAR::U_B0][offset];
        double *const B_rhs1      = &unzipVarsRHS[VAR::U_B1][offset];
        double *const B_rhs2      = &unzipVarsRHS[VAR::U_B2][offset];

        const double *const ham = &uZipConstVars[VAR_CONSTRAINT::C_HAM][offset];
        const double *const mom0 =
            &uZipConstVars[VAR_CONSTRAINT::C_MOM0][offset];
        const double *const mom1 =
            &uZipConstVars[VAR_CONSTRAINT::C_MOM1][offset];
        const double *const mom2 =
            &uZipConstVars[VAR_CONSTRAINT::C_MOM2][offset];
        const double *const psi4_real =
            &uZipConstVars[VAR_CONSTRAINT::C_PSI4_REAL][offset];
        const double *const psi4_img =
            &uZipConstVars[VAR_CONSTRAINT::C_PSI4_IMG][offset];

        RHSFunctionInputs rhs_inputs(
            alpha, chi, K, gt0, gt1, gt2, gt3, gt4, gt5, beta0, beta1, beta2,
            At0, At1, At2, At3, At4, At5, Gt0, Gt1, Gt2, B0, B1, B2,
            // RHS VARIABLES
            a_rhs, chi_rhs, K_rhs, gt_rhs00, gt_rhs01, gt_rhs02, gt_rhs11,
            gt_rhs12, gt_rhs22, b_rhs0, b_rhs1, b_rhs2, At_rhs00, At_rhs01,
            At_rhs02, At_rhs11, At_rhs12, At_rhs22, Gt_rhs0, Gt_rhs1, Gt_rhs2,
            B_rhs0, B_rhs1, B_rhs2,
            // CONSTRAINT VARIABLES
            ham, mom0, mom1, mom2, psi4_real, psi4_img,
            // additional data
            blk.bflag, blk.nx, blk.ny, blk.nz, blk.dx, blk.dy, blk.dz, blk.pmin,
            bssnrhstests::deriv_workspace.data());

        // then we need to compute all of the derivatives if we're validating
        // the data
        if (verify_data) {
            compute_derivatives(alpha, chi, K, gt0, gt1, gt2, gt3, gt4, gt5,
                                beta0, beta1, beta2, At0, At1, At2, At3, At4,
                                At5, Gt0, Gt1, Gt2, B0, B1, B2, rhs_inputs);
        }

        // with the inputs set up, we can now call the actual rhs that we want
        it->second(rhs_inputs);

        // then on verify we have to modify with the KO diss and boundaries

        if (verify_data) {
            compute_boundaries_and_kodiss(
                alpha, chi, K, gt0, gt1, gt2, gt3, gt4, gt5, beta0, beta1,
                beta2, At0, At1, At2, At3, At4, At5, Gt0, Gt1, Gt2, B0, B1, B2,
                a_rhs, chi_rhs, K_rhs, gt_rhs00, gt_rhs01, gt_rhs02, gt_rhs11,
                gt_rhs12, gt_rhs22, b_rhs0, b_rhs1, b_rhs2, At_rhs00, At_rhs01,
                At_rhs02, At_rhs11, At_rhs12, At_rhs22, Gt_rhs0, Gt_rhs1,
                Gt_rhs2, B_rhs0, B_rhs1, B_rhs2, rhs_inputs);
        }
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    double ms_timed =
        std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(
            end_time - start_time)
            .count();

    std::cout << std::endl << "-------------" << std::endl;
    std::cout << "TIMING RESULTS FOR RHS: " << func_name << std::endl;
    std::cout << "Total time taken (ms): " << ms_timed << " ("
              << ms_timed / (double)bssnrhstests::numBlocks << " avg on "
              << bssnrhstests::numBlocks << " blks)" << std::endl;

    if (verify_data) {
        // do full data verification with rhs outputs
        verify_data_integrity();
    }
}

void bssn_bcs(double *f_rhs, const double *f, const double *dxf,
              const double *dyf, const double *dzf, const double *pmin,
              const double *pmax, const double f_falloff,
              const double f_asymptotic, const unsigned int *sz,
              const unsigned int &bflag) {
    const unsigned int nx = sz[0];
    const unsigned int ny = sz[1];
    const unsigned int nz = sz[2];

    const double hx       = (pmax[0] - pmin[0]) / (nx - 1);
    const double hy       = (pmax[1] - pmin[1]) / (ny - 1);
    const double hz       = (pmax[2] - pmin[2]) / (nz - 1);

    const unsigned int PW = bssnrhstests::pw;

    unsigned int ib       = PW;
    unsigned int jb       = PW;
    unsigned int kb       = PW;
    unsigned int ie       = sz[0] - PW;
    unsigned int je       = sz[1] - PW;
    unsigned int ke       = sz[2] - PW;

    double x, y, z;
    unsigned int pp;
    double inv_r;

    // std::cout<<"boundary bssnrhs: size [ "<<nx<<", "<<ny<<", "<<nz<<"
    // ]"<<std::endl; std::cout<<"boundary bssnrhs: pmin [ "<<pmin[0]<<",
    // "<<pmin[1]<<", "<<pmin[2]<<" ]"<<std::endl; std::cout<<"boundary
    // bssnrhs: pmax [ "<<pmax[0]<<", "<<pmax[1]<<", "<<pmax[2]<<"
    // ]"<<std::endl;

    if (bflag & (1u << OCT_DIR_LEFT)) {
        double x = pmin[0] + ib * hx;
        for (unsigned int k = kb; k < ke; k++) {
            z = pmin[2] + k * hz;
            for (unsigned int j = jb; j < je; j++) {
                y         = pmin[1] + j * hy;
                pp        = IDX(ib, j, k);
                inv_r     = 1.0 / sqrt(x * x + y * y + z * z);

                f_rhs[pp] = -inv_r * (x * dxf[pp] + y * dyf[pp] + z * dzf[pp] +
                                      f_falloff * (f[pp] - f_asymptotic));
            }
        }
    }

    if (bflag & (1u << OCT_DIR_RIGHT)) {
        x = pmin[0] + (ie - 1) * hx;
        for (unsigned int k = kb; k < ke; k++) {
            z = pmin[2] + k * hz;
            for (unsigned int j = jb; j < je; j++) {
                y         = pmin[1] + j * hy;
                pp        = IDX((ie - 1), j, k);
                inv_r     = 1.0 / sqrt(x * x + y * y + z * z);

                f_rhs[pp] = -inv_r * (x * dxf[pp] + y * dyf[pp] + z * dzf[pp] +
                                      f_falloff * (f[pp] - f_asymptotic));
            }
        }
    }

    if (bflag & (1u << OCT_DIR_DOWN)) {
        y = pmin[1] + jb * hy;
        for (unsigned int k = kb; k < ke; k++) {
            z = pmin[2] + k * hz;
            for (unsigned int i = ib; i < ie; i++) {
                x         = pmin[0] + i * hx;
                inv_r     = 1.0 / sqrt(x * x + y * y + z * z);
                pp        = IDX(i, jb, k);

                f_rhs[pp] = -inv_r * (x * dxf[pp] + y * dyf[pp] + z * dzf[pp] +
                                      f_falloff * (f[pp] - f_asymptotic));
            }
        }
    }

    if (bflag & (1u << OCT_DIR_UP)) {
        y = pmin[1] + (je - 1) * hy;
        for (unsigned int k = kb; k < ke; k++) {
            z = pmin[2] + k * hz;
            for (unsigned int i = ib; i < ie; i++) {
                x         = pmin[0] + i * hx;
                inv_r     = 1.0 / sqrt(x * x + y * y + z * z);
                pp        = IDX(i, (je - 1), k);

                f_rhs[pp] = -inv_r * (x * dxf[pp] + y * dyf[pp] + z * dzf[pp] +
                                      f_falloff * (f[pp] - f_asymptotic));
            }
        }
    }

    if (bflag & (1u << OCT_DIR_BACK)) {
        z = pmin[2] + kb * hz;
        for (unsigned int j = jb; j < je; j++) {
            y = pmin[1] + j * hy;
            for (unsigned int i = ib; i < ie; i++) {
                x         = pmin[0] + i * hx;
                inv_r     = 1.0 / sqrt(x * x + y * y + z * z);
                pp        = IDX(i, j, kb);

                f_rhs[pp] = -inv_r * (x * dxf[pp] + y * dyf[pp] + z * dzf[pp] +
                                      f_falloff * (f[pp] - f_asymptotic));
            }
        }
    }

    if (bflag & (1u << OCT_DIR_FRONT)) {
        z = pmin[2] + (ke - 1) * hz;
        for (unsigned int j = jb; j < je; j++) {
            y = pmin[1] + j * hy;
            for (unsigned int i = ib; i < ie; i++) {
                x         = pmin[0] + i * hx;
                inv_r     = 1.0 / sqrt(x * x + y * y + z * z);
                pp        = IDX(i, j, (ke - 1));

                f_rhs[pp] = -inv_r * (x * dxf[pp] + y * dyf[pp] + z * dzf[pp] +
                                      f_falloff * (f[pp] - f_asymptotic));
            }
        }
    }
}

void compute_derivatives(const double *const &alpha, const double *const &chi,
                         const double *const &K, const double *const &gt0,
                         const double *const &gt1, const double *const &gt2,
                         const double *const &gt3, const double *const &gt4,
                         const double *const &gt5, const double *const &beta0,
                         const double *const &beta1, const double *const &beta2,
                         const double *const &At0, const double *const &At1,
                         const double *const &At2, const double *const &At3,
                         const double *const &At4, const double *const &At5,
                         const double *const &Gt0, const double *const &Gt1,
                         const double *const &Gt2, const double *const &B0,
                         const double *const &B1, const double *const &B2,
                         RHSFunctionInputs &rhs_inputs) {
    unsigned int sz[3]       = {rhs_inputs.nx, rhs_inputs.ny, rhs_inputs.nz};
    const double hx          = rhs_inputs.hx;
    const double hy          = rhs_inputs.hy;
    const double hz          = rhs_inputs.hz;
    const unsigned int bflag = rhs_inputs.bflag;

    deriv_x(rhs_inputs.grad_0_alpha, alpha, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_alpha, alpha, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_alpha, alpha, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_alpha, alpha, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_alpha, alpha, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_alpha, alpha, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_alpha, rhs_inputs.grad_0_alpha, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_alpha, rhs_inputs.grad_0_alpha, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_alpha, rhs_inputs.grad_1_alpha, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_beta0, beta0, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_beta0, beta0, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_beta0, beta0, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_beta0, beta0, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_beta0, beta0, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_beta0, beta0, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_beta0, rhs_inputs.grad_0_beta0, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_beta0, rhs_inputs.grad_0_beta0, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_beta0, rhs_inputs.grad_1_beta0, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_beta1, beta1, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_beta1, beta1, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_beta1, beta1, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_beta1, beta1, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_beta1, beta1, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_beta1, beta1, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_beta1, rhs_inputs.grad_0_beta1, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_beta1, rhs_inputs.grad_0_beta1, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_beta1, rhs_inputs.grad_1_beta1, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_beta2, beta2, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_beta2, beta2, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_beta2, beta2, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_beta2, beta2, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_beta2, beta2, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_beta2, beta2, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_beta2, rhs_inputs.grad_0_beta2, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_beta2, rhs_inputs.grad_0_beta2, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_beta2, rhs_inputs.grad_1_beta2, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_B0, B0, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_B0, B0, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_B0, B0, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_B1, B1, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_B1, B1, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_B1, B1, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_B2, B2, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_B2, B2, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_B2, B2, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_chi, chi, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_chi, chi, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_chi, chi, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_chi, chi, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_chi, chi, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_chi, chi, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_chi, rhs_inputs.grad_0_chi, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_chi, rhs_inputs.grad_0_chi, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_chi, rhs_inputs.grad_1_chi, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_Gt0, Gt0, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_Gt0, Gt0, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_Gt0, Gt0, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_Gt1, Gt1, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_Gt1, Gt1, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_Gt1, Gt1, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_Gt2, Gt2, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_Gt2, Gt2, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_Gt2, Gt2, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_K, K, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_K, K, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_K, K, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_gt0, gt0, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_gt0, gt0, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_gt0, gt0, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_gt0, gt0, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_gt0, gt0, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_gt0, gt0, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_gt0, rhs_inputs.grad_0_gt0, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_gt0, rhs_inputs.grad_0_gt0, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_gt0, rhs_inputs.grad_1_gt0, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_gt1, gt1, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_gt1, gt1, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_gt1, gt1, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_gt1, gt1, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_gt1, gt1, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_gt1, gt1, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_gt1, rhs_inputs.grad_0_gt1, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_gt1, rhs_inputs.grad_0_gt1, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_gt1, rhs_inputs.grad_1_gt1, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_gt2, gt2, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_gt2, gt2, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_gt2, gt2, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_gt2, gt2, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_gt2, gt2, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_gt2, gt2, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_gt2, rhs_inputs.grad_0_gt2, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_gt2, rhs_inputs.grad_0_gt2, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_gt2, rhs_inputs.grad_1_gt2, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_gt3, gt3, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_gt3, gt3, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_gt3, gt3, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_gt3, gt3, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_gt3, gt3, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_gt3, gt3, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_gt3, rhs_inputs.grad_0_gt3, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_gt3, rhs_inputs.grad_0_gt3, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_gt3, rhs_inputs.grad_1_gt3, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_gt4, gt4, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_gt4, gt4, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_gt4, gt4, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_gt4, gt4, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_gt4, gt4, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_gt4, gt4, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_gt4, rhs_inputs.grad_0_gt4, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_gt4, rhs_inputs.grad_0_gt4, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_gt4, rhs_inputs.grad_1_gt4, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_gt5, gt5, hx, sz, bflag);
    deriv_xx(rhs_inputs.grad2_0_0_gt5, gt5, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_gt5, gt5, hy, sz, bflag);
    deriv_yy(rhs_inputs.grad2_1_1_gt5, gt5, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_gt5, gt5, hz, sz, bflag);
    deriv_zz(rhs_inputs.grad2_2_2_gt5, gt5, hz, sz, bflag);
    deriv_y(rhs_inputs.grad2_0_1_gt5, rhs_inputs.grad_0_gt5, hy, sz, bflag);
    deriv_z(rhs_inputs.grad2_0_2_gt5, rhs_inputs.grad_0_gt5, hz, sz, bflag);
    deriv_z(rhs_inputs.grad2_1_2_gt5, rhs_inputs.grad_1_gt5, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_At0, At0, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_At0, At0, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_At0, At0, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_At1, At1, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_At1, At1, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_At1, At1, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_At2, At2, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_At2, At2, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_At2, At2, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_At3, At3, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_At3, At3, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_At3, At3, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_At4, At4, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_At4, At4, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_At4, At4, hz, sz, bflag);
    deriv_x(rhs_inputs.grad_0_At5, At5, hx, sz, bflag);
    deriv_y(rhs_inputs.grad_1_At5, At5, hy, sz, bflag);
    deriv_z(rhs_inputs.grad_2_At5, At5, hz, sz, bflag);
}

void compute_boundaries_and_kodiss(
    const double *const &alpha, const double *const &chi,
    const double *const &K, const double *const &gt0, const double *const &gt1,
    const double *const &gt2, const double *const &gt3,
    const double *const &gt4, const double *const &gt5,
    const double *const &beta0, const double *const &beta1,
    const double *const &beta2, const double *const &At0,
    const double *const &At1, const double *const &At2,
    const double *const &At3, const double *const &At4,
    const double *const &At5, const double *const &Gt0,
    const double *const &Gt1, const double *const &Gt2, const double *const &B0,
    const double *const &B1, const double *const &B2, double *const &a_rhs,
    double *const &chi_rhs, double *const &K_rhs, double *const &gt_rhs00,
    double *const &gt_rhs01, double *const &gt_rhs02, double *const &gt_rhs11,
    double *const &gt_rhs12, double *const &gt_rhs22, double *const &b_rhs0,
    double *const &b_rhs1, double *const &b_rhs2, double *const &At_rhs00,
    double *const &At_rhs01, double *const &At_rhs02, double *const &At_rhs11,
    double *const &At_rhs12, double *const &At_rhs22, double *const &Gt_rhs0,
    double *const &Gt_rhs1, double *const &Gt_rhs2, double *const &B_rhs0,
    double *const &B_rhs1, double *const &B_rhs2,
    RHSFunctionInputs &rhs_inputs) {
    const unsigned int bflag = rhs_inputs.bflag;
    unsigned int sz[3]       = {rhs_inputs.nx, rhs_inputs.ny, rhs_inputs.nz};
    const double hx          = rhs_inputs.hx;
    const double hy          = rhs_inputs.hy;
    const double hz          = rhs_inputs.hz;
    const unsigned int nx    = rhs_inputs.nx;
    const unsigned int ny    = rhs_inputs.ny;
    const unsigned int nz    = rhs_inputs.nz;
    double pmin[3]           = {rhs_inputs.pmin[0], rhs_inputs.pmin[1],
                                rhs_inputs.pmin[2]};
    double pmax[3]           = {pmin[0] + hx * sz[0], pmin[1] + hy * sz[1],
                                pmin[2] + hz * sz[2]};

    if (bflag != 0) {
        bssn_bcs(a_rhs, alpha, rhs_inputs.grad_0_alpha, rhs_inputs.grad_1_alpha,
                 rhs_inputs.grad_2_alpha, pmin, pmax, 1.0, 1.0, sz, bflag);
        bssn_bcs(chi_rhs, chi, rhs_inputs.grad_0_chi, rhs_inputs.grad_1_chi,
                 rhs_inputs.grad_2_chi, pmin, pmax, 1.0, 1.0, sz, bflag);
        bssn_bcs(K_rhs, K, rhs_inputs.grad_0_K, rhs_inputs.grad_1_K,
                 rhs_inputs.grad_2_K, pmin, pmax, 1.0, 0.0, sz, bflag);

        bssn_bcs(b_rhs0, beta0, rhs_inputs.grad_0_beta0,
                 rhs_inputs.grad_1_beta0, rhs_inputs.grad_2_beta0, pmin, pmax,
                 1.0, 0.0, sz, bflag);
        bssn_bcs(b_rhs1, beta1, rhs_inputs.grad_0_beta1,
                 rhs_inputs.grad_1_beta1, rhs_inputs.grad_2_beta1, pmin, pmax,
                 1.0, 0.0, sz, bflag);
        bssn_bcs(b_rhs2, beta2, rhs_inputs.grad_0_beta2,
                 rhs_inputs.grad_1_beta2, rhs_inputs.grad_2_beta2, pmin, pmax,
                 1.0, 0.0, sz, bflag);

        bssn_bcs(Gt_rhs0, Gt0, rhs_inputs.grad_0_Gt0, rhs_inputs.grad_1_Gt0,
                 rhs_inputs.grad_2_Gt0, pmin, pmax, 2.0, 0.0, sz, bflag);
        bssn_bcs(Gt_rhs1, Gt1, rhs_inputs.grad_0_Gt1, rhs_inputs.grad_1_Gt1,
                 rhs_inputs.grad_2_Gt1, pmin, pmax, 2.0, 0.0, sz, bflag);
        bssn_bcs(Gt_rhs2, Gt2, rhs_inputs.grad_0_Gt2, rhs_inputs.grad_1_Gt2,
                 rhs_inputs.grad_2_Gt2, pmin, pmax, 2.0, 0.0, sz, bflag);

        bssn_bcs(B_rhs0, B0, rhs_inputs.grad_0_B0, rhs_inputs.grad_1_B0,
                 rhs_inputs.grad_2_B0, pmin, pmax, 1.0, 0.0, sz, bflag);
        bssn_bcs(B_rhs1, B1, rhs_inputs.grad_0_B1, rhs_inputs.grad_1_B1,
                 rhs_inputs.grad_2_B1, pmin, pmax, 1.0, 0.0, sz, bflag);
        bssn_bcs(B_rhs2, B2, rhs_inputs.grad_0_B2, rhs_inputs.grad_1_B2,
                 rhs_inputs.grad_2_B2, pmin, pmax, 1.0, 0.0, sz, bflag);

        bssn_bcs(At_rhs00, At0, rhs_inputs.grad_0_At0, rhs_inputs.grad_1_At0,
                 rhs_inputs.grad_2_At0, pmin, pmax, 2.0, 0.0, sz, bflag);
        bssn_bcs(At_rhs01, At1, rhs_inputs.grad_0_At1, rhs_inputs.grad_1_At1,
                 rhs_inputs.grad_2_At1, pmin, pmax, 2.0, 0.0, sz, bflag);
        bssn_bcs(At_rhs02, At2, rhs_inputs.grad_0_At2, rhs_inputs.grad_1_At2,
                 rhs_inputs.grad_2_At2, pmin, pmax, 2.0, 0.0, sz, bflag);
        bssn_bcs(At_rhs11, At3, rhs_inputs.grad_0_At3, rhs_inputs.grad_1_At3,
                 rhs_inputs.grad_2_At3, pmin, pmax, 2.0, 0.0, sz, bflag);
        bssn_bcs(At_rhs12, At4, rhs_inputs.grad_0_At4, rhs_inputs.grad_1_At4,
                 rhs_inputs.grad_2_At4, pmin, pmax, 2.0, 0.0, sz, bflag);
        bssn_bcs(At_rhs22, At5, rhs_inputs.grad_0_At5, rhs_inputs.grad_1_At5,
                 rhs_inputs.grad_2_At5, pmin, pmax, 2.0, 0.0, sz, bflag);

        bssn_bcs(gt_rhs00, gt0, rhs_inputs.grad_0_gt0, rhs_inputs.grad_1_gt0,
                 rhs_inputs.grad_2_gt0, pmin, pmax, 1.0, 1.0, sz, bflag);
        bssn_bcs(gt_rhs01, gt1, rhs_inputs.grad_0_gt1, rhs_inputs.grad_1_gt1,
                 rhs_inputs.grad_2_gt1, pmin, pmax, 1.0, 0.0, sz, bflag);
        bssn_bcs(gt_rhs02, gt2, rhs_inputs.grad_0_gt2, rhs_inputs.grad_1_gt2,
                 rhs_inputs.grad_2_gt2, pmin, pmax, 1.0, 0.0, sz, bflag);
        bssn_bcs(gt_rhs11, gt3, rhs_inputs.grad_0_gt3, rhs_inputs.grad_1_gt3,
                 rhs_inputs.grad_2_gt3, pmin, pmax, 1.0, 1.0, sz, bflag);
        bssn_bcs(gt_rhs12, gt4, rhs_inputs.grad_0_gt4, rhs_inputs.grad_1_gt4,
                 rhs_inputs.grad_2_gt4, pmin, pmax, 1.0, 0.0, sz, bflag);
        bssn_bcs(gt_rhs22, gt5, rhs_inputs.grad_0_gt5, rhs_inputs.grad_1_gt5,
                 rhs_inputs.grad_2_gt5, pmin, pmax, 1.0, 1.0, sz, bflag);
    }

    double sigma = KO_DISS_SIGMA;

    ko_deriv_x(rhs_inputs.grad_0_gt0, gt0, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_gt0, gt0, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_gt0, gt0, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_gt1, gt1, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_gt1, gt1, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_gt1, gt1, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_gt2, gt2, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_gt2, gt2, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_gt2, gt2, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_gt3, gt3, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_gt3, gt3, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_gt3, gt3, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_gt4, gt4, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_gt4, gt4, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_gt4, gt4, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_gt5, gt5, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_gt5, gt5, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_gt5, gt5, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_At0, At0, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_At0, At0, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_At0, At0, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_At1, At1, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_At1, At1, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_At1, At1, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_At2, At2, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_At2, At2, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_At2, At2, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_At3, At3, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_At3, At3, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_At3, At3, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_At4, At4, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_At4, At4, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_At4, At4, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_At5, At5, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_At5, At5, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_At5, At5, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_alpha, alpha, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_alpha, alpha, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_alpha, alpha, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_beta0, beta0, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_beta0, beta0, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_beta0, beta0, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_beta1, beta1, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_beta1, beta1, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_beta1, beta1, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_beta2, beta2, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_beta2, beta2, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_beta2, beta2, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_chi, chi, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_chi, chi, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_chi, chi, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_Gt0, Gt0, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_Gt0, Gt0, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_Gt0, Gt0, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_Gt1, Gt1, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_Gt1, Gt1, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_Gt1, Gt1, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_Gt2, Gt2, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_Gt2, Gt2, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_Gt2, Gt2, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_K, K, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_K, K, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_K, K, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_B0, B0, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_B0, B0, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_B0, B0, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_B1, B1, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_B1, B1, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_B1, B1, hz, sz, bflag);
    ko_deriv_x(rhs_inputs.grad_0_B2, B2, hx, sz, bflag);
    ko_deriv_y(rhs_inputs.grad_1_B2, B2, hy, sz, bflag);
    ko_deriv_z(rhs_inputs.grad_2_B2, B2, hz, sz, bflag);

    for (unsigned int k = pw; k < nz - pw; k++) {
        for (unsigned int j = pw; j < ny - pw; j++) {
            for (unsigned int i = pw; i < nx - pw; i++) {
                const unsigned int pp = i + nx * (j + ny * k);

                if (BSSN_CAKO_ENABLED) {
                    sigma              = sqrt(chi[pp]);
                    double sigma_gauge = sigma * BSSN_EPSILON_CAKO_GAUGE;
                    double sigma_other = sigma * BSSN_EPSILON_CAKO_OTHER;
                    a_rhs[pp] += sigma_gauge * (rhs_inputs.grad_0_alpha[pp] +
                                                rhs_inputs.grad_1_alpha[pp] +
                                                rhs_inputs.grad_2_alpha[pp]);
                    b_rhs0[pp] += sigma_gauge * (rhs_inputs.grad_0_beta0[pp] +
                                                 rhs_inputs.grad_1_beta0[pp] +
                                                 rhs_inputs.grad_2_beta0[pp]);
                    b_rhs1[pp] += sigma_gauge * (rhs_inputs.grad_0_beta1[pp] +
                                                 rhs_inputs.grad_1_beta1[pp] +
                                                 rhs_inputs.grad_2_beta1[pp]);
                    b_rhs2[pp] += sigma_gauge * (rhs_inputs.grad_0_beta2[pp] +
                                                 rhs_inputs.grad_1_beta2[pp] +
                                                 rhs_inputs.grad_2_beta2[pp]);

                    gt_rhs00[pp] += sigma_other * (rhs_inputs.grad_0_gt0[pp] +
                                                   rhs_inputs.grad_1_gt0[pp] +
                                                   rhs_inputs.grad_2_gt0[pp]);
                    gt_rhs01[pp] += sigma_other * (rhs_inputs.grad_0_gt1[pp] +
                                                   rhs_inputs.grad_1_gt1[pp] +
                                                   rhs_inputs.grad_2_gt1[pp]);
                    gt_rhs02[pp] += sigma_other * (rhs_inputs.grad_0_gt2[pp] +
                                                   rhs_inputs.grad_1_gt2[pp] +
                                                   rhs_inputs.grad_2_gt2[pp]);
                    gt_rhs11[pp] += sigma_other * (rhs_inputs.grad_0_gt3[pp] +
                                                   rhs_inputs.grad_1_gt3[pp] +
                                                   rhs_inputs.grad_2_gt3[pp]);
                    gt_rhs12[pp] += sigma_other * (rhs_inputs.grad_0_gt4[pp] +
                                                   rhs_inputs.grad_1_gt4[pp] +
                                                   rhs_inputs.grad_2_gt4[pp]);
                    gt_rhs22[pp] += sigma_other * (rhs_inputs.grad_0_gt5[pp] +
                                                   rhs_inputs.grad_1_gt5[pp] +
                                                   rhs_inputs.grad_2_gt5[pp]);

                    chi_rhs[pp] += sigma_other * (rhs_inputs.grad_0_chi[pp] +
                                                  rhs_inputs.grad_1_chi[pp] +
                                                  rhs_inputs.grad_2_chi[pp]);

                    At_rhs00[pp] += sigma_other * (rhs_inputs.grad_0_At0[pp] +
                                                   rhs_inputs.grad_1_At0[pp] +
                                                   rhs_inputs.grad_2_At0[pp]);
                    At_rhs01[pp] += sigma_other * (rhs_inputs.grad_0_At1[pp] +
                                                   rhs_inputs.grad_1_At1[pp] +
                                                   rhs_inputs.grad_2_At1[pp]);
                    At_rhs02[pp] += sigma_other * (rhs_inputs.grad_0_At2[pp] +
                                                   rhs_inputs.grad_1_At2[pp] +
                                                   rhs_inputs.grad_2_At2[pp]);
                    At_rhs11[pp] += sigma_other * (rhs_inputs.grad_0_At3[pp] +
                                                   rhs_inputs.grad_1_At3[pp] +
                                                   rhs_inputs.grad_2_At3[pp]);
                    At_rhs12[pp] += sigma_other * (rhs_inputs.grad_0_At4[pp] +
                                                   rhs_inputs.grad_1_At4[pp] +
                                                   rhs_inputs.grad_2_At4[pp]);
                    At_rhs22[pp] += sigma_other * (rhs_inputs.grad_0_At5[pp] +
                                                   rhs_inputs.grad_1_At5[pp] +
                                                   rhs_inputs.grad_2_At5[pp]);

                    K_rhs[pp] += sigma_other * (rhs_inputs.grad_0_K[pp] +
                                                rhs_inputs.grad_1_K[pp] +
                                                rhs_inputs.grad_2_K[pp]);

                    Gt_rhs0[pp] += sigma_other * (rhs_inputs.grad_0_Gt0[pp] +
                                                  rhs_inputs.grad_1_Gt0[pp] +
                                                  rhs_inputs.grad_2_Gt0[pp]);
                    Gt_rhs1[pp] += sigma_other * (rhs_inputs.grad_0_Gt1[pp] +
                                                  rhs_inputs.grad_1_Gt1[pp] +
                                                  rhs_inputs.grad_2_Gt1[pp]);
                    Gt_rhs2[pp] += sigma_other * (rhs_inputs.grad_0_Gt2[pp] +
                                                  rhs_inputs.grad_1_Gt2[pp] +
                                                  rhs_inputs.grad_2_Gt2[pp]);

                    B_rhs0[pp] += sigma_gauge * (rhs_inputs.grad_0_B0[pp] +
                                                 rhs_inputs.grad_1_B0[pp] +
                                                 rhs_inputs.grad_2_B0[pp]);
                    B_rhs1[pp] += sigma_gauge * (rhs_inputs.grad_0_B1[pp] +
                                                 rhs_inputs.grad_1_B1[pp] +
                                                 rhs_inputs.grad_2_B1[pp]);
                    B_rhs2[pp] += sigma_gauge * (rhs_inputs.grad_0_B2[pp] +
                                                 rhs_inputs.grad_1_B2[pp] +
                                                 rhs_inputs.grad_2_B2[pp]);
                } else {
                    // as part of the improved techniques paper
                    // (https://arxiv.org/pdf/2404.01137.pdf) they mentioned
                    // scaling the KO dissipation of the RHS by sqrt(chi)
                    // with a strong amount for the gauge variaables and a
                    // smaller amount for the non-gauge variables. This is
                    // an option the user can use.
                    a_rhs[pp] += sigma * (rhs_inputs.grad_0_alpha[pp] +
                                          rhs_inputs.grad_1_alpha[pp] +
                                          rhs_inputs.grad_2_alpha[pp]);
                    b_rhs0[pp] += sigma * (rhs_inputs.grad_0_beta0[pp] +
                                           rhs_inputs.grad_1_beta0[pp] +
                                           rhs_inputs.grad_2_beta0[pp]);
                    b_rhs1[pp] += sigma * (rhs_inputs.grad_0_beta1[pp] +
                                           rhs_inputs.grad_1_beta1[pp] +
                                           rhs_inputs.grad_2_beta1[pp]);
                    b_rhs2[pp] += sigma * (rhs_inputs.grad_0_beta2[pp] +
                                           rhs_inputs.grad_1_beta2[pp] +
                                           rhs_inputs.grad_2_beta2[pp]);

                    gt_rhs00[pp] += sigma * (rhs_inputs.grad_0_gt0[pp] +
                                             rhs_inputs.grad_1_gt0[pp] +
                                             rhs_inputs.grad_2_gt0[pp]);
                    gt_rhs01[pp] += sigma * (rhs_inputs.grad_0_gt1[pp] +
                                             rhs_inputs.grad_1_gt1[pp] +
                                             rhs_inputs.grad_2_gt1[pp]);
                    gt_rhs02[pp] += sigma * (rhs_inputs.grad_0_gt2[pp] +
                                             rhs_inputs.grad_1_gt2[pp] +
                                             rhs_inputs.grad_2_gt2[pp]);
                    gt_rhs11[pp] += sigma * (rhs_inputs.grad_0_gt3[pp] +
                                             rhs_inputs.grad_1_gt3[pp] +
                                             rhs_inputs.grad_2_gt3[pp]);
                    gt_rhs12[pp] += sigma * (rhs_inputs.grad_0_gt4[pp] +
                                             rhs_inputs.grad_1_gt4[pp] +
                                             rhs_inputs.grad_2_gt4[pp]);
                    gt_rhs22[pp] += sigma * (rhs_inputs.grad_0_gt5[pp] +
                                             rhs_inputs.grad_1_gt5[pp] +
                                             rhs_inputs.grad_2_gt5[pp]);

                    chi_rhs[pp] += sigma * (rhs_inputs.grad_0_chi[pp] +
                                            rhs_inputs.grad_1_chi[pp] +
                                            rhs_inputs.grad_2_chi[pp]);

                    At_rhs00[pp] += sigma * (rhs_inputs.grad_0_At0[pp] +
                                             rhs_inputs.grad_1_At0[pp] +
                                             rhs_inputs.grad_2_At0[pp]);
                    At_rhs01[pp] += sigma * (rhs_inputs.grad_0_At1[pp] +
                                             rhs_inputs.grad_1_At1[pp] +
                                             rhs_inputs.grad_2_At1[pp]);
                    At_rhs02[pp] += sigma * (rhs_inputs.grad_0_At2[pp] +
                                             rhs_inputs.grad_1_At2[pp] +
                                             rhs_inputs.grad_2_At2[pp]);
                    At_rhs11[pp] += sigma * (rhs_inputs.grad_0_At3[pp] +
                                             rhs_inputs.grad_1_At3[pp] +
                                             rhs_inputs.grad_2_At3[pp]);
                    At_rhs12[pp] += sigma * (rhs_inputs.grad_0_At4[pp] +
                                             rhs_inputs.grad_1_At4[pp] +
                                             rhs_inputs.grad_2_At4[pp]);
                    At_rhs22[pp] += sigma * (rhs_inputs.grad_0_At5[pp] +
                                             rhs_inputs.grad_1_At5[pp] +
                                             rhs_inputs.grad_2_At5[pp]);

                    K_rhs[pp] += sigma * (rhs_inputs.grad_0_K[pp] +
                                          rhs_inputs.grad_1_K[pp] +
                                          rhs_inputs.grad_2_K[pp]);

                    Gt_rhs0[pp] += sigma * (rhs_inputs.grad_0_Gt0[pp] +
                                            rhs_inputs.grad_1_Gt0[pp] +
                                            rhs_inputs.grad_2_Gt0[pp]);
                    Gt_rhs1[pp] += sigma * (rhs_inputs.grad_0_Gt1[pp] +
                                            rhs_inputs.grad_1_Gt1[pp] +
                                            rhs_inputs.grad_2_Gt1[pp]);
                    Gt_rhs2[pp] += sigma * (rhs_inputs.grad_0_Gt2[pp] +
                                            rhs_inputs.grad_1_Gt2[pp] +
                                            rhs_inputs.grad_2_Gt2[pp]);

                    B_rhs0[pp] += sigma * (rhs_inputs.grad_0_B0[pp] +
                                           rhs_inputs.grad_1_B0[pp] +
                                           rhs_inputs.grad_2_B0[pp]);
                    B_rhs1[pp] += sigma * (rhs_inputs.grad_0_B1[pp] +
                                           rhs_inputs.grad_1_B1[pp] +
                                           rhs_inputs.grad_2_B1[pp]);
                    B_rhs2[pp] += sigma * (rhs_inputs.grad_0_B2[pp] +
                                           rhs_inputs.grad_1_B2[pp] +
                                           rhs_inputs.grad_2_B2[pp]);
                }
            }
        }
    }
}

}  // namespace bssnrhstests
