# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vagrant/conference

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vagrant/conference/build

# Include any dependencies generated for this target.
include src/CMakeFiles/conference.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/conference.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/conference.dir/flags.make

src/CMakeFiles/conference.dir/Talk.cpp.o: src/CMakeFiles/conference.dir/flags.make
src/CMakeFiles/conference.dir/Talk.cpp.o: ../src/Talk.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/vagrant/conference/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/conference.dir/Talk.cpp.o"
	cd /home/vagrant/conference/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/conference.dir/Talk.cpp.o -c /home/vagrant/conference/src/Talk.cpp

src/CMakeFiles/conference.dir/Talk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conference.dir/Talk.cpp.i"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/vagrant/conference/src/Talk.cpp > CMakeFiles/conference.dir/Talk.cpp.i

src/CMakeFiles/conference.dir/Talk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conference.dir/Talk.cpp.s"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/vagrant/conference/src/Talk.cpp -o CMakeFiles/conference.dir/Talk.cpp.s

src/CMakeFiles/conference.dir/Talk.cpp.o.requires:
.PHONY : src/CMakeFiles/conference.dir/Talk.cpp.o.requires

src/CMakeFiles/conference.dir/Talk.cpp.o.provides: src/CMakeFiles/conference.dir/Talk.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/conference.dir/build.make src/CMakeFiles/conference.dir/Talk.cpp.o.provides.build
.PHONY : src/CMakeFiles/conference.dir/Talk.cpp.o.provides

src/CMakeFiles/conference.dir/Talk.cpp.o.provides.build: src/CMakeFiles/conference.dir/Talk.cpp.o

src/CMakeFiles/conference.dir/Util.cpp.o: src/CMakeFiles/conference.dir/flags.make
src/CMakeFiles/conference.dir/Util.cpp.o: ../src/Util.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/vagrant/conference/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/conference.dir/Util.cpp.o"
	cd /home/vagrant/conference/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/conference.dir/Util.cpp.o -c /home/vagrant/conference/src/Util.cpp

src/CMakeFiles/conference.dir/Util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conference.dir/Util.cpp.i"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/vagrant/conference/src/Util.cpp > CMakeFiles/conference.dir/Util.cpp.i

src/CMakeFiles/conference.dir/Util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conference.dir/Util.cpp.s"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/vagrant/conference/src/Util.cpp -o CMakeFiles/conference.dir/Util.cpp.s

src/CMakeFiles/conference.dir/Util.cpp.o.requires:
.PHONY : src/CMakeFiles/conference.dir/Util.cpp.o.requires

src/CMakeFiles/conference.dir/Util.cpp.o.provides: src/CMakeFiles/conference.dir/Util.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/conference.dir/build.make src/CMakeFiles/conference.dir/Util.cpp.o.provides.build
.PHONY : src/CMakeFiles/conference.dir/Util.cpp.o.provides

src/CMakeFiles/conference.dir/Util.cpp.o.provides.build: src/CMakeFiles/conference.dir/Util.cpp.o

src/CMakeFiles/conference.dir/ConfSchedular.cpp.o: src/CMakeFiles/conference.dir/flags.make
src/CMakeFiles/conference.dir/ConfSchedular.cpp.o: ../src/ConfSchedular.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/vagrant/conference/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/conference.dir/ConfSchedular.cpp.o"
	cd /home/vagrant/conference/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/conference.dir/ConfSchedular.cpp.o -c /home/vagrant/conference/src/ConfSchedular.cpp

src/CMakeFiles/conference.dir/ConfSchedular.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conference.dir/ConfSchedular.cpp.i"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/vagrant/conference/src/ConfSchedular.cpp > CMakeFiles/conference.dir/ConfSchedular.cpp.i

src/CMakeFiles/conference.dir/ConfSchedular.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conference.dir/ConfSchedular.cpp.s"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/vagrant/conference/src/ConfSchedular.cpp -o CMakeFiles/conference.dir/ConfSchedular.cpp.s

src/CMakeFiles/conference.dir/ConfSchedular.cpp.o.requires:
.PHONY : src/CMakeFiles/conference.dir/ConfSchedular.cpp.o.requires

src/CMakeFiles/conference.dir/ConfSchedular.cpp.o.provides: src/CMakeFiles/conference.dir/ConfSchedular.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/conference.dir/build.make src/CMakeFiles/conference.dir/ConfSchedular.cpp.o.provides.build
.PHONY : src/CMakeFiles/conference.dir/ConfSchedular.cpp.o.provides

src/CMakeFiles/conference.dir/ConfSchedular.cpp.o.provides.build: src/CMakeFiles/conference.dir/ConfSchedular.cpp.o

src/CMakeFiles/conference.dir/Track.cpp.o: src/CMakeFiles/conference.dir/flags.make
src/CMakeFiles/conference.dir/Track.cpp.o: ../src/Track.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/vagrant/conference/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/conference.dir/Track.cpp.o"
	cd /home/vagrant/conference/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/conference.dir/Track.cpp.o -c /home/vagrant/conference/src/Track.cpp

src/CMakeFiles/conference.dir/Track.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conference.dir/Track.cpp.i"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/vagrant/conference/src/Track.cpp > CMakeFiles/conference.dir/Track.cpp.i

src/CMakeFiles/conference.dir/Track.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conference.dir/Track.cpp.s"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/vagrant/conference/src/Track.cpp -o CMakeFiles/conference.dir/Track.cpp.s

src/CMakeFiles/conference.dir/Track.cpp.o.requires:
.PHONY : src/CMakeFiles/conference.dir/Track.cpp.o.requires

src/CMakeFiles/conference.dir/Track.cpp.o.provides: src/CMakeFiles/conference.dir/Track.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/conference.dir/build.make src/CMakeFiles/conference.dir/Track.cpp.o.provides.build
.PHONY : src/CMakeFiles/conference.dir/Track.cpp.o.provides

