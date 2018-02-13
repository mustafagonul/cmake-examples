#include <gtest/gtest.h>
#include "environment.hpp"

int main(int argc, char** argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  auto env = new Environment();
  auto tenv = ::testing::AddGlobalTestEnvironment(env);
  g_environment = dynamic_cast<Environment*>(tenv);

  return RUN_ALL_TESTS();
}
