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
include CMakeFiles/qrencode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qrencode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qrencode.dir/flags.make

CMakeFiles/qrencode.dir/libqrencode/bitstream.c.o: CMakeFiles/qrencode.dir/flags.make
CMakeFiles/qrencode.dir/libqrencode/bitstream.c.o: ../../libqrencode/bitstream.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/qrencode.dir/libqrencode/bitstream.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/qrencode.dir/libqrencode/bitstream.c.o   -c /root/coins/guiclassic/libqrencode/bitstream.c

CMakeFiles/qrencode.dir/libqrencode/bitstream.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/qrencode.dir/libqrencode/bitstream.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/coins/guiclassic/libqrencode/bitstream.c > CMakeFiles/qrencode.dir/libqrencode/bitstream.c.i

CMakeFiles/qrencode.dir/libqrencode/bitstream.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/qrencode.dir/libqrencode/bitstream.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/coins/guiclassic/libqrencode/bitstream.c -o CMakeFiles/qrencode.dir/libqrencode/bitstream.c.s

CMakeFiles/qrencode.dir/libqrencode/mask.c.o: CMakeFiles/qrencode.dir/flags.make
CMakeFiles/qrencode.dir/libqrencode/mask.c.o: ../../libqrencode/mask.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/qrencode.dir/libqrencode/mask.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/qrencode.dir/libqrencode/mask.c.o   -c /root/coins/guiclassic/libqrencode/mask.c

CMakeFiles/qrencode.dir/libqrencode/mask.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/qrencode.dir/libqrencode/mask.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/coins/guiclassic/libqrencode/mask.c > CMakeFiles/qrencode.dir/libqrencode/mask.c.i

CMakeFiles/qrencode.dir/libqrencode/mask.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/qrencode.dir/libqrencode/mask.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/coins/guiclassic/libqrencode/mask.c -o CMakeFiles/qrencode.dir/libqrencode/mask.c.s

CMakeFiles/qrencode.dir/libqrencode/mmask.c.o: CMakeFiles/qrencode.dir/flags.make
CMakeFiles/qrencode.dir/libqrencode/mmask.c.o: ../../libqrencode/mmask.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/qrencode.dir/libqrencode/mmask.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/qrencode.dir/libqrencode/mmask.c.o   -c /root/coins/guiclassic/libqrencode/mmask.c

CMakeFiles/qrencode.dir/libqrencode/mmask.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/qrencode.dir/libqrencode/mmask.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/coins/guiclassic/libqrencode/mmask.c > CMakeFiles/qrencode.dir/libqrencode/mmask.c.i

CMakeFiles/qrencode.dir/libqrencode/mmask.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/qrencode.dir/libqrencode/mmask.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/coins/guiclassic/libqrencode/mmask.c -o CMakeFiles/qrencode.dir/libqrencode/mmask.c.s

CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.o: CMakeFiles/qrencode.dir/flags.make
CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.o: ../../libqrencode/mqrspec.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.o   -c /root/coins/guiclassic/libqrencode/mqrspec.c

CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/coins/guiclassic/libqrencode/mqrspec.c > CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.i

CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/coins/guiclassic/libqrencode/mqrspec.c -o CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.s

CMakeFiles/qrencode.dir/libqrencode/qrencode.c.o: CMakeFiles/qrencode.dir/flags.make
CMakeFiles/qrencode.dir/libqrencode/qrencode.c.o: ../../libqrencode/qrencode.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/qrencode.dir/libqrencode/qrencode.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/qrencode.dir/libqrencode/qrencode.c.o   -c /root/coins/guiclassic/libqrencode/qrencode.c

CMakeFiles/qrencode.dir/libqrencode/qrencode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/qrencode.dir/libqrencode/qrencode.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/coins/guiclassic/libqrencode/qrencode.c > CMakeFiles/qrencode.dir/libqrencode/qrencode.c.i

CMakeFiles/qrencode.dir/libqrencode/qrencode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/qrencode.dir/libqrencode/qrencode.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/coins/guiclassic/libqrencode/qrencode.c -o CMakeFiles/qrencode.dir/libqrencode/qrencode.c.s

CMakeFiles/qrencode.dir/libqrencode/qrinput.c.o: CMakeFiles/qrencode.dir/flags.make
CMakeFiles/qrencode.dir/libqrencode/qrinput.c.o: ../../libqrencode/qrinput.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/qrencode.dir/libqrencode/qrinput.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/qrencode.dir/libqrencode/qrinput.c.o   -c /root/coins/guiclassic/libqrencode/qrinput.c

CMakeFiles/qrencode.dir/libqrencode/qrinput.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/qrencode.dir/libqrencode/qrinput.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/coins/guiclassic/libqrencode/qrinput.c > CMakeFiles/qrencode.dir/libqrencode/qrinput.c.i

CMakeFiles/qrencode.dir/libqrencode/qrinput.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/qrencode.dir/libqrencode/qrinput.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/coins/guiclassic/libqrencode/qrinput.c -o CMakeFiles/qrencode.dir/libqrencode/qrinput.c.s

