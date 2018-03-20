#include <catch/catch.hpp>
#include "geometry/point.hpp"
#include "../environment.hpp"

Environment g_environment;

TEST_CASE("point_constructor_1", "[geometry]")
{
  auto x = g_environment.get();

  geometry::point<int> p{x};

  REQUIRE(p.x == x);
  REQUIRE(p.y == 0);
  REQUIRE(p.z == 0);
}

TEST_CASE("point_constructor_2", "[geometry]")
{
  auto x = g_environment.get();
  auto y = g_environment.get();

  geometry::point<int> p{x, y};

  REQUIRE(p.x == x);
  REQUIRE(p.y == y);
  REQUIRE(p.z == 0);
}

TEST_CASE("point_constructor_3", "[geometry]")
{
  auto x = g_environment.get();
  auto y = g_environment.get();
  auto z = g_environment.get();

  geometry::point<int> p{x, y, z};

  REQUIRE(p.x == x);
  REQUIRE(p.y == y);
  REQUIRE(p.z == z);
}

TEST_CASE("point_add", "[geometry]")
{
  auto x1 = g_environment.get();
  auto y1 = g_environment.get();
  auto z1 = g_environment.get();
  auto x2 = g_environment.get();
  auto y2 = g_environment.get();
  auto z2 = g_environment.get();

  geometry::point<int> p1{x1, y1, z1};
  geometry::point<int> p2{x2, y2, z2};

  p1.add(p2);

  REQUIRE(p1.x == x1 + x2);
  REQUIRE(p1.y == y1 + y2);
  REQUIRE(p1.z == z1 + z2);
}

TEST_CASE("point_sub", "[geometry]")
{
  auto x1 = g_environment.get();
  auto y1 = g_environment.get();
  auto z1 = g_environment.get();
  auto x2 = g_environment.get();
  auto y2 = g_environment.get();
  auto z2 = g_environment.get();

  geometry::point<int> p1{x1, y1, z1};
  geometry::point<int> p2{x2, y2, z2};

  p1.sub(p2);

  REQUIRE(p1.x == x1 - x2);
  REQUIRE(p1.y == y1 - y2);
  REQUIRE(p1.z == z1 - z2);
}


