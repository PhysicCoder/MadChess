#include "turnBase.h"
#include "gameStart.h"
#include "player1.h"
#include "player2.h"
#include "event.h"
using namespace SpecialEvent;
using namespace Player_1;
using namespace Player_2;
using namespace GameStart;

namespace TurnBase
{
	PlayersTurn::PlayersTurn()
	{}

	Event check;

	void PlayersTurn::setTurn()
	{
		whiteTurn = true;
		remainder = 0;
		turnCount = 0;
	}
	void PlayersTurn::evenNumber()
	{
		remainder = turnCount % 2;

		if(remainder == 0)
			whiteTurn = true;
		else
			whiteTurn = false;
	}

	void PlayersTurn::checkTurn(int pieceValue, int iColumn, int iRow, int fColumn, int fRow)
	{
		Start get;
		Player1 white;
		Player2 black;
		
		if(whiteTurn)
		{
			//load player1
			white.history(pieceValue, iColumn, iRow, fColumn, fRow);
			illegal = white.getIllegal();
		}
		else
		{
			//load player2.cpp
			black.history(pieceValue, iColumn, iRow, fColumn, fRow);
			illegal = black.getIllegal();
		}
	
		setRouteCheck();

		if(!illegal && (pieceValue != 2 || pieceValue != 12))
		{
			check.inTheWay(iColumn, iRow, fColumn, fRow);
			illegal = check.getIllegal();
			cout << illegal;
			Sleep(1800);
		}
	
		if(!illegal)
			turnCount++;

		evenNumber();
	}
	void PlayersTurn::displayWhoseTurn()
	{
		stdOut = GetStdHandle(STD_OUTPUT_HANDLE); // to able to manipulate colors
		
		if(whiteTurn)
		{
			SetConsoleTextAttribute(stdOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << "white's turn to move";
		}
		else
		{
			SetConsoleTextAttribute(stdOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN );
			cout << "black's";
			SetConsoleTextAttribute(stdOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << " turn to move";	
		}
	}
	void PlayersTurn::setRouteCheck()
	{
		for(int row = 8; row >= 1; row--)
		{
			for(int col = 1; col <= 8; col++)
			{
		
				check.routeCheck[col][row] = getTempCB(col, row);
				
			}
		}
	}
	int PlayersTurn::getTempCB(int col, int row)
	{
		return tempCB[col][row];
	}
	
			
	bool PlayersTurn::getIllegal()
	{
		return illegal;
	}
	
}
