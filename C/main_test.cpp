#include <gtest/gtest.h>
#include <iostream>

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int finish = RUN_ALL_TESTS();
    return finish;
}