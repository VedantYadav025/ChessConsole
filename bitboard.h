#pragma once
#include <cstdint>
#include <ostream>

#include "chess_constants.h"
#include "pieces.h"

namespace Chess {
class BitBoard {
public:
  BitBoard();
  BitBoard(const std::uint64_t &bitboard);
  ~BitBoard();

  friend std::ostream& operator<<(std::ostream& output, const BitBoard& bitboard);

protected:
  std::uint64_t getBitboard() const;
  void setBitboard(const std::uint64_t &val);

private:
  std::uint64_t bitboard_;
};
} // namespace Chess