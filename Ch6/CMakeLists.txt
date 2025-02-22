add_library(Ch6 SHARED
  CommaOperator.cc
  ComparingFloatingPoint.cc
  Exponentiation.cc
  ShortCircuitEvaluation.cc
)

target_include_directories(Ch6 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch6 PRIVATE compiler_flags)
