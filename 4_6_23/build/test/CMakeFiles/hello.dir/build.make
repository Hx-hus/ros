# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hx-hus/ros/4_6_23/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hx-hus/ros/4_6_23/build

# Include any dependencies generated for this target.
include test/CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/hello.dir/flags.make

test/CMakeFiles/hello.dir/src/helloworld.cpp.o: test/CMakeFiles/hello.dir/flags.make
test/CMakeFiles/hello.dir/src/helloworld.cpp.o: /home/hx-hus/ros/4_6_23/src/test/src/helloworld.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hx-hus/ros/4_6_23/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/hello.dir/src/helloworld.cpp.o"
	cd /home/hx-hus/ros/4_6_23/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello.dir/src/helloworld.cpp.o -c /home/hx-hus/ros/4_6_23/src/test/src/helloworld.cpp

test/CMakeFiles/hello.dir/src/helloworld.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/src/helloworld.cpp.i"
	cd /home/hx-hus/ros/4_6_23/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hx-hus/ros/4_6_23/src/test/src/helloworld.cpp > CMakeFiles/hello.dir/src/helloworld.cpp.i

test/CMakeFiles/hello.dir/src/helloworld.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/src/helloworld.cpp.s"
	cd /home/hx-hus/ros/4_6_23/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hx-hus/ros/4_6_23/src/test/src/helloworld.cpp -o CMakeFiles/hello.dir/src/helloworld.cpp.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/src/helloworld.cpp.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

/home/hx-hus/ros/4_6_23/devel/lib/test/hello: test/CMakeFiles/hello.dir/src/helloworld.cpp.o
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: test/CMakeFiles/hello.dir/build.make
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /opt/ros/noetic/lib/libroscpp.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /opt/ros/noetic/lib/librosconsole.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /opt/ros/noetic/lib/librostime.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /opt/ros/noetic/lib/libcpp_common.so
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/hx-hus/ros/4_6_23/devel/lib/test/hello: test/CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hx-hus/ros/4_6_23/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/hx-hus/ros/4_6_23/devel/lib/test/hello"
	cd /home/hx-hus/ros/4_6_23/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/hello.dir/build: /home/hx-hus/ros/4_6_23/devel/lib/test/hello

.PHONY : test/CMakeFiles/hello.dir/build

test/CMakeFiles/hello.dir/clean:
	cd /home/hx-hus/ros/4_6_23/build/test && $(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/hello.dir/clean

test/CMakeFiles/hello.dir/depend:
	cd /home/hx-hus/ros/4_6_23/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hx-hus/ros/4_6_23/src /home/hx-hus/ros/4_6_23/src/test /home/hx-hus/ros/4_6_23/build /home/hx-hus/ros/4_6_23/build/test /home/hx-hus/ros/4_6_23/build/test/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/hello.dir/depend

