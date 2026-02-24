set(Tasks_srcs
    src/odometry.c
    src/default.c)

add_library(Tasks STATIC)
target_sources(Tasks PRIVATE ${Tasks_srcs})
target_include_directories(Tasks PUBLIC inc)

target_link_libraries(Tasks PRIVATE stm32cubemx)