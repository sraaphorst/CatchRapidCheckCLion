#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <rapidcheck.h>

#include <vector>
#include <algorithm>

TEST_CASE("Vector reversal") {
    rc::check("double reversal",
              [](const std::vector<int> &l0) {
                  auto l1 = l0;
                  std::reverse(begin(l1), end(l1));
                  std::reverse(begin(l1), end(l1));
                  REQUIRE(l0 == l1);
              });
}