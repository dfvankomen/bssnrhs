#pragma once

#include <iostream>
#include <ostream>
#include <random>
#include <string>
#include <vector>

/**
 * ==== Console Output Colors ====
 *
 */
#define RED "\e[1;31m"
#define BLU "\e[2;34m"
#define GRN "\e[0;32m"
#define YLW "\e[0;33m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define NRM "\e[0m"

#define DendroScalar double

namespace bssnrhstests {

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

    // final to know how many there are
    U_TOTAL_NUM
};

/**
 * @brief BSSN constraint variables
 * C_HAM - Hamiltonian constraint
 * C_MOM - Momentum constraint x, y, z
 * C_PSI4_REAL - real part of PSI4 scalar
 * C_PSI4_IMG  - imaginary part of PSI4 scalar
 */
enum VAR_CONSTRAINT {
    C_HAM = 0,
    C_MOM0,
    C_MOM1,
    C_MOM2,
    C_PSI4_REAL,
    C_PSI4_IMG,
    C_RIEM_SQRD,
    C_PONTRYAGIN,
    C_EXPANSION
};

static const char* BSSN_VAR_NAMES[] = {
    "U_ALPHA",  "U_CHI",    "U_K",      "U_GT0",    "U_GT1",    "U_GT2",
    "U_BETA0",  "U_BETA1",  "U_BETA2",  "U_B0",     "U_B1",     "U_B2",
    "U_SYMGT0", "U_SYMGT1", "U_SYMGT2", "U_SYMGT3", "U_SYMGT4", "U_SYMGT5",
    "U_SYMAT0", "U_SYMAT1", "U_SYMAT2", "U_SYMAT3", "U_SYMAT4", "U_SYMAT5"};

static const char* BSSN_CONSTRAINT_VAR_NAMES[] = {
    "C_HAM",      "C_MOM0",      "C_MOM1",       "C_MOM2",     "C_PSI4_REAL",
    "C_PSI4_IMG", "C_RIEM_SQRD", "C_PONTRYAGIN", "C_EXPANSION"};

constexpr unsigned int bssn_num_vars = VAR::U_TOTAL_NUM;
constexpr unsigned int bssn_num_grad = bssn_num_vars * 9;
const unsigned int BSSN_LAMBDA[4]    = {1, 1, 1, 1};
const double BSSN_A_LAMBDA[3]        = {0.0, 2.0, 0.0};
const double BSSN_LAMBDA_F[3]        = {1.0, 0.0};

const double RIT_ETA_OUTER           = 0.25;
const double RIT_ETA_CENTRAL         = 2.0;
const double RIT_ETA_WIDTH           = 40.0;

// simple block struct that contains basic information
struct Block {
    unsigned int nx;
    unsigned int ny;
    unsigned int nz;
    unsigned int depth;
    unsigned int bflag;
    DendroScalar dx;
    DendroScalar dy;
    DendroScalar dz;
    // NOTE: pmin is the minimum coordinates of the *block* not the element!
    DendroScalar pmin[3] = {0.0, 0.0, 0.0};
    unsigned int offset  = 0;
};

inline std::ostream& operator<<(std::ostream& os, const Block& blk) {
    os << "Block<sz=(" << blk.nx << ", " << blk.ny << ", " << blk.nz
       << "), depth=" << blk.depth << ", bflag=" << blk.bflag
       << ", dx=" << blk.dx << ", dy=" << blk.dy << ", dz=" << blk.dz
       << ", pmin(" << blk.pmin[0] << ", " << blk.pmin[1] << ", " << blk.pmin[2]
       << "), offset=" << blk.offset << ">";
    return os;
}

// parameters we're going to set
extern unsigned int eleOrder;
extern unsigned int numBlocks;
extern unsigned int iterations;
extern std::string baselineRHSName;
extern std::string testRHSName;
extern unsigned int max_block_size;
extern unsigned int rng_seed;

// helpers, shouldn't be set by parameters
extern std::vector<DendroScalar> vars;
extern std::vector<DendroScalar> vars_rhs;
extern std::vector<DendroScalar> deriv_workspace;
extern std::vector<Block> block_list;
extern unsigned int pw;

// @brief The total number of points across all blocks for each variable
extern unsigned int total_pts_per_var;

void read_from_cli(int argc, char** argv);
void dump_args();
void prep_data_structures();

// and then some randomness helpers
extern std::mt19937 rng;

inline unsigned int get_random_int(unsigned int min, unsigned int max) {
    std::uniform_int_distribution<unsigned int> dist(min, max);
    return dist(rng);
}

inline DendroScalar get_random_double(DendroScalar min, DendroScalar max) {
    std::uniform_real_distribution<DendroScalar> dist(min, max);
    return dist(rng);
}

}  // namespace bssnrhstests
