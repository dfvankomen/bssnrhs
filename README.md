# BSSN RHS Tests

This repository contains a test C++ program to explore improvements to Dendro-GR. In particular, it isolates the RHS computation so that different versions can be used to test performance.

## Usage

The program is easy to use, it requires CMake and a C++ compiler that supports C++17.

Simply create a build folder, then run CMake to create the build files and `make` to build. Then run the `BSSNRHSTests` executable. The basic flow is:

```
# after cloning the repository
mkdir build && cd build
cmake ..
make BSSNRHSTests -j8
./BSSNRHSTests
```

The program does have a few command line interface options.

**Required Parameters**

- `eleorder` : the Element Order used to construct blocks. Dendro-GR typically uses `6`, though `8` may be worth testing as well.
- `numblocks` : The number of blocks that should be passed through the program. This helps with giving the RHS functions more iterations. Dendro-GR on a single core will typically have anywhere between `30` and `50`, but for testing RHS functions this can be far larger (perhaps 200+)
- `rhs` : The _name_ of the RHS function that should be used in testing. The name will be based on what is set in the "register" function.

**Optional Parameters**
These optional parameters are used to help guide the program execution.

- `baseline-rhs` : Just like `rhs` above, this is the _name_ of the RHS function that should be used for comparisons. This will run on the same data as `rhs`. It defaults to `default`, which is the RHS execution as is found in Dendro-GR.
- `seed` : A random seed to set for some of the random generation that is done. In particular, this helps with block generation as it will choose random block depths and random block coordinates. By default the program chooses a time-based seed.
- `max-block-size` : An integer number for how large the maximum block size should be. This controls a "fused" block representation. Dendro-GR has the ability to fuse together blocks of the same depth that all share a parent recursively up to the lowest possible resolution. This should probably be left as the default of `1` for now. If set greater than 1, the program will randomly choose a block size from 1 to the set number uniformly (perhaps an update with the option to set a weighting would be useful as block size 1 is far more common)

**Example Command**

```
./BSSNRHSTests --eleorder=6 --numblocks=500 --rhs=nothing
```

Once finished the program will give an output of the total time taken in ms to compute the baseline RHS function and the selected function.

## Adding a RHS Function

Using the `include/rhsfuncs/default_rhs.hpp` and `src/rhsfuncs/default_rhs.cpp` files is a good place to start. Create a new file with a descriptive name for the test and input the code for the RHS block.

Once done, make sure you edit the `register_all_rhs_functions` function in `src/rhs_runner.cpp` near the top of the file. You'll also need to add the "include" file. The syntax is simple:

```
register_rhs_function("function_name", rhs::function_to_test);
```

This will register `function_name` to be available to set with the `rhs` and `baseline-rhs` command line options to use in testing.

**Note**: Currently, the RHS functions are designed to compute a single block at a time. Updates will be made as more experiments are done to handle staging operations that will require other iteration options and memory management.
