#pragma once

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

// macro version of the checks that were originally in derivs.cpp
#define CHECK_FLOAT_ERRORS(var, index)                                        \
    do {                                                                      \
        if (std::isinf(var[index])) {                                         \
            std::cout << "INF detected for " << #var << " at index " << index \
                      << " in function " << __func__ << " file: " << __FILE__ \
                      << " line: " << __LINE__ << std::endl;                  \
        } else if (std::isnan(var[index])) {                                  \
            std::cout << "NaN detected for " << #var << " at index " << index \
                      << " in function " << __func__ << " file: " << __FILE__ \
                      << " line: " << __LINE__ << std::endl;                  \
        }                                                                     \
    } while (0)  // note: this do-while must be included for the macro to work
