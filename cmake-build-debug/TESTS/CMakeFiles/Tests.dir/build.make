# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\danil\CLionProjects\lab4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\danil\CLionProjects\lab4\cmake-build-debug

# Include any dependencies generated for this target.
include TESTS/CMakeFiles/Tests.dir/depend.make
# Include the progress variables for this target.
include TESTS/CMakeFiles/Tests.dir/progress.make

# Include the compile flags for this target's objects.
include TESTS/CMakeFiles/Tests.dir/flags.make

TESTS/CMakeFiles/Tests.dir/ArraySequence.cpp.obj: TESTS/CMakeFiles/Tests.dir/flags.make
TESTS/CMakeFiles/Tests.dir/ArraySequence.cpp.obj: TESTS/CMakeFiles/Tests.dir/includes_CXX.rsp
TESTS/CMakeFiles/Tests.dir/ArraySequence.cpp.obj: ../TESTS/ArraySequence.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danil\CLionProjects\lab4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object TESTS/CMakeFiles/Tests.dir/ArraySequence.cpp.obj"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tests.dir\ArraySequence.cpp.obj -c C:\Users\danil\CLionProjects\lab4\TESTS\ArraySequence.cpp

TESTS/CMakeFiles/Tests.dir/ArraySequence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tests.dir/ArraySequence.cpp.i"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danil\CLionProjects\lab4\TESTS\ArraySequence.cpp > CMakeFiles\Tests.dir\ArraySequence.cpp.i

TESTS/CMakeFiles/Tests.dir/ArraySequence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tests.dir/ArraySequence.cpp.s"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danil\CLionProjects\lab4\TESTS\ArraySequence.cpp -o CMakeFiles\Tests.dir\ArraySequence.cpp.s

TESTS/CMakeFiles/Tests.dir/DynamicArray.cpp.obj: TESTS/CMakeFiles/Tests.dir/flags.make
TESTS/CMakeFiles/Tests.dir/DynamicArray.cpp.obj: TESTS/CMakeFiles/Tests.dir/includes_CXX.rsp
TESTS/CMakeFiles/Tests.dir/DynamicArray.cpp.obj: ../TESTS/DynamicArray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danil\CLionProjects\lab4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object TESTS/CMakeFiles/Tests.dir/DynamicArray.cpp.obj"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tests.dir\DynamicArray.cpp.obj -c C:\Users\danil\CLionProjects\lab4\TESTS\DynamicArray.cpp

TESTS/CMakeFiles/Tests.dir/DynamicArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tests.dir/DynamicArray.cpp.i"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danil\CLionProjects\lab4\TESTS\DynamicArray.cpp > CMakeFiles\Tests.dir\DynamicArray.cpp.i

TESTS/CMakeFiles/Tests.dir/DynamicArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tests.dir/DynamicArray.cpp.s"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danil\CLionProjects\lab4\TESTS\DynamicArray.cpp -o CMakeFiles\Tests.dir\DynamicArray.cpp.s

TESTS/CMakeFiles/Tests.dir/LinkedList.cpp.obj: TESTS/CMakeFiles/Tests.dir/flags.make
TESTS/CMakeFiles/Tests.dir/LinkedList.cpp.obj: TESTS/CMakeFiles/Tests.dir/includes_CXX.rsp
TESTS/CMakeFiles/Tests.dir/LinkedList.cpp.obj: ../TESTS/LinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danil\CLionProjects\lab4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object TESTS/CMakeFiles/Tests.dir/LinkedList.cpp.obj"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tests.dir\LinkedList.cpp.obj -c C:\Users\danil\CLionProjects\lab4\TESTS\LinkedList.cpp

TESTS/CMakeFiles/Tests.dir/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tests.dir/LinkedList.cpp.i"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danil\CLionProjects\lab4\TESTS\LinkedList.cpp > CMakeFiles\Tests.dir\LinkedList.cpp.i

TESTS/CMakeFiles/Tests.dir/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tests.dir/LinkedList.cpp.s"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danil\CLionProjects\lab4\TESTS\LinkedList.cpp -o CMakeFiles\Tests.dir\LinkedList.cpp.s

TESTS/CMakeFiles/Tests.dir/ListSequence.cpp.obj: TESTS/CMakeFiles/Tests.dir/flags.make
TESTS/CMakeFiles/Tests.dir/ListSequence.cpp.obj: TESTS/CMakeFiles/Tests.dir/includes_CXX.rsp
TESTS/CMakeFiles/Tests.dir/ListSequence.cpp.obj: ../TESTS/ListSequence.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danil\CLionProjects\lab4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object TESTS/CMakeFiles/Tests.dir/ListSequence.cpp.obj"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tests.dir\ListSequence.cpp.obj -c C:\Users\danil\CLionProjects\lab4\TESTS\ListSequence.cpp

TESTS/CMakeFiles/Tests.dir/ListSequence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tests.dir/ListSequence.cpp.i"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danil\CLionProjects\lab4\TESTS\ListSequence.cpp > CMakeFiles\Tests.dir\ListSequence.cpp.i

TESTS/CMakeFiles/Tests.dir/ListSequence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tests.dir/ListSequence.cpp.s"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\danil\CLionProjects\lab4\TESTS\ListSequence.cpp -o CMakeFiles\Tests.dir\ListSequence.cpp.s

# Object files for target Tests
Tests_OBJECTS = \
"CMakeFiles/Tests.dir/ArraySequence.cpp.obj" \
"CMakeFiles/Tests.dir/DynamicArray.cpp.obj" \
"CMakeFiles/Tests.dir/LinkedList.cpp.obj" \
"CMakeFiles/Tests.dir/ListSequence.cpp.obj"

# External object files for target Tests
Tests_EXTERNAL_OBJECTS =

TESTS/Tests.exe: TESTS/CMakeFiles/Tests.dir/ArraySequence.cpp.obj
TESTS/Tests.exe: TESTS/CMakeFiles/Tests.dir/DynamicArray.cpp.obj
TESTS/Tests.exe: TESTS/CMakeFiles/Tests.dir/LinkedList.cpp.obj
TESTS/Tests.exe: TESTS/CMakeFiles/Tests.dir/ListSequence.cpp.obj
TESTS/Tests.exe: TESTS/CMakeFiles/Tests.dir/build.make
TESTS/Tests.exe: lib/libgtestd.a
TESTS/Tests.exe: lib/libgtest_maind.a
TESTS/Tests.exe: lib/libgtestd.a
TESTS/Tests.exe: TESTS/CMakeFiles/Tests.dir/linklibs.rsp
TESTS/Tests.exe: TESTS/CMakeFiles/Tests.dir/objects1.rsp
TESTS/Tests.exe: TESTS/CMakeFiles/Tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\danil\CLionProjects\lab4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Tests.exe"
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Tests.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
TESTS/CMakeFiles/Tests.dir/build: TESTS/Tests.exe
.PHONY : TESTS/CMakeFiles/Tests.dir/build

TESTS/CMakeFiles/Tests.dir/clean:
	cd /d C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS && $(CMAKE_COMMAND) -P CMakeFiles\Tests.dir\cmake_clean.cmake
.PHONY : TESTS/CMakeFiles/Tests.dir/clean

TESTS/CMakeFiles/Tests.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\danil\CLionProjects\lab4 C:\Users\danil\CLionProjects\lab4\TESTS C:\Users\danil\CLionProjects\lab4\cmake-build-debug C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS C:\Users\danil\CLionProjects\lab4\cmake-build-debug\TESTS\CMakeFiles\Tests.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : TESTS/CMakeFiles/Tests.dir/depend

