#pragma once

#include <fstream>
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

inline bool get_block_data_and_information(std::vector<Block>& blklist,
                                           std::vector<double>& blockdata,
                                           std::vector<double>& outputdata,
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
    // and now we have input and output data from the saved bin file

    std::cout << "Restored " << num_blks << " blocks from file." << std::endl;
    std::cout << total_num_doubles << " * 2 total doubles read" << std::endl;
    if (total_num_doubles % bssnrhstests::bssn_num_vars != 0) {
        throw std::runtime_error(
            "Error when reading in data, the number of points isn't divisible "
            "by number of variables: " +
            std::to_string(total_num_doubles) + " vs " +
            std::to_string(bssnrhstests::bssn_num_vars));
    }

    bssnrhstests::total_pts_per_var =
        total_num_doubles / bssnrhstests::bssn_num_vars;
    std::cout << "Total points per variable: " << total_pts_per_var
              << std::endl;

    return true;
}

}  // namespace bssnrhstests
