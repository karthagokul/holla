project(holla)
cmake_minimum_required(VERSION 2.8)
INCLUDE_DIRECTORIES(include)

aux_source_directory(src SRC_LIST)
add_library(${PROJECT_NAME} ${SRC_LIST} )
add_library(holla::client ALIAS ${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME}  pthread)

FILE(GLOB_RECURSE HeaderFiles "../../*.h")
add_custom_target(headers SOURCES ${HeaderFiles})
