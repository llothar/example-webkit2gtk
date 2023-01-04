add_executable(FooBar "code.cpp")

target_link_libraries(FooBar PRIVATE PkgConfig::lib_glib)
target_link_libraries(FooBar PRIVATE PkgConfig::lib_gtk)
target_link_libraries(FooBar PRIVATE PkgConfig::lib_webkit)

install(TARGETS FooBar) 
