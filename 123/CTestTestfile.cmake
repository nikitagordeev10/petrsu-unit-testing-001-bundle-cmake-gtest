# CMake generated Testfile for 
# Source directory: /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest
# Build directory: /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(gtest_tests "tests/ctest-tests" "--gtest_output=xml:./ctest-tests.xml")
set_tests_properties(gtest_tests PROPERTIES  _BACKTRACE_TRIPLES "/media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/CMakeLists.txt;19;add_test;/media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/CMakeLists.txt;0;")
subdirs("app")
subdirs("tests")
