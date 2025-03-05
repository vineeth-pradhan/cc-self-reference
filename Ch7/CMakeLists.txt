add_library(Ch7 SHARED
  foo.cc
  goo.cc
  NamingCollision.cc
  UsingAliases.cc
  bar_kar.cc
  DefiningVariablesWithLinkage.cc
)

target_include_directories(Ch7 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch7 PRIVATE compiler_flags)
