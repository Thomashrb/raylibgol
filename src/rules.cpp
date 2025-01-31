#include "rules.h"

#include <array>
#include <cstddef>

namespace rules
{
using std::array;

// return a value that exists inside if bounds
// if value is outside of bounds wrap it to the other side
size_t wrap(size_t val, size_t bounds = BOARD_SIZE)
{
  if (val < 0) return bounds;
  if (val > bounds) return 0;
  return val;
}

array<array<size_t, 2>, 8> neighbors(const array<array<bool, BOARD_SIZE>, BOARD_SIZE> board, size_t x, size_t y)
{
  auto wx = wrap(x);
  auto wy = wrap(y);
  // clang-format off
  return {array{wx+1, wy   },
          array{wx-1, wy   },
          array{wx  , wy +1},
          array{wx-1, wy +1},
          array{wx+1, wy +1},
          array{wx  , wy -1},
          array{wx-1, wy -1},
          array{wx+1, wy -1}};
  // clang-format on
}

bool is_alive(const array<array<bool, BOARD_SIZE>, BOARD_SIZE> board, size_t x, size_t y)
{
  auto ns          = neighbors(board, x, y);
  auto alive_count = 0;
  for (auto n : ns)
  {
    auto x = n[0];
    auto y = n[1];
    if (board[x][y]) alive_count += 1;
  }
  return alive_count == 2 || alive_count == 3;
}

bool is_born(const array<array<bool, BOARD_SIZE>, BOARD_SIZE> board, size_t x, size_t y)
{
  auto ns          = neighbors(board, x, y);
  auto alive_count = 0;
  for (auto n : ns)
  {
    auto x = n[0];
    auto y = n[1];
    if (board[x][y]) alive_count += 1;
  }
  return alive_count == 3;
}
}  // namespace rules
