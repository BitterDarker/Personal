include_directories(
    #inc
    ${CMAKE_SOURCE_DIR}/inc
)
ADD_EXECUTABLE(wjt_test src/main.c
                        src/print.c)

add_library(wjt_test_sha SHARED src/main.c src/print.c)
set(EXECUTABLE_OUTPUT_PATH Out)
set(LIBRARY_OUTPUT_PATH lib)
