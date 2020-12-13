add_executable(webview "code.cpp")
set_property(TARGET webview PROPERTY RUNTIME_OUTPUT_NAME example-webkit2gtk)


target_include_directories(webview PUBLIC ${PC_CONTRIB_GTK_INCLUDE_DIRS})
target_link_libraries(webview PUBLIC ${PC_CONTRIB_GTK_LIBRARIES})
target_compile_options(webview PUBLIC ${PC_CONTRIB_GTK_CFLAGS_OTHER})

target_include_directories(webview PUBLIC ${PC_CONTRIB_GLIB_INCLUDE_DIRS})
target_link_libraries(webview PUBLIC ${PC_CONTRIB_GLIB_LIBRARIES})
target_compile_options(webview PUBLIC ${PC_CONTRIB_GLIB_CFLAGS_OTHER})

target_include_directories(webview PUBLIC ${PC_CONTRIB_WEBKIT_INCLUDE_DIRS})
target_link_libraries(webview PUBLIC ${PC_CONTRIB_WEBKIT_LIBRARIES})
target_compile_options(webview PUBLIC ${PC_CONTRIB_WEBKIT_CFLAGS_OTHER})

install(TARGETS webview)
