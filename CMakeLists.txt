cmake_minimum_required(VERSION 3.22)

project(example LANGUAGES C CXX)


#####################################################################################################################################
# Example Program icon downloaded from:
#
# <a href="https://www.flaticon.com/free-icons/example" title="example icons">Example icons created by Freepik - Flaticon</a>
#
#####################################################################################################################################


# Use the standard C++17  language and try to avoid GNU extensions
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


find_package(PkgConfig REQUIRED)

pkg_check_modules(lib_gtk REQUIRED IMPORTED_TARGET gtk4 cairo)
pkg_check_modules(lib_glib REQUIRED IMPORTED_TARGET glib-2.0 gio-unix-2.0 gio-2.0)
pkg_check_modules(lib_webkit REQUIRED IMPORTED_TARGET webkit2gtk-5.0)

add_executable(FooBar "")
target_link_libraries(FooBar PRIVATE PkgConfig::lib_glib)
target_link_libraries(FooBar PRIVATE PkgConfig::lib_gtk)
target_link_libraries(FooBar PRIVATE PkgConfig::lib_webkit)
install(TARGETS FooBar)

add_subdirectory(src)

install(DIRECTORY "share/" DESTINATION "/app/share")
