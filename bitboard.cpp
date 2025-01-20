#include "bitboard.h"

namespace Chess {
BitBoard::BitBoard() {
  this->bitboard_ = 0ULL;
  this->piece_.piece = Piece_types::none;
}

BitBoard::BitBoard(const std::uint64_t &bitboard, const Piece &piece) {
  this->bitboard_ = bitboard;
  this->piece_ = piece;
}

BitBoard::~BitBoard() {}

BitBoard::

} // namespace Chess