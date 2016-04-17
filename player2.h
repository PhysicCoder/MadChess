#include "standard.h"
#ifndef PLAYER2_H
#define PLAYER2_H

namespace Player_2
{
	class Player2
	{
	public:
		struct player2  //player info, player's history(units)
		{
			enum chessPieces {PAWN = 11, KNIGHT, BISHOP, ROOK, QUEEN, KING}; //ChessPieces
		};

		player2 p2;
		void history(int, int, int, int, int); //iC, iR, fC, fR
		void playerPiece(int, int); // chosen piece by location
		bool getIllegal();
		
	private:
		bool blackTurn;
		int pieceValue;
		bool moved;
		bool illegal;

	};
}

#endif //player2.h