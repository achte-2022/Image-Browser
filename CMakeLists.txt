cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)

project(image_browser)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/install)

include_directories(include)

add_subdirectory(src)

target_link_libraries(main html_writer)

install(TARGETS html_writer)

install(DIRECTORY include DESTINATION ${CMAKE_INSTALL_PREFIX})