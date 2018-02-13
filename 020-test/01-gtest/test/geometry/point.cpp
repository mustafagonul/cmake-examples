#include <gtest/gtest.h>
#include "geometry/point.hpp"
#include "../environment.hpp"

TEST(library_test, constructor_1)
{
  auto x = g_environment->get();

  geometry::point<int> p{x};

  EXPECT_EQ(x, p.x);
  EXPECT_EQ(0, p.y);
  EXPECT_EQ(0, p.z);
}

TEST(library_test, constructor_2)
{
  auto x = g_environment->get();
  auto y = g_environment->get();

  geometry::point<int> p{x, y};

  EXPECT_EQ(x, p.x);
  EXPECT_EQ(y, p.y);
  EXPECT_EQ(0, p.z);
}

