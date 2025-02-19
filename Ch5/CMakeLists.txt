add_library(Ch5 SHARED
  GetlineDemo.cc
  NamedConstants.cc
  NumeralSystem.cc
  StringViewCornerCase.cc
  StringViewCornerCase2.cc
  StringViewCornerCase3.cc
  StringViewCornerCase4.cc
  StringViewExample.cc
  StringViewSubstr.cc
)

target_include_directories(Ch5 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch5 PRIVATE compiler_flags)
