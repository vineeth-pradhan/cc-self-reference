add_library(G_ExtVariables SHARED
  ephysics.cc
  echemistry.cc
  emath.cc
  externals.cc
)

target_include_directories(G_ExtVariables INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(G_ExtVariables PRIVATE compiler_flags)
