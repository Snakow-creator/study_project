file(GLOB_RECURSE sources CONFIGURE_DEPENDS "*.cpp")
add_library(MySorting SHARED ${sources})
target_include_directories(MySorting PUBLIC "${PROJECT_SOURCE_DIR}/include")
set_target_properties(MySorting PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)
