# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/coins/guiclassic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/coins/guiclassic/build/release

# Include any dependencies generated for this target.
include CMakeFiles/Mnemonics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Mnemonics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Mnemonics.dir/flags.make

CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.o: CMakeFiles/Mnemonics.dir/flags.make
CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.o: ../../cryptonote/src/mnemonics/electrum-words.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.o -c /root/coins/guiclassic/cryptonote/src/mnemonics/electrum-words.cpp

CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/coins/guiclassic/cryptonote/src/mnemonics/electrum-words.cpp > CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.i

CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/coins/guiclassic/cryptonote/src/mnemonics/electrum-words.cpp -o CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.s

CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.o: CMakeFiles/Mnemonics.dir/flags.make
CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.o: Mnemonics_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.o -c /root/coins/guiclassic/build/release/Mnemonics_autogen/mocs_compilation.cpp

CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/coins/guiclassic/build/release/Mnemonics_autogen/mocs_compilation.cpp > CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.i

CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/coins/guiclassic/build/release/Mnemonics_autogen/mocs_compilation.cpp -o CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.s

# Object files for target Mnemonics
Mnemonics_OBJECTS = \
"CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.o" \
"CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.o"

# External object files for target Mnemonics
Mnemonics_EXTERNAL_OBJECTS =

libMnemonics.a: CMakeFiles/Mnemonics.dir/cryptonote/src/mnemonics/electrum-words.cpp.o
libMnemonics.a: CMakeFiles/Mnemonics.dir/Mnemonics_autogen/mocs_compilation.cpp.o
libMnemonics.a: CMakeFiles/Mnemonics.dir/build.make
libMnemonics.a: CMakeFiles/Mnemonics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libMnemonics.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Mnemonics.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Mnemonics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Mnemonics.dir/build: libMnemonics.a

.PHONY : CMakeFiles/Mnemonics.dir/build

CMakeFiles/Mnemonics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Mnemonics.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Mnemonics.dir/clean

CMakeFiles/Mnemonics.dir/depend:
	cd /root/coins/guiclassic/build/release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/coins/guiclassic /root/coins/guiclassic /root/coins/guiclassic/build/release /root/coins/guiclassic/build/release /root/coins/guiclassic/build/release/CMakeFiles/Mnemonics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Mnemonics.dir/depend
