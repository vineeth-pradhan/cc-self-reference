add_library(Ch7 SHARED
  add.cc
  bar_kar.cc
  DefiningVariablesWithLinkage.cc
  ExternalLinkage.cc
  foo.cc
  goo.cc
  NamingCollision.cc
  UsingAliases.cc
)

target_include_directories(Ch7 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch7 PRIVATE compiler_flags)
