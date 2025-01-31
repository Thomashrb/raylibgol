#include "game.h"

#include "raylib.h"

Game::Game(int width, int height)
{
  width = width;
  height = height;
  running = true;

  const int cellSize = 10;
  int       rows     = height / cellSize;
  int       cols     = width / cellSize;

  grid.resize(rows, std::vector<bool>(cols, false));

  // Initialize with some pattern
  if (rows > 10 && cols > 10)
  {
    // Glider pattern
    grid[5][5] = true;
    grid[6][6] = true;
    grid[7][4] = true;
    grid[7][5] = true;
    grid[7][6] = true;
  }
}

void Game::update()
{
  // Game of Life logic would go here
}

void Game::draw()
{
  const int cellSize = 10;

  for (size_t row = 0; row < grid.size(); ++row)
  {
    for (size_t col = 0; col < grid[row].size(); ++col)
    {
      if (grid[row][col])
      {
        DrawRectangle(col * cellSize, row * cellSize, cellSize - 1, cellSize - 1, BLACK);
      }
    }
  }
}
