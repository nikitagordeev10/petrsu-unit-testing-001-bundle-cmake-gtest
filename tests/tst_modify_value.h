#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "mathematical_calculator.h"
}

TEST(test1, suite1)
{
    EXPECT_EQ(1, 1);
    /*ASSERT_THAT(0, Eq(0)); */
}

TEST(test2, suite1)
{
    EXPECT_EQ(modify_value(0), 4);
}

TEST(test1, suite2)
{
    EXPECT_EQ(modify_value(-1), 3);
}
