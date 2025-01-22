#pragma once 
#include "bitboard.h"

namespace Chess {

	class WhiteKing : private BitBoard {
	
	public:
		WhiteKing();
		constexpr Square squareOfKing() const;
		
	private:
		Piece piece;

	};

}
