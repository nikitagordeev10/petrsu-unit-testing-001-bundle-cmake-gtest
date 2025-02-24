cmake_minimum_required(VERSION 3.10)
project(ctest-root)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(gtest gtest>=1.10)

add_subdirectory(app)

include(FetchContent)
if(NOT gtest_FOUND)
    message(STATUS "GoogleTest not found, fetching from GitHub...")

    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.14.0
    )

    FetchContent_MakeAvailable(googletest)
endif()

add_subdirectory(tests)
enable_testing()
add_test(NAME gtest_tests COMMAND tests/ctest-tests --gtest_output=xml:./ctest-tests.xml)
