add_library(Ch8 SHARED
  AtExitFn.cc
  ConstExprIf.cc
  FallThroughSwitch.cc
  GotoStatements.cc
  MersenneTwister.cc
  RandomNumberGenerator.cc
  RandomNumberGeneratorWithChrono.cc
  RandomNumberGeneratorWithRandomDevice.cc
  SeedPRNG.cc
  SimpleIf.cc
  UniformIntDistribution.cc
)

target_include_directories(Ch8 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch8
  PRIVATE compiler_flags
)
