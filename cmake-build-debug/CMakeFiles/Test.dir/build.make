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
include CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test.dir/flags.make

CMakeFiles/Test.dir/Testing/testMain.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/testMain.cpp.o: ../Testing/testMain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test.dir/Testing/testMain.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Testing/testMain.cpp.o -c /Users/kidma/CLionProjects/CS1440/HW6-Generics/Testing/testMain.cpp

CMakeFiles/Test.dir/Testing/testMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/testMain.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kidma/CLionProjects/CS1440/HW6-Generics/Testing/testMain.cpp > CMakeFiles/Test.dir/Testing/testMain.cpp.i

CMakeFiles/Test.dir/Testing/testMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/testMain.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kidma/CLionProjects/CS1440/HW6-Generics/Testing/testMain.cpp -o CMakeFiles/Test.dir/Testing/testMain.cpp.s

CMakeFiles/Test.dir/Testing/testMain.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Testing/testMain.cpp.o.requires

CMakeFiles/Test.dir/Testing/testMain.cpp.o.provides: CMakeFiles/Test.dir/Testing/testMain.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Testing/testMain.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/testMain.cpp.o.provides

CMakeFiles/Test.dir/Testing/testMain.cpp.o.provides.build: CMakeFiles/Test.dir/Testing/testMain.cpp.o


CMakeFiles/Test.dir/Menu.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Menu.cpp.o: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Test.dir/Menu.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Menu.cpp.o -c /Users/kidma/CLionProjects/CS1440/HW6-Generics/Menu.cpp

CMakeFiles/Test.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Menu.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kidma/CLionProjects/CS1440/HW6-Generics/Menu.cpp > CMakeFiles/Test.dir/Menu.cpp.i

CMakeFiles/Test.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Menu.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kidma/CLionProjects/CS1440/HW6-Generics/Menu.cpp -o CMakeFiles/Test.dir/Menu.cpp.s

CMakeFiles/Test.dir/Menu.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Menu.cpp.o.requires

CMakeFiles/Test.dir/Menu.cpp.o.provides: CMakeFiles/Test.dir/Menu.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Menu.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Menu.cpp.o.provides

CMakeFiles/Test.dir/Menu.cpp.o.provides.build: CMakeFiles/Test.dir/Menu.cpp.o


CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o: ../Testing/DictionaryTester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o -c /Users/kidma/CLionProjects/CS1440/HW6-Generics/Testing/DictionaryTester.cpp

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kidma/CLionProjects/CS1440/HW6-Generics/Testing/DictionaryTester.cpp > CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.i

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kidma/CLionProjects/CS1440/HW6-Generics/Testing/DictionaryTester.cpp -o CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.s

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o.requires

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o.provides: CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o.provides

CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o.provides.build: CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o


# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/Testing/testMain.cpp.o" \
"CMakeFiles/Test.dir/Menu.cpp.o" \
"CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

Test: CMakeFiles/Test.dir/Testing/testMain.cpp.o
Test: CMakeFiles/Test.dir/Menu.cpp.o
Test: CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o
Test: CMakeFiles/Test.dir/build.make
Test: CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test.dir/build: Test

.PHONY : CMakeFiles/Test.dir/build

CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/testMain.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Menu.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/DictionaryTester.cpp.o.requires

.PHONY : CMakeFiles/Test.dir/requires

CMakeFiles/Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Test.dir/clean

CMakeFiles/Test.dir/depend:
	cd /Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kidma/CLionProjects/CS1440/HW6-Generics /Users/kidma/CLionProjects/CS1440/HW6-Generics /Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug /Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug /Users/kidma/CLionProjects/CS1440/HW6-Generics/cmake-build-debug/CMakeFiles/Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Test.dir/depend

