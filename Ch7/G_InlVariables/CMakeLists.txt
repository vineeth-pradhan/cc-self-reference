add_library(G_InlVariables SHARED
  lphysics.cc
  lchemistry.cc
  lmath.cc
)

target_include_directories(G_InlVariables INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(G_InlVariables PRIVATE compiler_flags)
