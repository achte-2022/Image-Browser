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
CMAKE_SOURCE_DIR = /home/ta/Desktop/Image-Browser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ta/Desktop/Image-Browser/build

# Include any dependencies generated for this target.
include src/CMakeFiles/html_writer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/html_writer.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/html_writer.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/html_writer.dir/flags.make

src/CMakeFiles/html_writer.dir/html_writer.cc.o: src/CMakeFiles/html_writer.dir/flags.make
src/CMakeFiles/html_writer.dir/html_writer.cc.o: ../src/html_writer.cc
src/CMakeFiles/html_writer.dir/html_writer.cc.o: src/CMakeFiles/html_writer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ta/Desktop/Image-Browser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/html_writer.dir/html_writer.cc.o"
	cd /home/ta/Desktop/Image-Browser/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/html_writer.dir/html_writer.cc.o -MF CMakeFiles/html_writer.dir/html_writer.cc.o.d -o CMakeFiles/html_writer.dir/html_writer.cc.o -c /home/ta/Desktop/Image-Browser/src/html_writer.cc

src/CMakeFiles/html_writer.dir/html_writer.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/html_writer.dir/html_writer.cc.i"
	cd /home/ta/Desktop/Image-Browser/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ta/Desktop/Image-Browser/src/html_writer.cc > CMakeFiles/html_writer.dir/html_writer.cc.i

src/CMakeFiles/html_writer.dir/html_writer.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/html_writer.dir/html_writer.cc.s"
	cd /home/ta/Desktop/Image-Browser/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ta/Desktop/Image-Browser/src/html_writer.cc -o CMakeFiles/html_writer.dir/html_writer.cc.s

# Object files for target html_writer
html_writer_OBJECTS = \
"CMakeFiles/html_writer.dir/html_writer.cc.o"

# External object files for target html_writer
html_writer_EXTERNAL_OBJECTS =

src/libhtml_writer.a: src/CMakeFiles/html_writer.dir/html_writer.cc.o
src/libhtml_writer.a: src/CMakeFiles/html_writer.dir/build.make
src/libhtml_writer.a: src/CMakeFiles/html_writer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ta/Desktop/Image-Browser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libhtml_writer.a"
	cd /home/ta/Desktop/Image-Browser/build/src && $(CMAKE_COMMAND) -P CMakeFiles/html_writer.dir/cmake_clean_target.cmake
	cd /home/ta/Desktop/Image-Browser/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/html_writer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/html_writer.dir/build: src/libhtml_writer.a
.PHONY : src/CMakeFiles/html_writer.dir/build

src/CMakeFiles/html_writer.dir/clean:
	cd /home/ta/Desktop/Image-Browser/build/src && $(CMAKE_COMMAND) -P CMakeFiles/html_writer.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/html_writer.dir/clean

src/CMakeFiles/html_writer.dir/depend:
	cd /home/ta/Desktop/Image-Browser/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ta/Desktop/Image-Browser /home/ta/Desktop/Image-Browser/src /home/ta/Desktop/Image-Browser/build /home/ta/Desktop/Image-Browser/build/src /home/ta/Desktop/Image-Browser/build/src/CMakeFiles/html_writer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/html_writer.dir/depend

