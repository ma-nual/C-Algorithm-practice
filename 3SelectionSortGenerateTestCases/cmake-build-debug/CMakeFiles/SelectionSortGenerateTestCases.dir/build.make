# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CppLearning\3SelectionSortGenerateTestCases

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CppLearning\3SelectionSortGenerateTestCases\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SelectionSortGenerateTestCases.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SelectionSortGenerateTestCases.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SelectionSortGenerateTestCases.dir/flags.make

CMakeFiles/SelectionSortGenerateTestCases.dir/main.cpp.obj: CMakeFiles/SelectionSortGenerateTestCases.dir/flags.make
CMakeFiles/SelectionSortGenerateTestCases.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CppLearning\3SelectionSortGenerateTestCases\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SelectionSortGenerateTestCases.dir/main.cpp.obj"
	D:\Qt5\Qt5.12.0\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SelectionSortGenerateTestCases.dir\main.cpp.obj -c D:\CppLearning\3SelectionSortGenerateTestCases\main.cpp

CMakeFiles/SelectionSortGenerateTestCases.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SelectionSortGenerateTestCases.dir/main.cpp.i"
	D:\Qt5\Qt5.12.0\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CppLearning\3SelectionSortGenerateTestCases\main.cpp > CMakeFiles\SelectionSortGenerateTestCases.dir\main.cpp.i

CMakeFiles/SelectionSortGenerateTestCases.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SelectionSortGenerateTestCases.dir/main.cpp.s"
	D:\Qt5\Qt5.12.0\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CppLearning\3SelectionSortGenerateTestCases\main.cpp -o CMakeFiles\SelectionSortGenerateTestCases.dir\main.cpp.s

# Object files for target SelectionSortGenerateTestCases
SelectionSortGenerateTestCases_OBJECTS = \
"CMakeFiles/SelectionSortGenerateTestCases.dir/main.cpp.obj"

# External object files for target SelectionSortGenerateTestCases
SelectionSortGenerateTestCases_EXTERNAL_OBJECTS =

SelectionSortGenerateTestCases.exe: CMakeFiles/SelectionSortGenerateTestCases.dir/main.cpp.obj
SelectionSortGenerateTestCases.exe: CMakeFiles/SelectionSortGenerateTestCases.dir/build.make
SelectionSortGenerateTestCases.exe: CMakeFiles/SelectionSortGenerateTestCases.dir/linklibs.rsp
SelectionSortGenerateTestCases.exe: CMakeFiles/SelectionSortGenerateTestCases.dir/objects1.rsp
SelectionSortGenerateTestCases.exe: CMakeFiles/SelectionSortGenerateTestCases.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CppLearning\3SelectionSortGenerateTestCases\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SelectionSortGenerateTestCases.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SelectionSortGenerateTestCases.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SelectionSortGenerateTestCases.dir/build: SelectionSortGenerateTestCases.exe

.PHONY : CMakeFiles/SelectionSortGenerateTestCases.dir/build

CMakeFiles/SelectionSortGenerateTestCases.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SelectionSortGenerateTestCases.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SelectionSortGenerateTestCases.dir/clean

CMakeFiles/SelectionSortGenerateTestCases.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CppLearning\3SelectionSortGenerateTestCases D:\CppLearning\3SelectionSortGenerateTestCases D:\CppLearning\3SelectionSortGenerateTestCases\cmake-build-debug D:\CppLearning\3SelectionSortGenerateTestCases\cmake-build-debug D:\CppLearning\3SelectionSortGenerateTestCases\cmake-build-debug\CMakeFiles\SelectionSortGenerateTestCases.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SelectionSortGenerateTestCases.dir/depend

