cmake_minimum_required(VERSION 3.15)
project(CCReference VERSION 1.0)

add_subdirectory(Ch1)

add_library(compiler_flags INTERFACE)
add_executable(CCReferenceIndex CCReferenceIndex.cc)
target_link_libraries(CCReferenceIndex PUBLIC Ch1 compiler_flags)
target_include_directories(CCReferenceIndex PUBLIC ${PROJECT_BINARY_DIR})
