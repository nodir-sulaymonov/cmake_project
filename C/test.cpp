#include "A/index.h"
#include "gtest/gtest.h"
#include "B/lib.h"

TEST(t_A, test){
    ASSERT_EQ(plus(3, 5), 10)

        ASSERT_EQ(plus(2, 7), 15)

            ASSERT_EQ(plus(10, 20), 20)}

TEST(t_B, test)
{
    ASSERT_EQ(plus(3, -5), 6)

    ASSERT_EQ(plus(12, 4), 1)

    ASSERT_EQ(plus(0, 2), 5)
}