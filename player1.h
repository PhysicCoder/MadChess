#include "standard.h"
#ifndef PLAYER1_H
#define PLAYER1_H

namespace Player_1
{
	class Player1
	{
	public:
		struct player1  //player info, player's history(units)
		{
			enum chessPieces {PAWN = 1, KNIGHT, BISHOP, ROOK, QUEEN, KING}; //ChessPieces
		};

		player1 p1;
		void history(int, int, int, int, int); //iC, iR, fC, fR
		void playerPiece(int, int); // chosen piece by location
		bool getIllegal();
		
	private:
		bool whiteTurn;
		int pieceValue;
		bool moved;
		bool illegal;

	};
}

#endif //player1.h