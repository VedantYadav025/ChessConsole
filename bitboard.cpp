#include "bitboard.h"

namespace Chess {
BitBoard::BitBoard() { this->bitboard_ = 0ULL; }

BitBoard::BitBoard(const std::uint64_t &bitboard) {
  this->bitboard_ = bitboard;
}

BitBoard::~BitBoard() {}

std::uint64_t BitBoard::getBitboard() const { return this->bitboard_; }

void BitBoard::setBitboard(const std::uint64_t &val) { this->bitboard_ = val; }

} // namespace Chess
