# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/mikhail038/Work/Vlados/Triangles

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mikhail038/Work/Vlados/Triangles/Build

# Include any dependencies generated for this target.
include CMakeFiles/Triangles.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Triangles.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Triangles.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Triangles.dir/flags.make

CMakeFiles/Triangles.dir/Source/main.cpp.o: CMakeFiles/Triangles.dir/flags.make
CMakeFiles/Triangles.dir/Source/main.cpp.o: ../Source/main.cpp
CMakeFiles/Triangles.dir/Source/main.cpp.o: CMakeFiles/Triangles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikhail038/Work/Vlados/Triangles/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Triangles.dir/Source/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Triangles.dir/Source/main.cpp.o -MF CMakeFiles/Triangles.dir/Source/main.cpp.o.d -o CMakeFiles/Triangles.dir/Source/main.cpp.o -c /home/mikhail038/Work/Vlados/Triangles/Source/main.cpp

CMakeFiles/Triangles.dir/Source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Triangles.dir/Source/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail038/Work/Vlados/Triangles/Source/main.cpp > CMakeFiles/Triangles.dir/Source/main.cpp.i

CMakeFiles/Triangles.dir/Source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Triangles.dir/Source/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail038/Work/Vlados/Triangles/Source/main.cpp -o CMakeFiles/Triangles.dir/Source/main.cpp.s

# Object files for target Triangles
Triangles_OBJECTS = \
"CMakeFiles/Triangles.dir/Source/main.cpp.o"

# External object files for target Triangles
Triangles_EXTERNAL_OBJECTS =

Triangles: CMakeFiles/Triangles.dir/Source/main.cpp.o
Triangles: CMakeFiles/Triangles.dir/build.make
Triangles: libgeometry.a
Triangles: CMakeFiles/Triangles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mikhail038/Work/Vlados/Triangles/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Triangles"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Triangles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Triangles.dir/build: Triangles
.PHONY : CMakeFiles/Triangles.dir/build

CMakeFiles/Triangles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Triangles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Triangles.dir/clean

CMakeFiles/Triangles.dir/depend:
	cd /home/mikhail038/Work/Vlados/Triangles/Build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikhail038/Work/Vlados/Triangles /home/mikhail038/Work/Vlados/Triangles /home/mikhail038/Work/Vlados/Triangles/Build /home/mikhail038/Work/Vlados/Triangles/Build /home/mikhail038/Work/Vlados/Triangles/Build/CMakeFiles/Triangles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Triangles.dir/depend

