#pragma once

#include <fstream>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "bssnrhstests.hpp"

// the structure uses what we have for blk, because that's the minimum amount of
// information needed to recreate all data about the block

// then using the block struct

using DendroScalar = double;

namespace bssnrhstests {

inline bool save_block_data_and_information(std::vector<Block>& blklist,
                                            std::vector<double>& blockdata,
                                            std::vector<double>& outputdata,
                                            const std::string& filename) {
    std::ofstream fileout(filename, std::ios::out | std::ios::binary);

    if (!fileout.is_open()) {
        std::cerr << "ERROR: Couldn't open file '" << filename
                  << "' for data saving!" << std::endl;
        return false;
    }

    // save the number of blocks we're interested in
    size_t num_blks = blklist.size();
    fileout.write(reinterpret_cast<char*>(&num_blks), sizeof(num_blks));

    // then save the structs directly
    fileout.write(reinterpret_cast<char*>(blklist.data()),
                  num_blks * sizeof(Block));

    // then calculate the output size from the vector
    size_t total_output_size = 0;
    for (auto& blk : blklist) {
        total_output_size += blk.nx * blk.ny * blk.nz;
    }
    total_output_size *= bssnrhstests::bssn_num_vars;
    fileout.write(reinterpret_cast<char*>(&total_output_size),
                  sizeof(total_output_size));

    // then just dump the data
    fileout.write(reinterpret_cast<char*>(blockdata.data()),
                  total_output_size * sizeof(double));
    fileout.write(reinterpret_cast<char*>(outputdata.data()),
                  total_output_size * sizeof(double));

    return true;
}

template <typename T>
void print_value(const std::string& name, const T& value) {
    std::cout << std::left << std::setw(25) << name << ": " << std::right
              << value << std::endl;
}

template <typename T, size_t N>
void print_value(const std::string& name, const T (&arr)[N]) {
    std::cout << std::left << std::setw(25) << name << ": " << std::right;
    for (size_t i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

inline bool get_block_data_and_information(std::vector<Block>& blklist,
                                           std::vector<double>& blockdata,
                                           std::vector<double>& outputdata,
                                           std::vector<double>& constraint_data,
                                           const std::string& filename) {
    std::ifstream filein(filename);

    std::cout << std::endl << "---------- " << std::endl;
    std::cout << "Loading and restoring data from " << filename << std::endl;

    if (!filein.is_open()) {
        std::cerr << "ERROR: Couldn't open file '" << filename
                  << "' for data loading!" << std::endl;
        return false;
    }

    blklist.clear();

    size_t num_blks;
    filein.read(reinterpret_cast<char*>(&num_blks), sizeof(num_blks));
    if (filein.fail()) {
        std::cerr << "ERROR: Couldn't read the number of blocks from file: '"
                  << filename << "'" << std::endl;
        return false;
    }

    // then resize the vector for storage
    blklist.resize(num_blks);

    // current time
    filein.read(reinterpret_cast<char*>(&curr_time), sizeof(curr_time));
    if (filein.fail()) {
        std::cerr << "ERROR: Couldn't read the current time from file: '"
                  << filename << "'" << std::endl;
        return false;
    }
    filein.read(reinterpret_cast<char*>(&dt), sizeof(dt));
    if (filein.fail()) {
        std::cerr << "ERROR: Couldn't read dt from file: '" << filename << "'"
                  << std::endl;
        return false;
    }
    filein.read(reinterpret_cast<char*>(&dx_min), sizeof(dx_min));
    if (filein.fail()) {
        std::cerr << "ERROR: Couldn't read dx_min from file: '" << filename
                  << "'" << std::endl;
        return false;
    }

    // bssn parameters as stored
    filein.read(reinterpret_cast<char*>(&BSSN_LAMBDA), sizeof(BSSN_LAMBDA));
    filein.read(reinterpret_cast<char*>(&BSSN_LAMBDA_F), sizeof(BSSN_LAMBDA_F));
    filein.read(reinterpret_cast<char*>(&KO_DISS_SIGMA), sizeof(KO_DISS_SIGMA));
    filein.read(reinterpret_cast<char*>(&RIT_ETA_WIDTH), sizeof(RIT_ETA_WIDTH));
    filein.read(reinterpret_cast<char*>(&RIT_ETA_CENTRAL),
                sizeof(RIT_ETA_CENTRAL));
    filein.read(reinterpret_cast<char*>(&RIT_ETA_OUTER), sizeof(RIT_ETA_OUTER));
    filein.read(reinterpret_cast<char*>(&BSSN_SSL_H), sizeof(BSSN_SSL_H));
    filein.read(reinterpret_cast<char*>(&BSSN_SSL_SIGMA),
                sizeof(BSSN_SSL_SIGMA));
    filein.read(reinterpret_cast<char*>(&BSSN_CAKO_ENABLED),
                sizeof(BSSN_CAKO_ENABLED));
    filein.read(reinterpret_cast<char*>(&BSSN_EPSILON_CAKO_GAUGE),
                sizeof(BSSN_EPSILON_CAKO_GAUGE));
    filein.read(reinterpret_cast<char*>(&BSSN_EPSILON_CAKO_OTHER),
                sizeof(BSSN_EPSILON_CAKO_OTHER));

    // black hole data
    filein.read(reinterpret_cast<char*>(&bhMass1), sizeof(bhMass1));
    filein.read(reinterpret_cast<char*>(&bhMass2), sizeof(bhMass2));
    filein.read(reinterpret_cast<char*>(&bh1x), sizeof(bh1x));
    filein.read(reinterpret_cast<char*>(&bh2x), sizeof(bh2x));
    filein.read(reinterpret_cast<char*>(&bh1y), sizeof(bh1y));
    filein.read(reinterpret_cast<char*>(&bh2y), sizeof(bh2y));
    filein.read(reinterpret_cast<char*>(&bh1z), sizeof(bh1z));
    filein.read(reinterpret_cast<char*>(&bh2z), sizeof(bh2z));
    if (filein.fail()) {
        std::cerr << "ERROR: Couldn't read black hole data from file: '"
                  << filename << "'" << std::endl;
        return false;
    }

    filein.read(reinterpret_cast<char*>(blklist.data()),
                num_blks * sizeof(Block));
    if (filein.fail()) {
        std::cerr << "ERROR: Couldn't read the blocks from file: '" << filename
                  << "'" << std::endl;
        return false;
    }

    // now we load in the data
    size_t total_num_doubles = 0;
    filein.read(reinterpret_cast<char*>(&total_num_doubles),
                sizeof(total_num_doubles));
    if (filein.fail()) {
        std::cerr
            << "ERROR: Couldn't read the number of total doubles from file: '"
            << filename << "'" << std::endl;
        return false;
    }

    blockdata.resize(total_num_doubles);
    filein.read(reinterpret_cast<char*>(blockdata.data()),
                total_num_doubles * sizeof(double));
    if (filein.fail()) {
        std::cerr
            << "ERROR: Couldn't read the input saved block data from file: '"
            << filename << "'" << std::endl;
        return false;
    }

    // then the same thing for the output data
    outputdata.resize(total_num_doubles);
    filein.read(reinterpret_cast<char*>(outputdata.data()),
                total_num_doubles * sizeof(double));
    if (filein.fail()) {
        std::cerr
            << "ERROR: Couldn't read the output saved block data from file: '"
            << filename << "'" << std::endl;
        return false;
    }

    // then restore in the constraints
    size_t total_num_constraints_doubles = 0;
    filein.read(reinterpret_cast<char*>(&total_num_constraints_doubles),
                sizeof(total_num_constraints_doubles));
    if (filein.fail()) {
        std::cerr << "ERROR: Couldn't read the number of total constraint "
                     "doubles from file: '"
                  << filename << "'" << std::endl;
        return false;
    }

    // and
    constraint_data.resize(total_num_constraints_doubles);
    filein.read(reinterpret_cast<char*>(constraint_data.data()),
                total_num_constraints_doubles * sizeof(double));
    if (filein.fail()) {
        std::cerr << "ERROR: Couldn't read the input saved constraint block "
                     "data from file: '"
                  << filename << "'" << std::endl;
        return false;
    }

    // and now we have input and output data from the saved bin file

    if (total_num_doubles % bssnrhstests::bssn_num_vars != 0) {
        throw std::runtime_error(
            "Error when reading in data, the number of points isn't divisible "
            "by number of variables: " +
            std::to_string(total_num_doubles) + " vs " +
            std::to_string(bssnrhstests::bssn_num_vars));
    }
    if (total_num_constraints_doubles % bssnrhstests::bssn_num_consts != 0) {
        throw std::runtime_error(
            "Error when reading in data, the number of constraint points isn't "
            "divisible by number of variables: " +
            std::to_string(total_num_doubles) + " vs " +
            std::to_string(bssnrhstests::bssn_num_vars));
    }

    bssnrhstests::total_pts_per_var =
        total_num_doubles / bssnrhstests::bssn_num_vars;
    bssnrhstests::total_pts_per_const =
        total_num_constraints_doubles / bssnrhstests::bssn_num_consts;

    // then print the outputs
    std::cout << "  -- LOADED IN VALUES --" << std::endl;
    print_value("Number of Blocks", num_blks);
    print_value("Current Time", curr_time);
    print_value("Current dt", dt);
    print_value("Current dx_min", dx_min);
    print_value("BSSN_LAMBDA", BSSN_LAMBDA);
    print_value("BSSN_LAMBDA_F", BSSN_LAMBDA_F);

    print_value("KO_DISS_SIGMA", KO_DISS_SIGMA);
    print_value("RIT_ETA_WIDTH", RIT_ETA_WIDTH);
    print_value("RIT_ETA_CENTRAL", RIT_ETA_CENTRAL);
    print_value("BSSN_SSL_H", BSSN_SSL_H);
    print_value("BSSN_SSL_SIGMA", BSSN_SSL_SIGMA);
    print_value("BSSN_CAKO_ENABLED", BSSN_CAKO_ENABLED);
    print_value("BSSN_EPSILON_CAKO_GAUGE", BSSN_EPSILON_CAKO_GAUGE);
    print_value("BSSN_EPSILON_CAKO_OTHER", BSSN_EPSILON_CAKO_OTHER);
    print_value("BH1 Mass", bhMass1);
    print_value("BH2 Mass", bhMass2);
    print_value("BH1 x", bh1x);
    print_value("BH2 x", bh2x);
    print_value("BH1 y", bh1y);
    print_value("BH2 y", bh2y);
    print_value("BH1 z", bh1z);
    print_value("BH2 z", bh2z);
    print_value("Total Var pts", total_num_doubles);
    print_value("Total Const pts", total_num_constraints_doubles);
    print_value("Total per Var", total_pts_per_var);
    print_value("Total per Constraint", total_pts_per_const);

    return true;
}

}  // namespace bssnrhstests
