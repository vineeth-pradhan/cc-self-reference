add_library(Ch1 SHARED HelloWorld.cc)

target_include_directories(Ch1 INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:include>
)

target_link_libraries(Ch1 PUBLIC compiler_flags)
