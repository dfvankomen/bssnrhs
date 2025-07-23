#include "bssnrhstests.hpp"

#include <chrono>
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <random>
#include <stdexcept>
#include <string>

#include "cli.hpp"

namespace bssnrhstests {

unsigned int eleOrder   = 6;
unsigned int numBlocks  = 50;
unsigned int iterations = 1;
std::string baselineRHSName;
std::string testRHSName;
unsigned int max_block_size = 1;
unsigned int rng_seed       = std::numeric_limits<unsigned int>::max();
unsigned int max_depth      = 9;
unsigned int min_depth      = 3;

DendroScalar domain_max[3]  = {500.0, 500.0, 500.0};
DendroScalar domain_min[3]  = {-500.0, -500.0, -500.0};

std::vector<DendroScalar> vars;
std::vector<DendroScalar> vars_rhs;
std::vector<DendroScalar> deriv_workspace;
std::vector<Block> block_list;
unsigned int npoints_1d;
unsigned int npoints_3d;
unsigned int pw;
unsigned int total_pts_per_var = 0;

std::mt19937 rng;

void prep_data_structures() {
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

    // then helpers that are calculated on read from cli
    std::cout << std::endl << "----------" << std::endl;
    std::cout << "  Calculated Values  " << std::endl;
    print_parameter("NPoints 1d", npoints_1d);
    print_parameter("NPoints 3d", npoints_3d);
    print_parameter("PW", pw);
}

}  // namespace bssnrhstests
