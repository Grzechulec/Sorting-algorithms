# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/build"

# Include any dependencies generated for this target.
include CMakeFiles/efficiency_tests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/efficiency_tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/efficiency_tests.dir/flags.make

CMakeFiles/efficiency_tests.dir/src/main.cpp.o: CMakeFiles/efficiency_tests.dir/flags.make
CMakeFiles/efficiency_tests.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/efficiency_tests.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/efficiency_tests.dir/src/main.cpp.o -c "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/src/main.cpp"

CMakeFiles/efficiency_tests.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/efficiency_tests.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/src/main.cpp" > CMakeFiles/efficiency_tests.dir/src/main.cpp.i

CMakeFiles/efficiency_tests.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/efficiency_tests.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/src/main.cpp" -o CMakeFiles/efficiency_tests.dir/src/main.cpp.s

CMakeFiles/efficiency_tests.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/efficiency_tests.dir/src/main.cpp.o.requires

CMakeFiles/efficiency_tests.dir/src/main.cpp.o.provides: CMakeFiles/efficiency_tests.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/efficiency_tests.dir/build.make CMakeFiles/efficiency_tests.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/efficiency_tests.dir/src/main.cpp.o.provides

CMakeFiles/efficiency_tests.dir/src/main.cpp.o.provides.build: CMakeFiles/efficiency_tests.dir/src/main.cpp.o


# Object files for target efficiency_tests
efficiency_tests_OBJECTS = \
"CMakeFiles/efficiency_tests.dir/src/main.cpp.o"

# External object files for target efficiency_tests
efficiency_tests_EXTERNAL_OBJECTS =

efficiency_tests: CMakeFiles/efficiency_tests.dir/src/main.cpp.o
efficiency_tests: CMakeFiles/efficiency_tests.dir/build.make
efficiency_tests: CMakeFiles/efficiency_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable efficiency_tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/efficiency_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/efficiency_tests.dir/build: efficiency_tests

.PHONY : CMakeFiles/efficiency_tests.dir/build

CMakeFiles/efficiency_tests.dir/requires: CMakeFiles/efficiency_tests.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/efficiency_tests.dir/requires

CMakeFiles/efficiency_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/efficiency_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/efficiency_tests.dir/clean

CMakeFiles/efficiency_tests.dir/depend:
	cd "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/build" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/build" "/home/grzegorz/Pulpit/repo/grzegorzsmolakpamsi/Algorytmy sortowania/PAMSISortowanie/build/CMakeFiles/efficiency_tests.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/efficiency_tests.dir/depend

