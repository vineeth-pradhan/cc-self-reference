add_library(G_ExtVariables SHARED
  physics.cc
  chemistry.cc
  math.cc
)

target_include_directories(G_ExtVariables INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(G_ExtVariables PRIVATE compiler_flags)
