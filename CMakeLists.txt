cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)

project(image_browser)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/install)

include_directories(include)

add_subdirectory(src)

target_link_libraries(image_browser html_writer)

install(TARGETS image_browser)

install(DIRECTORY include DESTINATION ${CMAKE_INSTALL_PREFIX})