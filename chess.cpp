// backend.cpp : Defines the entry point for the application.
//

#include "chess.h"

int main() {
  std::uint64_t x = 5;
  Chess::printUnsignedBitwise(x);
  Chess::setBit(x, 1);
  Chess::printUnsignedBitwise(x);
  return 0;
}
