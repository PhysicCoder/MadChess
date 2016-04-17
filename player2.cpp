#include "player2.h"
#include "chessPieces.h"
#include "gamePlay.h"
#include "gameDisplay.h"
using namespace ChessPieces;
using namespace GamePlay;
using namespace GameDisplay;

namespace Player_2
{
		void Player2::history(int pieceValue, int iColumn, int iRow, int fColumn, int fRow)
		{
			Play load;
			Pieces test;
		//	cout << "\n\n" << "iColumn "<< iColumn << "iRow " << iRow << "fColumn "<<  fColumn << "fRow "<< fRow << endl;

			//cout << pieceValue << endl;

			switch(pieceValue)
			{
			case 11: //PAWN
				test.pawn(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 12: //KNIGHT
				test.knight(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 13: // BISHOP
				test.bishop(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 14: //ROoK
				test.rook(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 15: // QUEEN
				test.queen(iColumn, iRow, fColumn, fRow);
				illegal = test.getIllegal();
				break;
			case 16:
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
		bool Player2::getIllegal()
		{
			return illegal;
		}
}

