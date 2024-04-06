project(HelloWorldSample)

add_executable(HelloWorldSample HelloSample.cpp)
add_subdirectory(HelloWorld)

target_link_libraries(HelloWorldSample
    PRIVATE
        HelloWorld
    )