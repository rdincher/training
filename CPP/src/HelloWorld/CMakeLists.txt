add_library(HelloWorld "")

target_sources(HelloWorld
    PRIVATE
        HelloWorld.cpp
    PUBLIC
        HelloWorld.h
    )

target_include_directories(HelloWorld
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )