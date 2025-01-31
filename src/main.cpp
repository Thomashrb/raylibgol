#include "game.h"
#include "raylib.h"

int main()
{
  const int screenWidth  = 800;
  const int screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "Raylib Game of Life");
  SetTargetFPS(60);

  Game game(screenWidth, screenHeight);

  while (!WindowShouldClose())
  {
    game.update();

    BeginDrawing();
    ClearBackground(RAYWHITE);
    game.draw();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
