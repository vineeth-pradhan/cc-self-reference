#!/bin/sh
clear
echo "Removing build directory.....🧹"
# rm -rf build
echo "Building with cmake.....🏗️"
  cmake -Bbuild -S. -DCMAKE_EXPORT_COMPILE_COMMANDS=1
echo "Running make cmd.....💨"
cmake --build build
echo "Done....🔥"
