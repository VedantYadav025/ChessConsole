#include "white_king.h"

namespace Chess {

WhiteKing::WhiteKing()
    : BitBoard(1),
      piece({Piece_types::king, Color_types::white}) {}

constexpr Square WhiteKing::squareOfKing() const {
    std::uint64_t num = getBitboard();
    std::uint32_t index = 0;
    while (num != 0) {
        num = num << 1;
        index++;
    }
    return Square(index);
}

} // namespace Chess