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
  GlobalConstantsExample.cc
)

add_subdirectory(G_IntVariables)

target_include_directories(Ch7 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch7
  PRIVATE G_IntVariables
  PRIVATE compiler_flags
)
