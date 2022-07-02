add_executable(example "code.cpp")

target_link_libraries(example PRIVATE PkgConfig::lib_glib)
target_link_libraries(example PRIVATE PkgConfig::lib_gtk)
target_link_libraries(example PRIVATE PkgConfig::lib_webkit)

install(TARGETS example) 


