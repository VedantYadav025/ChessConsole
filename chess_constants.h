#include "square.h"
#include <string_view>

namespace Chess {

constexpr std::string_view starting_position_fen =
    "rnbqkbnr/pppppppp/8/8/8/8/8/pppppppp/RNBQKBNR";

const std::uint64_t WHITE_KING_INIT = 0x0000000000000010;

}
