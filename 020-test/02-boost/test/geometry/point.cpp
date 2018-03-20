#define BOOST_TEST_MODULE library_test
#include <boost/test/unit_test.hpp>

#include "geometry/point.hpp"
#include "../environment.hpp"


Environment g_environment;

BOOST_AUTO_TEST_SUITE(point)

BOOST_AUTO_TEST_CASE(constructor_1)
{
  auto x = g_environment.get();

  geometry::point<int> p{x};

  BOOST_CHECK_EQUAL(p.x, x);
  BOOST_CHECK_EQUAL(p.y, 0);
  BOOST_CHECK_EQUAL(p.z, 0);
}

BOOST_AUTO_TEST_CASE(constructor_2)
{
  auto x = g_environment.get();
  auto y = g_environment.get();

  geometry::point<int> p{x, y};

  BOOST_CHECK_EQUAL(p.x, x);
  BOOST_CHECK_EQUAL(p.y, y);
  BOOST_CHECK_EQUAL(p.z, 0);
}

BOOST_AUTO_TEST_CASE(constructor_3)
{
  auto x = g_environment.get();
  auto y = g_environment.get();
  auto z = g_environment.get();

  geometry::point<int> p{x, y, z};

  BOOST_CHECK_EQUAL(p.x, x);
  BOOST_CHECK_EQUAL(p.y, y);
  BOOST_CHECK_EQUAL(p.z, z);
}

BOOST_AUTO_TEST_CASE(add)
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

  BOOST_CHECK_EQUAL(p1.x, x1 + x2);
  BOOST_CHECK_EQUAL(p1.y, y1 + y2);
  BOOST_CHECK_EQUAL(p1.z, z1 + z2);
}

BOOST_AUTO_TEST_CASE(sub)
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

  BOOST_CHECK_EQUAL(p1.x, x1 - x2);
  BOOST_CHECK_EQUAL(p1.y, y1 - y2);
  BOOST_CHECK_EQUAL(p1.z, z1 - z2);
}


BOOST_AUTO_TEST_SUITE_END()

