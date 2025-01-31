#pragma once

#include <vector>

class Game
{
  public:
  Game(int width, int height);
  void update();
  void draw();
  int  getWidth() const { return width; }
  int  getHeight() const { return height; }
  bool isRunning() const { return running; }

  private:
  int                            width;
  int                            height;
  bool                           running;
  std::vector<std::vector<bool>> grid;
};
