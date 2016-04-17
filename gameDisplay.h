#include "standard.h"

#ifndef GAMEDISPLAY_H
#define GAMEDISPLAY_H

namespace GameDisplay
{
	class Display
	{
	public:
		void gameDisplay();
		void setDisplayBoard();

		void centerTheDisplay(int x, int y) ;
		void menu();
		void cls();
		
		int displayCB[9][9];
	private:
		HANDLE stdOut; 
		int chessPiece;
		int indexCount;
		char SQUARE[7][11];
		char ROOK[7][11];
		char KNIGHT[7][11];
		char BISHOP[7][11];
		char QUEEN[7][11];
		char KING[7][11];
		char PAWN[7][11];
	};
}

/*
This function displays the current gamePlay,
it shows the location of pieces as well a refined graphics of 
chessBoard and it's pieces.
This function is in constant refresh rate, as data changes during the
game play
*/

#endif //gameDisplay.h     