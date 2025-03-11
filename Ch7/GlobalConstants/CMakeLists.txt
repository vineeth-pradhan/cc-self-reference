add_library(GlobalConstants SHARED
  physics.cc
  chemistry.cc
  math.cc
  constants.cc
)

target_include_directories(GlobalConstants INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(GlobalConstants PRIVATE compiler_flags)
