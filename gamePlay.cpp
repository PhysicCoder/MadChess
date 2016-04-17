#include "gamePlay.h"
#include "gameStart.h"
#include "chessPieces.h"
#include "turnBase.h"
#include "gameDisplay.h"
#include "event.h"
using namespace SpecialEvent;
using namespace GameStart;
using namespace ChessPieces;
using namespace TurnBase;
using namespace GameDisplay;

namespace GamePlay
{
	Play::Play()
	{/*Empty intentionally*/}

	Start initiate;
	PlayersTurn whoseMove;
	Display screen;
	Event load;
		
	void Play::setCurrentBoard()
	{
		
		stdOut = GetStdHandle(STD_OUTPUT_HANDLE); // to able to manipulate colors
		SetConsoleTextAttribute(stdOut, BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
		count = 0;
		whoseMove.setTurn();
		//initiate.askName();
		initiate.setInitialBoard();
		for(int row = 8; row >= 1; row--)
		{
			for(int col = 1; col <= 8; col++)
			{
				cCB[col][row] = initiate.iCB[col][row];
				setDisplayBoard(col, row);
			}
		}
		
		screen.gameDisplay();
	}

	int Play::getPieceValue()
	{
		return pieceValue;
	}


	void Play::action()
	{
		stdOut = GetStdHandle(STD_OUTPUT_HANDLE); // to able to manipulate colors
		SetConsoleTextAttribute(stdOut, BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		iR = 0;
		tempIC = 0;
		
		do
		{
			whoseMove.displayWhoseTurn();
			
			cout << ", select the piece you would like to move: "; // input the piece that you want to move
			cin >> tempIC >> iR;
			screen.cls();

			actionValidator();
			count++;
		}while(count < 5);//while game is not StaleMate or CheckMate or Retire
	}
	void Play::actionValidator()
	{
		 fC = 0; // edited
		 iC = 0; // edited
		 fR = 0; // added tempIC variables
		 tempFC = 0;
		 error = false;
		 //illegal = false;
		//-----------
		Pieces unit;
		//-----------
		//error = unit.illegal;

		//edited
		if(tempIC == 'a')
			iC = 1;
		if(tempIC == 'b')
			iC = 2;
		if(tempIC == 'c')
			iC = 3;
		if(tempIC == 'd')
			iC = 4;
		if(tempIC == 'e')
			iC = 5;
		if(tempIC == 'f')
			iC = 6;
		if(tempIC == 'g')
			iC = 7;
		if(tempIC == 'h')
			iC = 8;

		//if client has selected an empty square, prompt an error and retry
		if(cCB[iC][iR] == EMPTY)
		{
			cout << "It's an empty square, please select a correct position\n\n";
			error = true; //will activate RETRY process located at the end of actionValidator function
		}

		if(!error)
		{
			
			screen.menu();
			cout << "Select the destination                      : "; // input the tempIC where you want to put the selected piece
			cin >> tempFC >> fR;
			screen.cls();

			if(tempFC == 'a')
				fC = 1;
			if(tempFC == 'b')
				fC = 2;
			if(tempFC == 'c')
				fC = 3;
			if(tempFC == 'd')
				fC = 4;
			if(tempFC == 'e')
				fC = 5;
			if(tempFC == 'f')
				fC = 6;
			if(tempFC == 'g')
				fC = 7;
			if(tempFC == 'h')
				fC = 8;

			
			pieceValue = cCB[iC][iR];
			
			whoseMove.checkTurn(pieceValue, iC, iR, fC, fR);
			illegal = whoseMove.getIllegal();

//			if(whoseMove.whiteTurn)
			//unit.king(iC, iR, fC, fR);//validates the unit movement before moving it
			
			//ILLEGAL CHOICES
			//==============================
			//if the client has chosen empty square
			if(error)
			{
				action();//retry for client
			}
			//if the client movement fails to comply with rules
			//illegal = unit.illegalMove();
			if(illegal)
			{
				action();//retry for client
			}
			//==============================

			// Search Engine, moves the pieces (simpler
			int tempNum;
			for(int r = 1; r <= 8; r++)
			{
				for(int c = 1; c <=8; c++)
				{
					if(c == iC && r == iR)
					{
						tempNum = cCB[iC][iR];
						cCB[c][r] = EMPTY;
						cCB[fC][fR] = tempNum;
						//continue;
					}	
				}
			}
			showChessBoard();
		}
	}
	void Play::showChessBoard()
	{
		cout << endl;
		
		for(int row = 8; row >= 1; row--)
		{
			for(int col = 1; col <= 8; col++)
			{
		
				setDisplayBoard(col, row);
				
			}
		}
		cout << endl;


		screen.gameDisplay();
	}

	void Play::setDisplayBoard(int col, int row)
	{
		screen.displayCB[col][row] = cCB[col][row];
		whoseMove.tempCB[col][row] = cCB[col][row];
	}

}//GamePlay