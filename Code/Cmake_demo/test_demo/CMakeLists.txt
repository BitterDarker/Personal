#include_directories(/home/darker/person/Cmake_demo/inc)
link_directories("${PROJECT_SOURCE_DIR}/uselib")
message("******************${PROJECT_SOURCE_DIR}")
add_executable(test test.c)
target_link_libraries(test wjt_test_sha)

set(EXECUTABLE_OUTPUT_PATH out)