CMakeFiles/qrencode.dir/libqrencode/qrspec.c.o: CMakeFiles/qrencode.dir/flags.make
CMakeFiles/qrencode.dir/libqrencode/qrspec.c.o: ../../libqrencode/qrspec.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/qrencode.dir/libqrencode/qrspec.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/qrencode.dir/libqrencode/qrspec.c.o   -c /root/coins/guiclassic/libqrencode/qrspec.c

CMakeFiles/qrencode.dir/libqrencode/qrspec.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/qrencode.dir/libqrencode/qrspec.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/coins/guiclassic/libqrencode/qrspec.c > CMakeFiles/qrencode.dir/libqrencode/qrspec.c.i

CMakeFiles/qrencode.dir/libqrencode/qrspec.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/qrencode.dir/libqrencode/qrspec.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/coins/guiclassic/libqrencode/qrspec.c -o CMakeFiles/qrencode.dir/libqrencode/qrspec.c.s

CMakeFiles/qrencode.dir/libqrencode/rscode.c.o: CMakeFiles/qrencode.dir/flags.make
CMakeFiles/qrencode.dir/libqrencode/rscode.c.o: ../../libqrencode/rscode.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/qrencode.dir/libqrencode/rscode.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/qrencode.dir/libqrencode/rscode.c.o   -c /root/coins/guiclassic/libqrencode/rscode.c

CMakeFiles/qrencode.dir/libqrencode/rscode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/qrencode.dir/libqrencode/rscode.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/coins/guiclassic/libqrencode/rscode.c > CMakeFiles/qrencode.dir/libqrencode/rscode.c.i

CMakeFiles/qrencode.dir/libqrencode/rscode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/qrencode.dir/libqrencode/rscode.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/coins/guiclassic/libqrencode/rscode.c -o CMakeFiles/qrencode.dir/libqrencode/rscode.c.s

CMakeFiles/qrencode.dir/libqrencode/split.c.o: CMakeFiles/qrencode.dir/flags.make
CMakeFiles/qrencode.dir/libqrencode/split.c.o: ../../libqrencode/split.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/qrencode.dir/libqrencode/split.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/qrencode.dir/libqrencode/split.c.o   -c /root/coins/guiclassic/libqrencode/split.c

CMakeFiles/qrencode.dir/libqrencode/split.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/qrencode.dir/libqrencode/split.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/coins/guiclassic/libqrencode/split.c > CMakeFiles/qrencode.dir/libqrencode/split.c.i

CMakeFiles/qrencode.dir/libqrencode/split.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/qrencode.dir/libqrencode/split.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/coins/guiclassic/libqrencode/split.c -o CMakeFiles/qrencode.dir/libqrencode/split.c.s

# Object files for target qrencode
qrencode_OBJECTS = \
"CMakeFiles/qrencode.dir/libqrencode/bitstream.c.o" \
"CMakeFiles/qrencode.dir/libqrencode/mask.c.o" \
"CMakeFiles/qrencode.dir/libqrencode/mmask.c.o" \
"CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.o" \
"CMakeFiles/qrencode.dir/libqrencode/qrencode.c.o" \
"CMakeFiles/qrencode.dir/libqrencode/qrinput.c.o" \
"CMakeFiles/qrencode.dir/libqrencode/qrspec.c.o" \
"CMakeFiles/qrencode.dir/libqrencode/rscode.c.o" \
"CMakeFiles/qrencode.dir/libqrencode/split.c.o"

# External object files for target qrencode
qrencode_EXTERNAL_OBJECTS =

libqrencode.a: CMakeFiles/qrencode.dir/libqrencode/bitstream.c.o
libqrencode.a: CMakeFiles/qrencode.dir/libqrencode/mask.c.o
libqrencode.a: CMakeFiles/qrencode.dir/libqrencode/mmask.c.o
libqrencode.a: CMakeFiles/qrencode.dir/libqrencode/mqrspec.c.o
libqrencode.a: CMakeFiles/qrencode.dir/libqrencode/qrencode.c.o
libqrencode.a: CMakeFiles/qrencode.dir/libqrencode/qrinput.c.o
libqrencode.a: CMakeFiles/qrencode.dir/libqrencode/qrspec.c.o
libqrencode.a: CMakeFiles/qrencode.dir/libqrencode/rscode.c.o
libqrencode.a: CMakeFiles/qrencode.dir/libqrencode/split.c.o
libqrencode.a: CMakeFiles/qrencode.dir/build.make
libqrencode.a: CMakeFiles/qrencode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/coins/guiclassic/build/release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C static library libqrencode.a"
	$(CMAKE_COMMAND) -P CMakeFiles/qrencode.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qrencode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qrencode.dir/build: libqrencode.a

.PHONY : CMakeFiles/qrencode.dir/build

CMakeFiles/qrencode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qrencode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qrencode.dir/clean

CMakeFiles/qrencode.dir/depend:
	cd /root/coins/guiclassic/build/release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/coins/guiclassic /root/coins/guiclassic /root/coins/guiclassic/build/release /root/coins/guiclassic/build/release /root/coins/guiclassic/build/release/CMakeFiles/qrencode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qrencode.dir/depend

