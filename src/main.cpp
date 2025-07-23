#include <iostream>

#include "bssnrhstests.hpp"
#include "rhs_runner.hpp"

int main(int argc, char *argv[]) {
    // make sure the functions are registered
    bssnrhstests::register_all_rhs_functions();

    bssnrhstests::read_from_cli(argc, argv);

    // then prep the data structures
    bssnrhstests::prep_data_structures();

    // then run the functions
    bssnrhstests::run_rhs_function(bssnrhstests::baselineRHSName);

    std::cout << std::endl
              << "--------------------------------------" << std::endl;
    std::cout << "Now running test function with same parameters and data..."
              << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    bssnrhstests::run_rhs_function(bssnrhstests::testRHSName);

    return 0;
}
