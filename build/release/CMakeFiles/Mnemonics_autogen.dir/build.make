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

# Utility rule file for Mnemonics_autogen.

# Include the progress variables for this target.
include CMakeFiles/Mnemonics_autogen.dir/progress.make

CMakeFiles/Mnemonics_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target Mnemonics"
	/usr/local/bin/cmake -E cmake_autogen /root/coins/guiclassic/build/release/CMakeFiles/Mnemonics_autogen.dir/AutogenInfo.cmake Release

Mnemonics_autogen: CMakeFiles/Mnemonics_autogen
Mnemonics_autogen: CMakeFiles/Mnemonics_autogen.dir/build.make

.PHONY : Mnemonics_autogen

# Rule to build all files generated by this target.
CMakeFiles/Mnemonics_autogen.dir/build: Mnemonics_autogen

.PHONY : CMakeFiles/Mnemonics_autogen.dir/build

CMakeFiles/Mnemonics_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Mnemonics_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Mnemonics_autogen.dir/clean

CMakeFiles/Mnemonics_autogen.dir/depend:
	cd /root/coins/guiclassic/build/release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/coins/guiclassic /root/coins/guiclassic /root/coins/guiclassic/build/release /root/coins/guiclassic/build/release /root/coins/guiclassic/build/release/CMakeFiles/Mnemonics_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Mnemonics_autogen.dir/depend

