#include <utils.h>

#include <catch2/catch_test_macros.hpp>

TEST_CASE("test_number") { REQUIRE(utils_number() == 2); }

TEST_CASE("test_string", "[tagname]") { REQUIRE(strcmp(utils_hello(), "hello") == 0); }
