#include "standard.h"
#ifndef TURNBASE_H
#define TURNBASE_H


namespace TurnBase
{
	class PlayersTurn
	{
	public:
		PlayersTurn();
		void setTurn();
		void displayWhoseTurn();
		void evenNumber();
		void oddNumber();
		void checkTurn(int, int, int, int, int);
		void setRouteCheck();
		int getTempCB(int, int);
		bool getIllegal();
		int tempCB[9][9];
		
	private:
		HANDLE stdOut; 
		
		int turnCount;
		int remainder;
		int whiteCount;
		int blackCount;
		bool moved;
		bool whiteTurn;
		bool illegal;
	};
}

#endif //turnBas.h


