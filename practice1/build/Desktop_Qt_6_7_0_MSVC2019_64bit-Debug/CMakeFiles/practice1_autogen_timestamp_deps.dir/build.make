# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles JOM" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\boolt\Desktop\qt_practices\practice1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\boolt\Desktop\qt_practices\practice1\build\Desktop_Qt_6_7_0_MSVC2019_64bit-Debug

# Utility rule file for practice1_autogen_timestamp_deps.

# Include any custom commands dependencies for this target.
include CMakeFiles\practice1_autogen_timestamp_deps.dir\compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles\practice1_autogen_timestamp_deps.dir\progress.make

practice1_autogen_timestamp_deps: CMakeFiles\practice1_autogen_timestamp_deps.dir\build.make
.PHONY : practice1_autogen_timestamp_deps

# Rule to build all files generated by this target.
CMakeFiles\practice1_autogen_timestamp_deps.dir\build: practice1_autogen_timestamp_deps
.PHONY : CMakeFiles\practice1_autogen_timestamp_deps.dir\build

CMakeFiles\practice1_autogen_timestamp_deps.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\practice1_autogen_timestamp_deps.dir\cmake_clean.cmake
.PHONY : CMakeFiles\practice1_autogen_timestamp_deps.dir\clean

CMakeFiles\practice1_autogen_timestamp_deps.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles JOM" C:\Users\boolt\Desktop\qt_practices\practice1 C:\Users\boolt\Desktop\qt_practices\practice1 C:\Users\boolt\Desktop\qt_practices\practice1\build\Desktop_Qt_6_7_0_MSVC2019_64bit-Debug C:\Users\boolt\Desktop\qt_practices\practice1\build\Desktop_Qt_6_7_0_MSVC2019_64bit-Debug C:\Users\boolt\Desktop\qt_practices\practice1\build\Desktop_Qt_6_7_0_MSVC2019_64bit-Debug\CMakeFiles\practice1_autogen_timestamp_deps.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles\practice1_autogen_timestamp_deps.dir\depend

