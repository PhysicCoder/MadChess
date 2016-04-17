#include "chessPieces.h"
#include "gamePlay.h"
#include "gameDisplay.h"
#include "event.h"
using namespace SpecialEvent;
using namespace GameDisplay;
using namespace GamePlay;

namespace ChessPieces
{	
	Pieces::Pieces()
	{}
	Event check;

	void Pieces::pawn(int iC, int iR, int fC, int fR)
	{
		int index = 0;
		int col, row;
		jump = false;
		illegal = false;


		//gets the remaining squares
		//these remaining squares justifies the distance the unit moved
		col = abs(fC - iC); 
		row = abs(fR - iR);

		//restiRcts moving more than 2 squares even for speiCa double move
		if(row == 2 && !jump)
			jump = true;
		
		if(row > 2 && !jump)
		{
			cout << "you can not move the pawn more than two square at start\n";
			illegal = true;
		}
		//restiRcs moving more than 1 square after the double move
		if(row == 1)
		{
			illegal = false;
		}

		if(row > 1 && jump)
		{
			cout << "you can not move the pawn more than one square\n";
			illegal = true;
		}
		//restiRcs moving backwards or plaiCng the unit back to its own square
		if(row < 1 )
		{
			illegal = true;
			cout << "once you touched the piece you cannot put it back\n";
		}

		if(col > 0)
		{
			illegal = true;
			cout << "once you touched the piece you cannot put it back\n";
		}

	
			
	}//pawn

	void Pieces::knight(int iC, int iR, int fC, int fR)
	{
		illegal = false;

		int col = abs(fC-iC);
		int row = abs(fR-iR);

		if(col == 0 || row == 0)
			illegal = true;

		if(col > 2 || row > 2)
			illegal = true;
	}

	void Pieces::king(int iC, int iR, int fC, int fR)
	{
		illegal = false;

		int col = abs(fC-iC);
		int row = abs(fR-iR);

		if(col == 0 && row ==0)
			illegal = true;

		if(col > 1 || row > 1)
			illegal = true;

		
	}

	void Pieces::queen(int iC, int iR, int fC, int fR)
	{
		illegal = false;

		int col = abs(fC-iC);
		int row = abs(fR-iR);

		cout<<col<<":"<<row<<endl;

		if(col == 0 && row == 0)
			illegal = true;
				
		//if(col 
			//illegal = true;
	
		cout<< "queen" << illegal<<endl;

		
	}

	void Pieces::rook(int iC, int iR, int fC, int fR)
	{
		int col, row;
		illegal = false;

		col = abs(fC - iC); 
		row = abs(fR - iR);

		// If it is trying to go diagonally, it will ask for the destination again
		if((row > 0 && col >= row) || (col > 0 && col <= row))
			illegal = true;

		if(row == 0 && col == 0)
			illegal = true;

		
	}

	void Pieces::bishop(int iC, int iR, int fC, int fR)
	{
		int col, row;
		illegal = false;

		col = abs(fC - iC);
		row = abs(fR - iR);

		// if it is trying to go straight along the rows or the columns, ask again for the destination.
		if(row > col || row < col)
			illegal = true;
		
		if(row == 0 && col == 0)
			illegal = true;

		
	}
	bool Pieces::wrongPiece()
	{
		illegal = true;
		return illegal;
	}

	bool Pieces::getIllegal()
	{
		Display screen;
		screen.menu();
		if(illegal)
			cout<< "You cannot move the piece like that, please move it again correctly ";
		Sleep(1800);
		screen.cls();
		return illegal;
	}
}