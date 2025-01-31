#include <catch2/catch_test_macros.hpp>

#include "game.h"

TEST_CASE("Game initialization", "[game]")
{
  Game game(800, 600);

  SECTION("Game dimensions are set correctly")
  {
    REQUIRE(game.getWidth() == 800);
    REQUIRE(game.getHeight() == 600);
  }

  SECTION("Game starts in running state") { REQUIRE(game.isRunning() == true); }
}

TEST_CASE("Math operations", "[math]")
{
  SECTION("Addition")
  {
    REQUIRE(2 + 2 == 4);
    REQUIRE(5 + 3 == 8);
  }

  SECTION("Multiplication")
  {
    REQUIRE(3 * 4 == 12);
    REQUIRE(7 * 8 == 56);
  }
}