src/CMakeFiles/conference.dir/Track.cpp.o.provides.build: src/CMakeFiles/conference.dir/Track.cpp.o

src/CMakeFiles/conference.dir/main.cpp.o: src/CMakeFiles/conference.dir/flags.make
src/CMakeFiles/conference.dir/main.cpp.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/vagrant/conference/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/conference.dir/main.cpp.o"
	cd /home/vagrant/conference/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/conference.dir/main.cpp.o -c /home/vagrant/conference/src/main.cpp

src/CMakeFiles/conference.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conference.dir/main.cpp.i"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/vagrant/conference/src/main.cpp > CMakeFiles/conference.dir/main.cpp.i

src/CMakeFiles/conference.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conference.dir/main.cpp.s"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/vagrant/conference/src/main.cpp -o CMakeFiles/conference.dir/main.cpp.s

src/CMakeFiles/conference.dir/main.cpp.o.requires:
.PHONY : src/CMakeFiles/conference.dir/main.cpp.o.requires

src/CMakeFiles/conference.dir/main.cpp.o.provides: src/CMakeFiles/conference.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/conference.dir/build.make src/CMakeFiles/conference.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/conference.dir/main.cpp.o.provides

src/CMakeFiles/conference.dir/main.cpp.o.provides.build: src/CMakeFiles/conference.dir/main.cpp.o

src/CMakeFiles/conference.dir/Session.cpp.o: src/CMakeFiles/conference.dir/flags.make
src/CMakeFiles/conference.dir/Session.cpp.o: ../src/Session.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/vagrant/conference/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/conference.dir/Session.cpp.o"
	cd /home/vagrant/conference/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/conference.dir/Session.cpp.o -c /home/vagrant/conference/src/Session.cpp

src/CMakeFiles/conference.dir/Session.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conference.dir/Session.cpp.i"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/vagrant/conference/src/Session.cpp > CMakeFiles/conference.dir/Session.cpp.i

src/CMakeFiles/conference.dir/Session.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conference.dir/Session.cpp.s"
	cd /home/vagrant/conference/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/vagrant/conference/src/Session.cpp -o CMakeFiles/conference.dir/Session.cpp.s

src/CMakeFiles/conference.dir/Session.cpp.o.requires:
.PHONY : src/CMakeFiles/conference.dir/Session.cpp.o.requires

src/CMakeFiles/conference.dir/Session.cpp.o.provides: src/CMakeFiles/conference.dir/Session.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/conference.dir/build.make src/CMakeFiles/conference.dir/Session.cpp.o.provides.build
.PHONY : src/CMakeFiles/conference.dir/Session.cpp.o.provides

src/CMakeFiles/conference.dir/Session.cpp.o.provides.build: src/CMakeFiles/conference.dir/Session.cpp.o

# Object files for target conference
conference_OBJECTS = \
"CMakeFiles/conference.dir/Talk.cpp.o" \
"CMakeFiles/conference.dir/Util.cpp.o" \
"CMakeFiles/conference.dir/ConfSchedular.cpp.o" \
"CMakeFiles/conference.dir/Track.cpp.o" \
"CMakeFiles/conference.dir/main.cpp.o" \
"CMakeFiles/conference.dir/Session.cpp.o"

# External object files for target conference
conference_EXTERNAL_OBJECTS =

../bin/conference: src/CMakeFiles/conference.dir/Talk.cpp.o
../bin/conference: src/CMakeFiles/conference.dir/Util.cpp.o
../bin/conference: src/CMakeFiles/conference.dir/ConfSchedular.cpp.o
../bin/conference: src/CMakeFiles/conference.dir/Track.cpp.o
../bin/conference: src/CMakeFiles/conference.dir/main.cpp.o
../bin/conference: src/CMakeFiles/conference.dir/Session.cpp.o
../bin/conference: ../3rd/boost/lib/libboost_program_options.so
../bin/conference: ../3rd/boost/lib/libboost_system.so
../bin/conference: ../3rd/boost/lib/libboost_regex.so
../bin/conference: ../3rd/boost/lib/libboost_filesystem.so
../bin/conference: src/CMakeFiles/conference.dir/build.make
../bin/conference: src/CMakeFiles/conference.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/conference"
	cd /home/vagrant/conference/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/conference.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/conference.dir/build: ../bin/conference
.PHONY : src/CMakeFiles/conference.dir/build

src/CMakeFiles/conference.dir/requires: src/CMakeFiles/conference.dir/Talk.cpp.o.requires
src/CMakeFiles/conference.dir/requires: src/CMakeFiles/conference.dir/Util.cpp.o.requires
src/CMakeFiles/conference.dir/requires: src/CMakeFiles/conference.dir/ConfSchedular.cpp.o.requires
src/CMakeFiles/conference.dir/requires: src/CMakeFiles/conference.dir/Track.cpp.o.requires
src/CMakeFiles/conference.dir/requires: src/CMakeFiles/conference.dir/main.cpp.o.requires
src/CMakeFiles/conference.dir/requires: src/CMakeFiles/conference.dir/Session.cpp.o.requires
.PHONY : src/CMakeFiles/conference.dir/requires

src/CMakeFiles/conference.dir/clean:
	cd /home/vagrant/conference/build/src && $(CMAKE_COMMAND) -P CMakeFiles/conference.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/conference.dir/clean

src/CMakeFiles/conference.dir/depend:
	cd /home/vagrant/conference/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vagrant/conference /home/vagrant/conference/src /home/vagrant/conference/build /home/vagrant/conference/build/src /home/vagrant/conference/build/src/CMakeFiles/conference.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/conference.dir/depend

