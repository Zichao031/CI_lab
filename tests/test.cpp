#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

TEST(constructor, getHeight1) {
    Rectangle r1 = Rectangle(1, 2);
    int res = r1.get_height();
    EXPECT_TRUE(res == 2);
}

TEST(constructor, getHeight2) {
    Rectangle r1 = Rectangle(1, 6);
    int res = r1.get_height();
    EXPECT_TRUE(res == 6);
}

TEST(constructor, getWidth) {
    Rectangle r1 = Rectangle(10, 7);
    int res = r1.get_width();
    EXPECT_TRUE(res == 10);
}

TEST(Area, CanComputeNegative) {
    Rectangle r1 = Rectangle(-5, 1);
    int res = r1.area();
    EXPECT_TRUE(res == 0);
}

TEST(Area, CanComputeZero) {
    Rectangle r1 = Rectangle(0, 1);
    int res = r1.area();
    EXPECT_TRUE(res == 0);
}

TEST(Area, CanComputePositive) {
    Rectangle r1 = Rectangle(9, 1);
    int res = r1.area();
    EXPECT_TRUE(res == 9);
}

TEST(Perimeter, CanComputePositive) {
    Rectangle r1 = Rectangle(2, 4);
    int res = r1.perimeter();
    EXPECT_TRUE(res == 12);
}

TEST(Perimeter, CanComputeZero) {
    Rectangle r1 = Rectangle(0, 4);
    int res = r1.perimeter();
    EXPECT_TRUE(res == 0);
}

TEST(Perimeter, CanComputeNegative) {
    Rectangle r1 = Rectangle(-2, 4);
    int res = r1.perimeter();
    EXPECT_TRUE(res == 0);
}



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}