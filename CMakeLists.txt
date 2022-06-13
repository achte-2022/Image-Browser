cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)

project(image_browser)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/install)

include_directories(include)

add_subdirectory(src)

target_link_libraries(create_image_browser image_browser)


install(TARGETS html_writer)
install(TARGETS image_browser)
install(DIRECTORY include DESTINATION ${CMAKE_INSTALL_PREFIX})
install(TARGETS create_image_browser DESTINATION ${PROJECT_SOURCE_DIR}/bin)