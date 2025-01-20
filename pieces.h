#pragma once

#include <cstdint>
#include <stdexcept>

namespace Chess {
enum class Piece_types {
  pawn,
  knight,
  bishop,
  rook,
  queen,
  king,
  none,
};

enum class Color_types {
  black,
  white,
};

struct Piece {
  Piece_types piece;
  Color_types color;
};

inline constexpr std::uint16_t valueOfPiece(const Piece& p) {
  switch (p.piece) {
    case Piece_types::pawn:
      return 1;
    case Piece_types::knight:
      return 3;
    case Piece_types::bishop:
      return 3;
    case Piece_types::rook:
      return 5;
    case Piece_types::queen:
      return 9;
    case Piece_types::king:
      return UINT16_MAX;
    default:
      throw std::invalid_argument("Not a chess pieces\n");
  }
}
}  // namespace Chess