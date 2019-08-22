project(holla-cmd)
cmake_minimum_required(VERSION 2.8)
INCLUDE_DIRECTORIES(../include)

aux_source_directory(src SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} holla::client)
