cmake_minimum_required(VERSION 3.15)
project(CCReference VERSION 1.0)

add_subdirectory(Ch1)
add_subdirectory(Ch2)
add_subdirectory(Ch4)
add_subdirectory(Ch5)
add_subdirectory(Ch6)
add_subdirectory(ChO)

set(BUILD_SHARED_LIBS ON)

add_library(compiler_flags INTERFACE)
target_compile_features(compiler_flags INTERFACE cxx_std_23)

add_executable(CCReferenceIndex CCReferenceIndex.cc)

target_link_libraries(CCReferenceIndex
  PRIVATE Ch1
  PRIVATE Ch2
  PRIVATE Ch4
  PRIVATE Ch5
  PRIVATE Ch6
  PRIVATE ChO
  PUBLIC compiler_flags
)
