#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "test/catch.hpp"

TEST_CASE("receive and infer sensors data") {
  inferSensorsData();
}
