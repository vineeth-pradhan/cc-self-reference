add_library(Ch7 SHARED
  add.cc
  bar_kar.cc
  DefiningVariablesWithLinkage.cc
  ExternalLinkage.cc
  foo.cc
  goo.cc
  NamingCollision.cc
  UsingAliases.cc
  UsingNSForConstants.cc constants.cc
  InlineFunction.cc
  G_IntVariablesExample.cc
  G_ExtVariablesExample.cc
)

add_subdirectory(G_IntVariables)
add_subdirectory(G_ExtVariables)

target_include_directories(Ch7 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch7
  PRIVATE G_IntVariables
  PRIVATE G_ExtVariables
  PRIVATE compiler_flags
)
