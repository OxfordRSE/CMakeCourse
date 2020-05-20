//
// This file is part of the Oxford RSE CMake Course
// (https://github.com/OxfordRSE/CMakeCourse) which is released under the MIT
// license. See accompanying LICENSE for copyright notice and full details.
//


// This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <limits>
#include <type_traits>

#include "Exception.hpp"
#include "MyLibrary.hpp"

using namespace cpp_template;

// This tests the output of the `get_nth_prime` function
TEST_CASE("correct primes are returned", "[primes]") {
  CHECK(get_nth_prime(0) == 2);
  CHECK(get_nth_prime(1) == 3);
  CHECK(get_nth_prime(2) == 5);
  CHECK(get_nth_prime(854) == 6619);
}

// This tests the correct out_of_range exceptions are generated
TEST_CASE("correct out of range exceptions", "[primes]") {
  CHECK_THROWS_AS(get_nth_prime(-1), Exception);
  CHECK_THROWS_AS(get_nth_prime(std::numeric_limits<int>::max()), Exception);
}
