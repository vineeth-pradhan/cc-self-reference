add_library(Ch2 SHARED
  AddingHeaderFiles.cc AddingHeaderFiles_add.cc
  CallingHeader.cc Vineeth.h
  ConditionalCompilation.cc
  ForwardDeclaration.cc
  FunctionDefinition.cc
  InfinityDemo.cc
  ScopeOfDefines.cc
)

target_include_directories(Ch2 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ch2 PRIVATE compiler_flags)
