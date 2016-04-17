#include "standard.h"

#ifndef GAMEPLAY_H
#define GAMEPLAY_H


namespace GamePlay
{
	class Play
	{
	public:

		Play();//default constructor

		void setCurrentBoard();	
		void setDisplayBoard(int, int);

		void action();
		/*Client able to touch a chess peice by referring to its location*/

		void actionValidator();
		/*Checks if clients reference of chessPiece is correct also it checks
		if the client's movement of that piece legal in terms of chess rules.
		*/
		
		void check();		//King's threat
		//void findPieceValue();
		int getPieceValue();
		void showChessBoard();

		/*
		Sets up a board, placing all the chessPieces in thier initial slots
		*/
		
		//enum emptySquare {EMPTY = 0};
		int cCB[9][9];
	private:
		HANDLE stdOut; 
		enum emptySquare {EMPTY};
		int iC;            // edited
		int iR;
		int count;
		int fR;                // added location variables
		int fC;
		
		int pieceValue;
		int displayValue;
		char tempFC;
		char tempIC;
		char unit;
		char* whiteName;
		char* blackName;
		bool error;
		bool illegal;
		

	};
}

#endif //gamePlay.h



