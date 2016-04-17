#include "event.h"
#include "gameDisplay.h"
#include "gamePlay.h"
using namespace GamePlay;
using namespace GameDisplay;

namespace SpecialEvent
{
	Display screen;
	Play check;
	

	void Event::boundary(int fC, int fR)
	{
		illegal = false;

		if(fC > 8 || fR > 8)
			illegal = true;

		if(fC < 1 || fR < 1)
			illegal = true;
	}

	void Event::overLap(int pieceValue, bool whiteTurn)
	{
		illegal = false;

		if(whiteTurn && (pieceValue < 11 && pieceValue != 0))
			illegal = true;

		if(!whiteTurn && (pieceValue > 10 && pieceValue != 0))
			illegal = true;
	}

	void Event::inTheWay(int iC, int iR, int fC, int fR)
	{
		int col = abs(fC - iC);
		int row = abs(fR - iR);
		
		illegal = false;
		cout << illegal << " row " << row << " col " << col;
		Sleep(2000);

		if(row == 0 && col > 0)
		{
			for(int r = iR; r >= 1; r--)
			{
				for(int c = 1; c <= col; c++)
				{
					
					if(routeCheck[c][r] > 0)
					{
						illegal = true;	
						screen.menu();
						cout << "you cannot jump with this chess piece";
						Sleep(2200);
						screen.cls();
						break;
					}
				}
			}
			
		}

		if(col == 0 && row > 0)
		{
			for(int r = row; r >= 1; r--)
			{
				if(routeCheck[iC][r] > 0 && iR == r)
				{
					illegal = true;
					screen.menu();
					cout << "you cannot jump with this chess piece";
					Sleep(2200);
					screen.cls();
					break;
						
				}
			}
			
		}

		if(col == row)
		{
			for(int r = fR; r >= 1; r--)
			{
				for(int c = 1; c <= fC; c++)
				{
					int tempC = abs(c - iC);
					int tempR = abs(r - iR);

					if(tempR == tempC)
					{
						if(routeCheck[fC][fR] > 0)
						illegal = true;
						screen.menu();
						cout << "you cannot jump with this chess piece";
						Sleep(2200);
						screen.cls();
						cout << illegal << "hello";
						Sleep(2000);
					}
				}
			}
		}
	}
	bool Event::getIllegal()
	{
		return illegal;
	}
}