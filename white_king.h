#pragma once

#include "bitboard.h"
namespace Chess {

	class WhiteKing : private BitBoard {
		
	public:
		WhiteKing();
		BitBoard validMoves() const;
		
	private:
		Piece piece;
	};

} // namespace Chess