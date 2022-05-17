#include <gtest/gtest.h>
#include "exponent.h"

TEST(ExponentTest, Test1) {
    EXPECT_EQ(exp_by_squaring(5, 2), 25);
}

TEST(ExponentTest, Test2) {
    EXPECT_EQ(exp_by_squaring(3, 4), 81);
}

TEST(ExponentTest, Test3) {
    EXPECT_EQ(exp_by_squaring(12, 7), 35831808);
}

TEST(ExponentTest, Test4) {
    EXPECT_EQ(exp_by_squaring(0, 0), 1);
}

TEST(ExponentTest, Test5) {
    EXPECT_EQ(exp_by_squaring(0, 1), 0);
}

TEST(ExponentTest, Test6) {
    EXPECT_EQ(exp_by_squaring(1, 0), 1);
}

TEST(ExponentTest, Test7) {
    EXPECT_EQ(exp_by_squaring(1, 1), 1);
}

TEST(ExponentTest, Test8) {
    EXPECT_EQ(exp_by_squaring(86, 3), 636056);
}