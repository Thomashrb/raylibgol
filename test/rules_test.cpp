#include <rules.h>

#include <array>
#include <catch2/catch_test_macros.hpp>

// TODO test neighbors with wrapping

TEST_CASE("test_rules", "[is_alive should be false when all is alive]")
{
  std::array<std::array<bool, rules::BOARD_SIZE>, rules::BOARD_SIZE> board = {};
  for (auto &xs : board)
  {
    for (auto &y : xs)
    {
      y = true;
    }
  }
  REQUIRE(rules::is_alive(board, 2, 2) == false);
}

TEST_CASE("test_rules", "[is_alive should be false when all is dead]")
{
  std::array<std::array<bool, rules::BOARD_SIZE>, rules::BOARD_SIZE> board = {};
  for (auto &xs : board)
  {
    for (auto &y : xs)
    {
      y = false;
    }
  }
  REQUIRE(rules::is_alive(board, 2, 2) == false);
}

TEST_CASE("test_rules", "[is_born should be false when crowded]")
{
  std::array<std::array<bool, rules::BOARD_SIZE>, rules::BOARD_SIZE> board = {};
  REQUIRE(rules::is_born(board, 5, 5) == false);
}

TEST_CASE("test_rules", "[is_born should be false when lonely]")
{
  std::array<std::array<bool, rules::BOARD_SIZE>, rules::BOARD_SIZE> board = {};
  REQUIRE(rules::is_born(board, 5, 5) == false);
}

TEST_CASE("test_rules", "[is_born should be true when perfect conditions]")
{
  std::array<std::array<bool, rules::BOARD_SIZE>, rules::BOARD_SIZE> board = {};
  for (auto &xs : board)
  {
    for (auto &y : xs)
    {
      y = false;
    }
  }
  board[5 + 1][5]     = true;
  board[5 + 1][5 + 1] = true;
  board[5 + 1][5 - 1] = true;
  REQUIRE(rules::is_born(board, 5, 5) == true);
}
