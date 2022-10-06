add_executable (test test_display_hello_world.cpp ../src/display_hello_world.cpp)

target_link_libraries(test "criterion")
