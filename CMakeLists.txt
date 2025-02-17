# make -C build
# ./build/ExecutableFile

cmake_minimum_required(VERSION 3.15)
project(CCReference VERSION 1.0)
add_executable(CCReferenceIndex CCReferenceIndex.cc)

add_library(compiler_flags INTERFACE)
target_compile_features(compiler_flags INTERFACE cxx_std_23)
target_link_libraries(CCReferenceIndex PUBLIC compiler_flags)
target_include_directories(CCReferenceIndex PUBLIC "${PROJECT_BINARY_DIR}/headers")
