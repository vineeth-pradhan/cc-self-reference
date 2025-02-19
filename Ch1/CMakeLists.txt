add_library(Ch1 SHARED
  HelloWorld.cc
  SizeOfInt.cc
  DirectInitialization.cc
)

# This is needed to let the compiler navigate to find the
# includes such as .cc files under Ch1/Ch2 etc..
target_include_directories(Ch1 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch1 PRIVATE compiler_flags)
