# make -C build
# ./build/ExecutableFile

cmake_minimum_required(VERSION 3.10)
project(CPPWorkshop VERSION 1.0)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
configure_file(CPPWorkshopConfig.h.in CPPWorkshopConfig.h)
add_executable(MapExample MapExample.cc)
add_executable(CharacterIntro CharacterIntro.cc)
add_executable(CharArray CharArray.cc)
add_executable(ConditionalCompilation ConditionalCompilation.cc)
add_executable(DirectInitialization DirectInitialization.cc)
target_include_directories(DirectInitialization PUBLIC "${PROJECT_BINARY_DIR}")
