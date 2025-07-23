#include "rhs_runner.hpp"

#include <chrono>
#include <iostream>
#include <ostream>
#include <stdexcept>

#include "bssnrhstests.hpp"

// rhs function includes
#include "rhsfuncs/default_rhs.hpp"
#include "rhsfuncs/nothing_rhs.hpp"

namespace bssnrhstests {

std::map<std::string, BSSNRHSFunction> rhs_functions_;

void register_all_rhs_functions() {
    register_rhs_function("default", rhs::default_original_rhs);
    register_rhs_function("nothing", rhs::do_nothing_rhs);
}

void register_rhs_function(const std::string &name, BSSNRHSFunction func) {
    rhs_functions_[name] = func;
}

void run_rhs_function(std::string &func_name) {
    auto it = rhs_functions_.find(func_name);
    if (it == rhs_functions_.end()) {
        throw std::runtime_error("Unknown RHS: " + func_name);
    }

    auto start_time = std::chrono::high_resolution_clock::now();

    // take the vectors and 3d-ify them
    DendroScalar *uZipVars[bssnrhstests::bssn_num_vars];
    DendroScalar *unzipVarsRHS[bssnrhstests::bssn_num_vars];

    to_2d(bssnrhstests::vars, uZipVars, (size_t)bssnrhstests::total_pts_per_var,
          (size_t)bssnrhstests::bssn_num_vars);

    to_2d(bssnrhstests::vars_rhs, unzipVarsRHS,
          (size_t)bssnrhstests::total_pts_per_var,
          (size_t)bssnrhstests::bssn_num_vars);

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

        RHSFunctionInputs rhs_inputs(
            alpha, chi, K, gt0, gt1, gt2, gt3, gt4, gt5, beta0, beta1, beta2,
            At0, At1, At2, At3, At4, At5, Gt0, Gt1, Gt2, B0, B1, B2,
            // RHS VARIABLES
            a_rhs, chi_rhs, K_rhs, gt_rhs00, gt_rhs01, gt_rhs02, gt_rhs11,
            gt_rhs12, gt_rhs22, b_rhs0, b_rhs1, b_rhs2, At_rhs00, At_rhs01,
            At_rhs02, At_rhs11, At_rhs12, At_rhs22, Gt_rhs0, Gt_rhs1, Gt_rhs2,
            B_rhs0, B_rhs1, B_rhs2,
            // additional data
            blk.bflag, blk.nx, blk.ny, blk.nz, blk.dx, blk.dy, blk.dz, blk.pmin,
            bssnrhstests::deriv_workspace.data());

        // with the inputs set up, we can now call the actual rhs that we want
        it->second(rhs_inputs);
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
}

}  // namespace bssnrhstests
