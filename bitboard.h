#pragma once
#include <cstdint>
#include <ostream>

#include "chess_constants.h"
#include "pieces.h"

namespace Chess {
class BitBoard {
public:
  BitBoard();
  BitBoard(const std::uint64_t &bitboard, const Piece &p);
  ~BitBoard();

  // Getters and Setters (Mostly, setters will not be used)
  constexpr std::uint64_t getBitBoard() const;
  constexpr Piece getPiece() const;
  constexpr void setBitboard();
  constexpr void setPiece();

  constexpr void setPieceOnSquare(const Square &sq);
  constexpr void clear();
  friend std::ostream &operator<<(std::ostream &output,
                                  const BitBoard &bitboard);

private:
  std::uint64_t bitboard_;
  Piece piece_;
};
} // namespace Chess