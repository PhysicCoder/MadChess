#include "player1.h"
#include "chessPieces.h"
#include "gamePlay.h"
#include "gameDisplay.h"
using namespace ChessPieces;
using namespace GamePlay;
using namespace GameDisplay;

namespace Player_1
{
		void Player1::history(int pieceValue, int iColumn, int iRow, int fColumn, int fRow)
		{
			Play load;
			Pieces test;
			//cout << "\n\n" << "iColumn "<< iColumn << "iRow " << iRow << "fColumn "<<  fColumn << "fRow "<< fRow << endl;

			//cout << pieceValue << endl;

			switch(pieceValue)
			{
			case 1: //PAWN
				test.pawn(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 2: //KNIGHT
				test.knight(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 3: // BISHOP
				test.bishop(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 4: //ROOK
				test.rook(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 5: // QUEEN
				test.queen(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 6:
				test.king(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			default:
				Display screen;
				screen.menu();
				cout << "You cannot touch other player's chess pieces\n";
				Sleep(1800);
				screen.cls();
				illegal = true;
				break;
			}
			

			
			

		}
		bool Player1::getIllegal()
		{
			return illegal;
		}
}
