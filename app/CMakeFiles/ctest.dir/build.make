# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest

# Include any dependencies generated for this target.
include app/CMakeFiles/ctest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include app/CMakeFiles/ctest.dir/compiler_depend.make

# Include the progress variables for this target.
include app/CMakeFiles/ctest.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/ctest.dir/flags.make

app/CMakeFiles/ctest.dir/main.c.o: app/CMakeFiles/ctest.dir/flags.make
app/CMakeFiles/ctest.dir/main.c.o: app/main.c
app/CMakeFiles/ctest.dir/main.c.o: app/CMakeFiles/ctest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object app/CMakeFiles/ctest.dir/main.c.o"
	cd /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT app/CMakeFiles/ctest.dir/main.c.o -MF CMakeFiles/ctest.dir/main.c.o.d -o CMakeFiles/ctest.dir/main.c.o -c /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app/main.c

app/CMakeFiles/ctest.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/ctest.dir/main.c.i"
	cd /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app/main.c > CMakeFiles/ctest.dir/main.c.i

app/CMakeFiles/ctest.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/ctest.dir/main.c.s"
	cd /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app/main.c -o CMakeFiles/ctest.dir/main.c.s

app/CMakeFiles/ctest.dir/mathematical_calculator.c.o: app/CMakeFiles/ctest.dir/flags.make
app/CMakeFiles/ctest.dir/mathematical_calculator.c.o: app/mathematical_calculator.c
app/CMakeFiles/ctest.dir/mathematical_calculator.c.o: app/CMakeFiles/ctest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object app/CMakeFiles/ctest.dir/mathematical_calculator.c.o"
	cd /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT app/CMakeFiles/ctest.dir/mathematical_calculator.c.o -MF CMakeFiles/ctest.dir/mathematical_calculator.c.o.d -o CMakeFiles/ctest.dir/mathematical_calculator.c.o -c /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app/mathematical_calculator.c

app/CMakeFiles/ctest.dir/mathematical_calculator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/ctest.dir/mathematical_calculator.c.i"
	cd /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app/mathematical_calculator.c > CMakeFiles/ctest.dir/mathematical_calculator.c.i

app/CMakeFiles/ctest.dir/mathematical_calculator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/ctest.dir/mathematical_calculator.c.s"
	cd /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app/mathematical_calculator.c -o CMakeFiles/ctest.dir/mathematical_calculator.c.s

# Object files for target ctest
ctest_OBJECTS = \
"CMakeFiles/ctest.dir/main.c.o" \
"CMakeFiles/ctest.dir/mathematical_calculator.c.o"

# External object files for target ctest
ctest_EXTERNAL_OBJECTS =

app/ctest: app/CMakeFiles/ctest.dir/main.c.o
app/ctest: app/CMakeFiles/ctest.dir/mathematical_calculator.c.o
app/ctest: app/CMakeFiles/ctest.dir/build.make
app/ctest: app/CMakeFiles/ctest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ctest"
	cd /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ctest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/ctest.dir/build: app/ctest
.PHONY : app/CMakeFiles/ctest.dir/build

app/CMakeFiles/ctest.dir/clean:
	cd /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app && $(CMAKE_COMMAND) -P CMakeFiles/ctest.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/ctest.dir/clean

app/CMakeFiles/ctest.dir/depend:
	cd /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app /media/sf_E_DRIVE/petrsu/unit_testing/001-bundle-qt-gtest/001-bundle-qt-gtest/app/CMakeFiles/ctest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : app/CMakeFiles/ctest.dir/depend

