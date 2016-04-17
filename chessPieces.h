#include "standard.h"
#include <cstdlib>
#ifndef CHESSPIECES_H
#define CHESSPIECES_H

namespace ChessPieces
{
	class Pieces
	{
	public:
		Pieces();
	
		void pawn(int, int, int, int);   //creates valid pawn movement
		void knight(int, int, int, int); //creates valid knight movement
		void bishop(int, int, int, int); //creates valid bishop movement
		void rook(int, int, int, int);   //creates valid rook movement
		void queen(int, int, int, int);  //creates valid queen movement
	    void king(int, int, int, int);   //creates valid king movement
		bool wrongPiece();
		bool getIllegal();

	private:
		bool illegal;
		bool jump;
		bool enPasse;
		bool pawns[8];
	};
}



#endif //chessPieces.h