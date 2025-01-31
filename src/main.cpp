#include <iostream>

#include "raylib.h"

#define PROJECT_NAME "gameoflife"

int main(int argc, char **argv)
{
  if (argc != 1)
  {
    std::cout << argv[0] << "takes no arguments.\n";
    return 1;
  }

  InitWindow(800, 450, "raylib [core] example - basic window");

  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText(PROJECT_NAME, 190, 200, 20, LIGHTGRAY);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
