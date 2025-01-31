#if !defined(RULES_H)
#define RULES_H

#include <array>
#include <cstddef>

namespace rules
{
using std::array;

const size_t BOARD_SIZE = 420;

array<array<size_t, 2>, 8> neighbors(const array<array<bool, BOARD_SIZE>, BOARD_SIZE> board, size_t x, size_t y);
bool                       is_alive(const array<array<bool, BOARD_SIZE>, BOARD_SIZE> board, size_t x, size_t y);
bool                       is_born(const array<array<bool, BOARD_SIZE>, BOARD_SIZE> board, size_t x, size_t y);
}  // namespace rules

#endif
