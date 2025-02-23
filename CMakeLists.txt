cmake_minimum_required(VERSION 3.10)
project(ctest-root)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Check for Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.10.0
)

FetchContent_MakeAvailable(googletest)

# Add subdirectory for the app
add_subdirectory(app)

# If you still want to use pkg-config for gtest, this is where you can try it:
# find_package(PkgConfig REQUIRED)
# pkg_check_modules(gtest gtest>=1.10)

# Add tests
add_subdirectory(tests)

enable_testing()
add_test(NAME gtest_tests COMMAND tests/ctest-tests --gtest_output=xml:./ctest-tests.xml)
