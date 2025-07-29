cmake_minimum_required(VERSION 3.10)
project(BSSNRHSTests CXX)

set(ADDITIONAL_SOURCES
  src/bssnrhstests.cpp
  src/rhs_runner.cpp
  src/derivs.cpp
)

file(GLOB RHS_FUNCTION_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/rhsfuncs/*.cpp")

set(ALL_SOURCES
  src/main.cpp
  ${ADDITIONAL_SOURCES}
  ${RHS_FUNCTION_SOURCES}
)


add_executable(${PROJECT_NAME} ${ALL_SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
