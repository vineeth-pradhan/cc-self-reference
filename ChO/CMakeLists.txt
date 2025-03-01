add_library(ChO SHARED
  BitMask.cc
  BitSetIntro.cc
  BitwiseOperators.cc
  DecimalToBinary.cc
  ExtractRGBValues.cc
  FlipTheBit.cc
  ResettingABit.cc
  SettingABit.cc
)

target_include_directories(ChO INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(ChO PRIVATE compiler_flags)
