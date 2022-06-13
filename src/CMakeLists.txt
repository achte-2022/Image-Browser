add_library(html_writer html_writer.cc)
add_library(image_browser image_browser.cc html_writer.cc)
add_executable(create_image_browser main.cc)