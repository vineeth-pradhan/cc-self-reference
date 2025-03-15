add_library(G_IntVariables SHARED
  iphysics.cc
  ichemistry.cc
  imath.cc
)

target_include_directories(G_IntVariables INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(G_IntVariables PRIVATE compiler_flags)
