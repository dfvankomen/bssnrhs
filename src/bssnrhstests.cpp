#include "bssnrhstests.hpp"

#include <chrono>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <random>
#include <stdexcept>
#include <string>

#include "cli.hpp"
#include "dendrogr_data.hpp"

namespace bssnrhstests {

unsigned int eleOrder   = 6;
unsigned int numBlocks  = 50;
unsigned int iterations = 1;
std::string baselineRHSName;
std::string testRHSName;
unsigned int max_block_size     = 1;
unsigned int rng_seed           = std::numeric_limits<unsigned int>::max();
unsigned int max_depth          = 9;
unsigned int min_depth          = 3;
std::string block_data_filename = "";
bool verify_data                = false;

DendroScalar domain_max[3]      = {500.0, 500.0, 500.0};
DendroScalar domain_min[3]      = {-500.0, -500.0, -500.0};

std::vector<DendroScalar> vars;
std::vector<DendroScalar> vars_rhs;
std::vector<DendroScalar> vars_rhs_truth;
std::vector<DendroScalar> constraints_truth;
std::vector<DendroScalar> constraints_vec;
std::vector<DendroScalar> deriv_workspace;
std::vector<Block> block_list;
unsigned int npoints_1d;
unsigned int npoints_3d;
unsigned int pw;
unsigned int total_pts_per_var   = 0;
unsigned int total_pts_per_const = 0;
double curr_time;

double bhMass1;
double bhMass2;
double bh1x;
double bh1y;
double bh1z;
double bh2x;
double bh2y;
double bh2z;
double dx_min;
double dt;
unsigned int BSSN_LAMBDA[4]    = {1, 1, 1, 1};
double BSSN_A_LAMBDA[3]        = {0.0, 2.0, 0.0};
double BSSN_LAMBDA_F[2]        = {1.0, 0.0};
double BSSN_SSL_H              = 0.0;
double BSSN_SSL_SIGMA          = 0.0;
double KO_DISS_SIGMA           = 0.4;

double RIT_ETA_OUTER           = 0.25;
double RIT_ETA_CENTRAL         = 2.0;
double RIT_ETA_WIDTH           = 40.0;

double BSSN_EPSILON_CAKO_GAUGE = 0.0;
double BSSN_EPSILON_CAKO_OTHER = 0.0;
bool BSSN_CAKO_ENABLED         = false;

std::mt19937 rng;

void prep_data_structures() {
    if (verify_data) {
        read_from_file(block_data_filename);
        // and set up the derivative workspace
        unsigned int largest_block_size = 0;

        for (auto& blk : block_list) {
            unsigned int blksz = blk.nx * blk.ny * blk.nz;
            if (blksz > largest_block_size) {
                largest_block_size = blksz;
            }
        }
        std::cout << "Calculated largest blocksize: " << largest_block_size
                  << std::endl;

        // TODO: deriv workspace is currently set to just the largest block size
        // times the number of total derivatives, so if we're going to process
        // them as *part* of this experiment, we'll need to modify this
        deriv_workspace =
            std::vector<DendroScalar>(bssn_num_grad * largest_block_size);

        // and set the number of blocks!
        bssnrhstests::numBlocks = block_list.size();

        return;
    }

    // first start by building up our block list, somewhat realistic to BSSN
    total_pts_per_var               = 0;
    unsigned int largest_block_size = 0;
    for (unsigned int iblk = 0; iblk < numBlocks; ++iblk) {
        unsigned int blk_size = 1;
        if (max_block_size > 1) {
            blk_size = get_random_int(1, max_block_size);
        }

        unsigned int tmp_npts_1d = (eleOrder * (1 + blk_size)) + 1;

        Block blk;
        blk.nx                  = tmp_npts_1d;
        blk.ny                  = tmp_npts_1d;
        blk.nz                  = tmp_npts_1d;
        blk.depth               = get_random_int(min_depth, max_depth);
        blk.bflag               = 0;

        // then get dx, dy, dz based on depth
        unsigned int ndivisions = (2 << blk.depth) * (2 * eleOrder);
        blk.dx      = (domain_max[0] - domain_min[0]) / (double)ndivisions;
        blk.dy      = (domain_max[1] - domain_min[1]) / (double)ndivisions;
        blk.dz      = (domain_max[2] - domain_min[2]) / (double)ndivisions;

        blk.pmin[0] = get_random_double(domain_min[0], domain_max[0]);
        blk.pmin[1] = get_random_double(domain_min[1], domain_max[1]);
        blk.pmin[2] = get_random_double(domain_min[2], domain_max[2]);
        blk.offset  = total_pts_per_var;

        unsigned int blksz = blk.nx * blk.ny * blk.nz;
        if (blksz > largest_block_size) {
            largest_block_size = blksz;
        }

        total_pts_per_var += blksz;

        block_list.push_back(blk);

#ifdef VERBOSE_BLOCK_CREATION
        std::cout << blk << std::endl;
#endif
    }

    // main input/output variables
    vars     = std::vector<DendroScalar>(total_pts_per_var * bssn_num_vars);
    vars_rhs = std::vector<DendroScalar>(total_pts_per_var * bssn_num_vars);

    // set vars to flat space:
    std::fill(vars.begin() + VAR::U_ALPHA * total_pts_per_var,
              vars.begin() + (VAR::U_ALPHA + 1) * total_pts_per_var, 1.0);
    std::fill(vars.begin() + VAR::U_CHI * total_pts_per_var,
              vars.begin() + (VAR::U_CHI + 1) * total_pts_per_var, 1.0);
    std::fill(vars.begin() + VAR::U_GT0 * total_pts_per_var,
              vars.begin() + (VAR::U_GT0 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_GT1 * total_pts_per_var,
              vars.begin() + (VAR::U_GT1 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_GT2 * total_pts_per_var,
              vars.begin() + (VAR::U_GT2 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_BETA0 * total_pts_per_var,
              vars.begin() + (VAR::U_BETA0 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_BETA1 * total_pts_per_var,
              vars.begin() + (VAR::U_BETA1 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_BETA2 * total_pts_per_var,
              vars.begin() + (VAR::U_BETA2 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_B0 * total_pts_per_var,
              vars.begin() + (VAR::U_B0 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_B1 * total_pts_per_var,
              vars.begin() + (VAR::U_B1 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_B2 * total_pts_per_var,
              vars.begin() + (VAR::U_B2 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_SYMGT0 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMGT0 + 1) * total_pts_per_var, 1.0);
    std::fill(vars.begin() + VAR::U_SYMGT1 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMGT1 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_SYMGT2 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMGT2 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_SYMGT3 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMGT3 + 1) * total_pts_per_var, 1.0);
    std::fill(vars.begin() + VAR::U_SYMGT4 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMGT4 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_SYMGT5 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMGT5 + 1) * total_pts_per_var, 1.0);
    std::fill(vars.begin() + VAR::U_SYMAT0 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMAT0 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_SYMAT1 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMAT1 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_SYMAT2 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMAT2 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_SYMAT3 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMAT3 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_SYMAT4 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMAT4 + 1) * total_pts_per_var, 0.0);
    std::fill(vars.begin() + VAR::U_SYMAT5 * total_pts_per_var,
              vars.begin() + (VAR::U_SYMAT5 + 1) * total_pts_per_var, 0.0);

    // TODO: deriv workspace is currently set to just the largest block size
    // times the number of total derivatives, so if we're going to process them
    // as *part* of this experiment, we'll need to modify this
    deriv_workspace =
        std::vector<DendroScalar>(bssn_num_grad * largest_block_size);

    // then we're good to go
}

template <typename T>
void print_parameter(const std::string& name, const T& value) {
    std::cout << std::left << std::setw(20) << name << ": " << std::right
              << value << std::endl;
}

void print_param(const std::string& name, const bool value) {
    std::cout << std::left << std::setw(20) << name << ": " << std::right
              << std::boolalpha << value << std::noboolalpha << std::endl;
}

void read_from_cli(int argc, char** argv) {
    std::map<std::string, std::string> args =
        bssnrhstests::parse_args(argc, argv);

    try {
        // required arguments
        eleOrder  = bssnrhstests::get_required_arg(args, "eleorder", 6);
        numBlocks = bssnrhstests::get_required_arg(args, "numblocks", 10);
        testRHSName =
            bssnrhstests::get_required_arg(args, "rhs", std::string("default"));

        // non-required arguments
        iterations = bssnrhstests::get_arg(args, "iters", iterations);
        baselineRHSName =
            bssnrhstests::get_arg(args, "baseline-rhs", std::string("default"));
        rng_seed = bssnrhstests::get_arg(args, "seed", rng_seed);
        max_block_size =
            bssnrhstests::get_arg(args, "max-block-size", max_block_size);

        block_data_filename =
            bssnrhstests::get_arg(args, "block-file", block_data_filename);

        if (block_data_filename != "") {
            verify_data = true;
        }

        // otherwise we need a random seed that's time based, probably
        if (rng_seed == std::numeric_limits<unsigned int>::max()) {
            rng_seed = static_cast<unsigned int>(
                std::chrono::system_clock::now().time_since_epoch().count());
            // then start the rng engine
            rng = std::mt19937(rng_seed);
        }
    } catch (const std::runtime_error& e) {
        std::cerr
            << "ERROR: Error while attempting to read command line arguments: "
            << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }

    // update a few parameter "constants"
    npoints_1d = eleOrder * 2 + 1;
    npoints_3d = npoints_1d * npoints_1d * npoints_1d;
    pw         = eleOrder >> 1;

    // then dump so you know they're set
    dump_args();
}

void dump_args() {
    std::cout << "=======================" << std::endl;
    std::cout << "  Parameter Dump  " << std::endl;
    std::cout << "=======================" << std::endl;

    // required
    print_parameter("Element Order", eleOrder);
    print_parameter("Number Blocks", numBlocks);
    print_parameter("Testing RHS", testRHSName);

    // non required
    // print_parameter("Iterations", iterations);
    print_parameter("Baseline RHS", baselineRHSName);
    print_parameter("Maximum Block Size", max_block_size);
    print_parameter("RNG Seeded to", rng_seed);

    if (verify_data) {
        print_parameter("Loading block data from: ", block_data_filename);
    }

    // then helpers that are calculated on read from cli
    std::cout << std::endl << "----------" << std::endl;
    std::cout << "  Calculated Values  " << std::endl;
    print_parameter("NPoints 1d", npoints_1d);
    print_parameter("NPoints 3d", npoints_3d);
    print_parameter("PW", pw);
    print_parameter("Num BSSN Variables", bssn_num_vars);
}

void read_from_file(std::string& filename) {
    size_t fileoffset = 0;
    bool success      = bssnrhstests::get_block_data_and_information(
        block_list, vars, vars_rhs_truth, constraints_truth, filename);

    // and make sure vars_rhs is set to the same size as vars_rhs_truth
    vars_rhs.resize(vars_rhs_truth.size());

    // TODO: if we want to also test constraint calculation we will want to
    // *not* directly copy
    constraints_vec = constraints_truth;

    if (!success) {
        exit(EXIT_FAILURE);
    }

#if 0
    // TEMP code for if we need to debug the bin data
    DendroScalar* unzipVars_truth[bssnrhstests::bssn_num_vars];
    DendroScalar* unzipVarsRHS_truth[bssnrhstests::bssn_num_vars];

    to_2d(vars, unzipVars_truth, (size_t)bssnrhstests::total_pts_per_var,
          (size_t)bssnrhstests::bssn_num_vars);
    to_2d(vars_rhs_truth, unzipVarsRHS_truth,
          (size_t)bssnrhstests::total_pts_per_var,
          (size_t)bssnrhstests::bssn_num_vars);

    size_t blkid = 0;

    // check the data structures to make sure the data is good enough
    for (auto& blk : block_list) {
        std::cout << "FOR BLOCK: " << blkid << std::endl;
        for (size_t var = 0; var < bssnrhstests::bssn_num_vars; var++) {
            double total_var       = 0.0;
            double total_rhs       = 0.0;
            size_t total_pts_blk   = 0;

            double* const var_temp = &unzipVars_truth[var][blk.offset];
            double* const rhs_temp = &unzipVarsRHS_truth[var][blk.offset];
            for (size_t k = pw; k < blk.nz - pw; ++k) {
                for (size_t j = pw; j < blk.ny - pw; ++j) {
                    for (size_t i = pw; i < blk.nx - pw; ++i) {
                        const unsigned int pp = i + blk.nx * (j + blk.ny * k);

                        total_var += var_temp[pp];
                        total_rhs += rhs_temp[pp];

                        total_pts_blk++;
                    }
                }
            }

            std::cout << "    VAR: " << var
                      << "\tvar_avg: " << total_var / (double)total_pts_blk
                      << "\trhs_avg: " << total_rhs / (double)total_pts_blk
                      << "\t(" << total_pts_blk << " total pts)" << std::endl;
        }
        blkid++;
    }
#endif

    // then we allocate any other vectors
}

struct ErrorPerVar {
    double total_abs_err = 0.0;
    double total_sqr_err = 0.0;
    size_t num_pts       = 0;

    void add_diff(double diff) {
        double absdiff = std::abs(diff);
        total_abs_err += absdiff;
        total_sqr_err += (absdiff * absdiff);

        num_pts++;
    }

    double get_mean_abs_err() const {
        return (num_pts == 0) ? 0.0 : total_abs_err / num_pts;
    }

    double get_mean_sqr_err() const {
        return (num_pts == 0) ? 0.0 : total_sqr_err / num_pts;
    }

    double get_rms_err() const { return std::sqrt(get_mean_sqr_err()); }

    void combine_errors(const ErrorPerVar& other) {
        total_abs_err += other.total_abs_err;
        total_sqr_err += other.total_sqr_err;
        num_pts += other.num_pts;
    }
};

void verify_data_integrity() {
    std::vector<ErrorPerVar> var_errors(bssnrhstests::bssn_num_vars);

    ErrorPerVar overall_error;

    DendroScalar* unzipVarsRHS[bssnrhstests::bssn_num_vars];
    DendroScalar* unzipVarsRHS_truth[bssnrhstests::bssn_num_vars];

    to_2d(bssnrhstests::vars_rhs, unzipVarsRHS,
          (size_t)bssnrhstests::total_pts_per_var,
          (size_t)bssnrhstests::bssn_num_vars);
    to_2d(bssnrhstests::vars_rhs_truth, unzipVarsRHS_truth,
          (size_t)bssnrhstests::total_pts_per_var,
          (size_t)bssnrhstests::bssn_num_vars);

    for (unsigned int iblk = 0; iblk < bssnrhstests::numBlocks; iblk++) {
        const auto& blk       = bssnrhstests::block_list[iblk];
        const unsigned int nx = blk.nx;
        const unsigned int ny = blk.ny;
        const unsigned int nz = blk.nz;

        for (size_t var = 0; var < bssnrhstests::bssn_num_vars; var++) {
            double* const input_temp = &unzipVarsRHS[var][blk.offset];
            double* const truth_temp = &unzipVarsRHS_truth[var][blk.offset];
            for (unsigned int k = pw; k < nz - pw; k++) {
                for (unsigned int j = pw; j < ny - pw; j++) {
                    for (unsigned int i = pw; i < nx - pw; i++) {
                        const unsigned int pp = i + blk.nx * (j + blk.ny * k);

                        double diff           = input_temp[pp] - truth_temp[pp];

                        var_errors[var].add_diff(diff);
                    }
                }
            }
        }
    }

    std::cout << std::endl << " --- Per Variable Errors --- " << std::endl;
    std::cout << std::scientific << std::setprecision(8);

    for (size_t var = 0; var < bssnrhstests::bssn_num_vars; var++) {
        const auto& err = var_errors[var];
        std::cout << BSSN_VAR_NAMES[var] << " - (" << err.num_pts
                  << " total points)" << std::endl;

        std::cout << "  MAE: " << err.get_mean_abs_err() << std::endl;
        std::cout << "  MSE: " << err.get_mean_sqr_err() << std::endl;
        std::cout << "  RMSE: " << err.get_rms_err() << std::endl;

        // then combine the errors while we're calculting
        overall_error.combine_errors(err);
    }

    std::cout << std::endl << " --- OVERALL Errors --- " << std::endl;
    std::cout << std::scientific << std::setprecision(8);
    std::cout << "  (" << overall_error.num_pts << " total points)"
              << std::endl;

    std::cout << "  MAE: " << overall_error.get_mean_abs_err() << std::endl;
    std::cout << "  MSE: " << overall_error.get_mean_sqr_err() << std::endl;
    std::cout << "  RMSE: " << overall_error.get_rms_err() << std::endl;
}

}  // namespace bssnrhstests
