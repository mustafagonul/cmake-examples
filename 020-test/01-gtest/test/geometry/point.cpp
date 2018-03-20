#include <gtest/gtest.h>
#include "geometry/point.hpp"
#include "../environment.hpp"

TEST(library_test, point_constructor_1)
{
  auto x = g_environment->get();

  geometry::point<int> p{x};

  EXPECT_EQ(p.x, x);
  EXPECT_EQ(p.y, 0);
  EXPECT_EQ(p.z, 0);
}

TEST(library_test, point_constructor_2)
{
  auto x = g_environment->get();
  auto y = g_environment->get();

  geometry::point<int> p{x, y};

  EXPECT_EQ(p.x, x);
  EXPECT_EQ(p.y, y);
  EXPECT_EQ(p.z, 0);
}

TEST(library_test, point_constructor_3)
{
  auto x = g_environment->get();
  auto y = g_environment->get();
  auto z = g_environment->get();

  geometry::point<int> p{x, y, z};

  EXPECT_EQ(p.x, x);
  EXPECT_EQ(p.y, y);
  EXPECT_EQ(p.z, z);
}

TEST(library_test, point_add)
{
  auto x1 = g_environment->get();
  auto y1 = g_environment->get();
  auto z1 = g_environment->get();
  auto x2 = g_environment->get();
  auto y2 = g_environment->get();
  auto z2 = g_environment->get();

  geometry::point<int> p1{x1, y1, z1};
  geometry::point<int> p2{x2, y2, z2};

  p1.add(p2);

  EXPECT_EQ(p1.x, x1 + x2);
  EXPECT_EQ(p1.y, y1 + y2);
  EXPECT_EQ(p1.z, z1 + z2);
}

TEST(library_test, point_sub)
{
  auto x1 = g_environment->get();
  auto y1 = g_environment->get();
  auto z1 = g_environment->get();
  auto x2 = g_environment->get();
  auto y2 = g_environment->get();
  auto z2 = g_environment->get();

  geometry::point<int> p1{x1, y1, z1};
  geometry::point<int> p2{x2, y2, z2};

  p1.sub(p2);

  EXPECT_EQ(p1.x, x1 - x2);
  EXPECT_EQ(p1.y, y1 - y2);
  EXPECT_EQ(p1.z, z1 - z2);
}


