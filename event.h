#include "standard.h"
#ifndef EVENT_H
#define EVENT_H

namespace SpecialEvent
{
	class Event
	{
	public:
		// Event
		//only occures once in entire game play
		//--------------------------------------------------------
		void checkMate();	//King handicapped and in check
		void staleMate();	//King handicapped and not in check
		void castling();    //King Castling Move
		void enPasse();     //pawn able to move diagonally one square if enemy by
		void jump();        //pawn able to move two squares straight
		void inTheWay(int, int, int, int);
		void overLap(int, bool);
		void boundary(int, int);
		//-------------------------------------------
		bool getIllegal();
		int routeCheck[9][9];
	private:
		bool illegal;
	};
}
#endif //event.h