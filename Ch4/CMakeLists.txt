add_library(Ch4 SHARED
  CharacterIntro.cc
  CharArray.cc
  FixedWidthIntegers.cc
  InputBooleanValues.cc
  SizeOfTypes.cc
  SizeT.cc
  StaticCasting.cc
)

target_include_directories(Ch4 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch4 PRIVATE compiler_flags)
