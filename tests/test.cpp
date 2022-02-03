#include "../header/rectangle.hpp"
#include "../src/rectangle.cpp"
#include "gtest/gtest.h"

TEST(Constructor1, AreaTest) {
	Rectangle tmp = Rectangle(1, 2);
	EXPECT_EQ(2, tmp.area());
}

TEST(Constructor2, AreaTest) {
        Rectangle tmp = Rectangle(3, 5);
        EXPECT_EQ(15, tmp.area());
}

TEST(Constructor3, PerimeterTest) {
        Rectangle tmp = Rectangle(3, 2);
        EXPECT_EQ(10, tmp.perimeter());
}

TEST(ConstructorDeathTest, IsValuePositive) {
        Rectangle tmp;
        ASSERT_DEATH(tmp.set_width(-3), "Error: Wrong Number!");
}

TEST(Area1, AreaTest) {
        Rectangle tmp = Rectangle(3, 2);
        EXPECT_EQ(6, tmp.area());
}

TEST(Area2, AreaTest) {
        Rectangle tmp = Rectangle(3, 5);
        EXPECT_EQ(15, tmp.area());
}

TEST(AreaDeathTest, IsValuePositive) {
        Rectangle tmp;
        ASSERT_DEATH(tmp.set_width(-3), "Error: Wrong Number!");
}

TEST(Perimeter1, PerimeterTest) {
        Rectangle tmp = Rectangle(3, 5);
        EXPECT_EQ(16, tmp.perimeter());
}

TEST(Perimeter2, PerimeterTest) {
        Rectangle tmp = Rectangle(1, 2);
        EXPECT_EQ(6, tmp.perimeter());
}

TEST(PerimeterDeathTest, PerimeterTest) {
        Rectangle tmp;
        ASSERT_DEATH(tmp.set_width(-3), "Error: Wrong Number!");
}







int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
