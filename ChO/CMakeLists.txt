add_library(ChO SHARED
  BitSetIntro.cc
)

target_include_directories(ChO INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(ChO PRIVATE compiler_flags)
