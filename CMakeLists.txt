cmake_minimum_required(VERSION 3.16)

project(example LANGUAGES C CXX)


# Use the standard C++17  language and try to avoid GNU extensions
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


find_package(PkgConfig REQUIRED)

pkg_check_modules(PC_CONTRIB_GTK REQUIRED gtk+-3.0 cairo)
pkg_check_modules(PC_CONTRIB_GLIB REQUIRED glib-2.0 gio-unix-2.0 gio-2.0)
pkg_check_modules(PC_CONTRIB_WEBKIT REQUIRED webkit2gtk-4.0)


add_subdirectory(src)
