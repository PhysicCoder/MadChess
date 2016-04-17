#include "standard.h"

#ifndef GAMESTART_H
#define GAMESTART_H

namespace GameStart
{
	class Start
	{
	public:
		Start();
		void askName();
		char getWhiteName();
		char getBlackName();
		void setInitialBoard(); /*Sets up a board, placing all the chessPieces in thier initial slots*/
		int iCB[9][9];     

	private:
		//char* whiteName;
		//char* blackName;
		char name1[10];
		char name2[10];
		struct player1  //player info, player's history(units)
		{
			enum chessPieces {PAWN = 1, KNIGHT, BISHOP, ROOK, QUEEN, KING}; //ChessPieces
		};

		struct player2 //player info, player's history(units)
		{
			enum chessPieces {PAWN = 11, KNIGHT, BISHOP, ROOK, QUEEN, KING}; //ChessPieces
		};

		player1 p1;

		player2 p2;

		enum emptySquare {EMPTY};
	};
}

/*
2d Array of chessBoard(CB), contains chessPieces location
and unoccupied territory
*/


#endif //GAMESTART_H