#include "environment.hpp"


using namespace std;


Environment* g_environment = nullptr;


void Environment::SetUp()
{
  constexpr auto min = 1;
  constexpr auto max = 1000;

  device = std::make_shared<device_t>();
  engine = std::make_shared<engine_t>((*device)());
  distribution = std::make_shared<distribution_t>(min, max);
}

void Environment::TearDown()
{
  device = nullptr;
  engine = nullptr;
  distribution = nullptr;
}

int Environment::get() const
{
  return (*distribution)(*engine);
}
