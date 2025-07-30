#pragma once

#include <iostream>
#include <limits>
#include <ostream>
#include <random>
#include <string>
#include <vector>

using DendroScalar = double;

namespace bssnrhstests {

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

    // final to know how many there are
    C_TOTAL_NUM
};

static const char* BSSN_VAR_NAMES[] = {
    "U_ALPHA",  "U_CHI",    "U_K",      "U_GT0",    "U_GT1",    "U_GT2",
    "U_BETA0",  "U_BETA1",  "U_BETA2",  "U_B0",     "U_B1",     "U_B2",
    "U_SYMGT0", "U_SYMGT1", "U_SYMGT2", "U_SYMGT3", "U_SYMGT4", "U_SYMGT5",
    "U_SYMAT0", "U_SYMAT1", "U_SYMAT2", "U_SYMAT3", "U_SYMAT4", "U_SYMAT5"};

static const char* BSSN_CONSTRAINT_VAR_NAMES[] = {
    "C_HAM", "C_MOM0", "C_MOM1", "C_MOM2", "C_PSI4_REAL", "C_PSI4_IMG"};

const unsigned int bssn_num_vars   = VAR::U_TOTAL_NUM;
const unsigned int bssn_num_grad   = bssn_num_vars * 9;
const unsigned int bssn_num_consts = VAR_CONSTRAINT::C_TOTAL_NUM;
extern unsigned int BSSN_LAMBDA[4];
extern double BSSN_A_LAMBDA[3];
extern double BSSN_LAMBDA_F[2];
extern double KO_DISS_SIGMA;

extern double RIT_ETA_OUTER;
extern double RIT_ETA_CENTRAL;
extern double RIT_ETA_WIDTH;
extern double BSSN_SSL_H;
extern double BSSN_SSL_SIGMA;

extern double BSSN_EPSILON_CAKO_GAUGE;
extern double BSSN_EPSILON_CAKO_OTHER;
extern bool BSSN_CAKO_ENABLED;

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
extern std::string block_data_filename;

// helpers, shouldn't be set by parameters
extern std::vector<DendroScalar> vars;
extern std::vector<DendroScalar> vars_rhs;
extern std::vector<DendroScalar> vars_rhs_truth;
extern std::vector<DendroScalar> constraints_vec;
extern std::vector<DendroScalar> constraints_truth;
extern std::vector<DendroScalar> deriv_workspace;
extern std::vector<Block> block_list;
extern unsigned int pw;
extern bool verify_data;
extern double curr_time;

extern double bhMass1;
extern double bhMass2;
extern double bh1x;
extern double bh1y;
extern double bh1z;
extern double bh2x;
extern double bh2y;
extern double bh2z;
extern double dx_min;
extern double dt;
// TODO: this might need to be read in or something
const double BSSN_CAHD_C = 0.0;

// @brief The total number of points across all blocks for each variable
extern unsigned int total_pts_per_var;
extern unsigned int total_pts_per_const;

void read_from_cli(int argc, char** argv);
void dump_args();
void prep_data_structures();

void read_from_file(std::string& filename);

void verify_data_integrity();

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

inline void fill_vector_with_random_junk(
    std::vector<double>& vec,
    DendroScalar min = -std::numeric_limits<double>::max(),
    DendroScalar max = std::numeric_limits<double>::max()) {
    std::uniform_real_distribution<DendroScalar> dist(min, max);

    for (size_t i = 0; i < vec.size(); i++) {
        vec[i] = dist(rng);
    }
}

template <typename T>
void to_2d(std::vector<T>& vec_in, T** v2d, size_t total_points_per_dof,
           size_t dof) {
    // make sure we have enough points
    if (vec_in.size() != total_points_per_dof * dof) {
        throw std::runtime_error(
            "Error when converting vector to 2d! vec_in is not the same size "
            "as dof * total_points_per_dof!");
    }

    for (unsigned int i = 0; i < dof; i++)
        v2d[i] = vec_in.data() + i * total_points_per_dof;

    return;
}

}  // namespace bssnrhstests
