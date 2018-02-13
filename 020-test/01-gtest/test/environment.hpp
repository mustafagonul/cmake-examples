#pragma once

#include "gtest/gtest.h"
#include <memory>
#include <random>


class Environment final : public ::testing::Environment {
public:
  Environment() = default;
  virtual ~Environment() = default;

  virtual void SetUp();
  virtual void TearDown();

  int get() const;
  
private:
  using device_t = std::random_device;
  using device_ptr_t = std::shared_ptr<device_t>;
  using engine_t = std::mt19937;
  using engine_ptr_t = std::shared_ptr<engine_t>;
  using distribution_t = std::uniform_int_distribution<>;
  using distribution_ptr_t = std::shared_ptr<distribution_t>;
  
private:
  device_ptr_t device;
  engine_ptr_t engine;
  distribution_ptr_t distribution;
};


extern Environment* g_environment;
