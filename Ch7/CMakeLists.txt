add_library(Ch7 SHARED
  add.cc
  AutoIncrement.cc
  bar_kar.cc
  DefiningVariablesWithLinkage.cc
  ExternalLinkage.cc
  foo.cc
  G_IntVariablesExample.cc
  G_ExtVariablesExample.cc
  G_InlVariablesExample.cc
  goo.cc
  InlineFunction.cc
  NamingCollision.cc
  UsingAliases.cc
  UsingNSForConstants.cc constants.cc
)

add_subdirectory(G_IntVariables)
add_subdirectory(G_ExtVariables)
add_subdirectory(G_InlVariables)

target_include_directories(Ch7 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch7
  PRIVATE G_IntVariables
  PRIVATE G_ExtVariables
  PRIVATE G_InlVariables
  PRIVATE compiler_flags
)
