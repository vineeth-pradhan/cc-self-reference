add_library(Ch2 SHARED
  AddingHeaderFiles.cc AddingHeaderFiles_add.cc
  CallingHeader.cc Vineeth.h
)

target_include_directories(Ch2 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch2 PRIVATE compiler_flags)
