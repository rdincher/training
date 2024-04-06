cmake_minimum_required(VERSION 3.14)

set(INTALL_GTEST OFF)
add_subdirectory(googletest)
include_directories(googletest/googletest/include/)
include_directories(../ ../src/ ../src/HelloWorld)

add_executable(HelloWorld_test HelloWorld_test.cpp)

target_link_libraries(HelloWorld_test HelloWorld gtest gmock gtest_main)

include(GoogleTest)
gtest_discover_tests(HelloWorld_test)