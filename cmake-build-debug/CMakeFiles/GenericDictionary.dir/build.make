# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kidma/CLionProjects/CS1440/HW6-Generics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GenericDictionary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GenericDictionary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GenericDictionary.dir/flags.make

CMakeFiles/GenericDictionary.dir/main.cpp.o: CMakeFiles/GenericDictionary.dir/flags.make
CMakeFiles/GenericDictionary.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GenericDictionary.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GenericDictionary.dir/main.cpp.o -c /Users/kidma/CLionProjects/CS1440/HW6-Generics/main.cpp

CMakeFiles/GenericDictionary.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GenericDictionary.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kidma/CLionProjects/CS1440/HW6-Generics/main.cpp > CMakeFiles/GenericDictionary.dir/main.cpp.i

CMakeFiles/GenericDictionary.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GenericDictionary.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kidma/CLionProjects/CS1440/HW6-Generics/main.cpp -o CMakeFiles/GenericDictionary.dir/main.cpp.s

CMakeFiles/GenericDictionary.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/GenericDictionary.dir/main.cpp.o.requires

CMakeFiles/GenericDictionary.dir/main.cpp.o.provides: CMakeFiles/GenericDictionary.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/GenericDictionary.dir/build.make CMakeFiles/GenericDictionary.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/GenericDictionary.dir/main.cpp.o.provides

CMakeFiles/GenericDictionary.dir/main.cpp.o.provides.build: CMakeFiles/GenericDictionary.dir/main.cpp.o


CMakeFiles/GenericDictionary.dir/Menu.cpp.o: CMakeFiles/GenericDictionary.dir/flags.make
CMakeFiles/GenericDictionary.dir/Menu.cpp.o: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GenericDictionary.dir/Menu.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GenericDictionary.dir/Menu.cpp.o -c /Users/kidma/CLionProjects/CS1440/HW6-Generics/Menu.cpp

CMakeFiles/GenericDictionary.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GenericDictionary.dir/Menu.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kidma/CLionProjects/CS1440/HW6-Generics/Menu.cpp > CMakeFiles/GenericDictionary.dir/Menu.cpp.i

CMakeFiles/GenericDictionary.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GenericDictionary.dir/Menu.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kidma/CLionProjects/CS1440/HW6-Generics/Menu.cpp -o CMakeFiles/GenericDictionary.dir/Menu.cpp.s

CMakeFiles/GenericDictionary.dir/Menu.cpp.o.requires:

.PHONY : CMakeFiles/GenericDictionary.dir/Menu.cpp.o.requires

CMakeFiles/GenericDictionary.dir/Menu.cpp.o.provides: CMakeFiles/GenericDictionary.dir/Menu.cpp.o.requires
	$(MAKE) -f CMakeFiles/GenericDictionary.dir/build.make CMakeFiles/GenericDictionary.dir/Menu.cpp.o.provides.build
.PHONY : CMakeFiles/GenericDictionary.dir/Menu.cpp.o.provides

CMakeFiles/GenericDictionary.dir/Menu.cpp.o.provides.build: CMakeFiles/GenericDictionary.dir/Menu.cpp.o


# Object files for target GenericDictionary
GenericDictionary_OBJECTS = \
"CMakeFiles/GenericDictionary.dir/main.cpp.o" \
"CMakeFiles/GenericDictionary.dir/Menu.cpp.o"

# External object files for target GenericDictionary
GenericDictionary_EXTERNAL_OBJECTS =

GenericDictionary: CMakeFiles/GenericDictionary.dir/main.cpp.o
GenericDictionary: CMakeFiles/GenericDictionary.dir/Menu.cpp.o
GenericDictionary: CMakeFiles/GenericDictionary.dir/build.make
GenericDictionary: CMakeFiles/GenericDictionary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable GenericDictionary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GenericDictionary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GenericDictionary.dir/build: GenericDictionary

.PHONY : CMakeFiles/GenericDictionary.dir/build

CMakeFiles/GenericDictionary.dir/requires: CMakeFiles/GenericDictionary.dir/main.cpp.o.requires
CMakeFiles/GenericDictionary.dir/requires: CMakeFiles/GenericDictionary.dir/Menu.cpp.o.requires

.PHONY : CMakeFiles/GenericDictionary.dir/requires

CMakeFiles/GenericDictionary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GenericDictionary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GenericDictionary.dir/clean

CMakeFiles/GenericDictionary.dir/depend:
	cd /Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kidma/CLionProjects/CS1440/HW6-Generics /Users/kidma/CLionProjects/CS1440/HW6-Generics /Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug /Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug /Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug/CMakeFiles/GenericDictionary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GenericDictionary.dir/depend

