// HelloWorld_test.cpp
#include "gtest/gtest.h"
#include "src/HelloWorld/HelloWorld.h"

TEST(BasicTest, PrintHelloWorld) {
    std::string message = get_hello_message();

    EXPECT_EQ(message, "Hello, World!");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}