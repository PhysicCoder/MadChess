#include "gameDisplay.h"


namespace GameDisplay
{
	

	void Display::centerTheDisplay( int x, int y ) 
	{ 
		HANDLE screen = GetStdHandle( STD_OUTPUT_HANDLE ); 
		COORD _ = { x, y }; SetConsoleCursorPosition( screen, _); 
	} 

	void Display::menu() 
	{
		HANDLE screen = GetStdHandle( STD_OUTPUT_HANDLE ); 
		DWORD NumberOfCharsWritten; 
		COORD _ = { 0, 57}; 
		FillConsoleOutputCharacter ( screen, ' ', 0x0011, _, &NumberOfCharsWritten ); 
		SetConsoleCursorPosition( screen, _);
	} 

	void Display::cls() 
	{ 
		HANDLE screen = GetStdHandle( STD_OUTPUT_HANDLE ); 
		DWORD NumberOfCharsWritten; 
		COORD _ = { 0, 57 }; 
		FillConsoleOutputCharacter ( screen, ' ', 0xffff, _, &NumberOfCharsWritten ); 
		SetConsoleCursorPosition( screen, _); 
	}


	void Display::gameDisplay()
	{
		 
		char lettas[8] = {'a','b','c','d','e','f','g','h'};
		

		stdOut = GetStdHandle(STD_OUTPUT_HANDLE); // to able to manipulate colors
		SetConsoleTextAttribute(stdOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		
		char SQUARE[7][11] = 
		{{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},};

		char PAWN[7][11] = 
		{{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32}, 
		{(char)32,(char)32,(char)32,(char) 32,(char)220,(char)220,(char) 32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)219,(char)219,(char)219,(char)219,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char) 80,(char) 65,(char) 87,(char) 78,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32}};

		char ROOK[7][11] = 
		{{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32}, 
		{(char)32,(char)32,(char)220,(char) 32,(char)220,(char)220,(char) 32,(char)220,(char)32,(char)32},
		{(char)32,(char)32,(char)219,(char)219,(char)219,(char)219,(char)219,(char)219,(char)32,(char)32},
		{(char)32,(char)32,(char)219,(char) 82,(char) 79,(char) 79,(char) 75,(char)219,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32}};

		char KNIGHT[7][11] = 
		{{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)286,(char)286,(char)32,(char)32,(char)32,(char)32}, 
		{(char)32,(char)32,(char)219,(char)219,(char)229,(char)219,(char)220,(char) 32,(char)32,(char)32},
		{(char)32,(char)32,(char) 32,(char)223,(char)219,(char)219,(char)219,(char)219,(char)32,(char)32},
		{(char)32,(char)32,(char) 75,(char) 78,(char) 73,(char) 71,(char) 72,(char) 84,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32}};

		char BISHOP[7][11] = 
		{{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32}, 
		{(char)32,(char)32,(char)32,(char)32,(char)278,(char)278,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)219,(char)219,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char) 66,(char) 73,(char) 83,(char) 72,(char) 79,(char) 80,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32}};

		char QUEEN[7][11] = 
		{{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)271,(char)271,(char)32,(char)32,(char)32,(char)32}, 
		{(char)32,(char)32,(char)32,(char)32,(char)219,(char)219,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)222,(char)219,(char)219,(char)221,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char) 81,(char) 85,(char) 69,(char) 69,(char) 78,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32}};

		char KING[7][11] = 
		{{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)286,(char)271,(char)271,(char)286,(char)32,(char)32,(char)32}, 
		{(char)32,(char)32,(char)32,(char)219,(char)219,(char)219,(char)219,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)219,(char)219,(char)219,(char)219,(char)221,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char) 75,(char) 73,(char) 78,(char) 71,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32},
		{(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32,(char)32}};
		

		const int measure = 6;
		cls();
		centerTheDisplay( 0, 0 );
		//////////////////////////////////////////////////										    //
		//                    ROW 8					    //
		/////////////////////////////////////////////////
		for(int a = 0; a < 7; a++)
		{
			SetConsoleTextAttribute(
					stdOut, FOREGROUND_BLUE |FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY);
			if(a == 3)
				cout << " 8 ";
			else
				cout << "   ";

			for(int line = 0; line < 11; line++) //COLUMN A
			{
				SetConsoleTextAttribute(
					stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				//----------BLACK PIECES-------------
				if(displayCB[1][8] == 0)
					cout << SQUARE[a][line];
				if(displayCB[1][8] == 11)
					cout << PAWN[a][line];
				if(displayCB[1][8] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[1][8] == 13)
					cout << BISHOP[a][line];
				if(displayCB[1][8] == 14)
					cout << ROOK[a][line];
				if(displayCB[1][8] == 15)
					cout << QUEEN[a][line];
				if(displayCB[1][8] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[1][8] == 1)
					cout << PAWN[a][line];
				if(displayCB[1][8] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[1][8] == 3)
					cout << BISHOP[a][line];
				if(displayCB[1][8] == 4)
					cout << ROOK[a][line];
				if(displayCB[1][8] == 5)
					cout << QUEEN[a][line];
				if(displayCB[1][8] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN B
			{
				SetConsoleTextAttribute(
					stdOut, BACKGROUND_INTENSITY);
				if(displayCB[2][8] == 0)
					cout << SQUARE[a][line];
				if(displayCB[2][8] == 11)
					cout << PAWN[a][line];
				if(displayCB[2][8] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[2][8] == 13)
					cout << BISHOP[a][line];
				if(displayCB[2][8] == 14)
					cout << ROOK[a][line];
				if(displayCB[2][8] == 15)
					cout << QUEEN[a][line];
				if(displayCB[2][8] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[2][8] == 1)
					cout << PAWN[a][line];
				if(displayCB[2][8] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[2][8] == 3)
					cout << BISHOP[a][line];
				if(displayCB[2][8] == 4)
					cout << ROOK[a][line];
				if(displayCB[2][8] == 5)
					cout << QUEEN[a][line];
				if(displayCB[2][8] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN C
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[3][8] == 0)
					cout << SQUARE[a][line];
				if(displayCB[3][8] == 11)
					cout << PAWN[a][line];
				if(displayCB[3][8] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[3][8] == 13)
					cout << BISHOP[a][line];
				if(displayCB[3][8] == 14)
					cout << ROOK[a][line];
				if(displayCB[3][8] == 15)
					cout << QUEEN[a][line];
				if(displayCB[3][8] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[3][8] == 1)
					cout << PAWN[a][line];
				if(displayCB[3][8] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[3][8] == 3)
					cout << BISHOP[a][line];
				if(displayCB[3][8] == 4)
					cout << ROOK[a][line];
				if(displayCB[3][8] == 5)
					cout << QUEEN[a][line];
				if(displayCB[3][8] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN D
			{
				SetConsoleTextAttribute(
					stdOut, BACKGROUND_INTENSITY);
				if(displayCB[4][8] == 0)
					cout << SQUARE[a][line];
				if(displayCB[4][8] == 11)
					cout << PAWN[a][line];
				if(displayCB[4][8] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[4][8] == 13)
					cout << BISHOP[a][line];
				if(displayCB[4][8] == 14)
					cout << ROOK[a][line];
				if(displayCB[4][8] == 15)
					cout << QUEEN[a][line];
				if(displayCB[4][8] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[4][8] == 1)
					cout << PAWN[a][line];
				if(displayCB[4][8] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[4][8] == 3)
					cout << BISHOP[a][line];
				if(displayCB[4][8] == 4)
					cout << ROOK[a][line];
				if(displayCB[4][8] == 5)
					cout << QUEEN[a][line];
				if(displayCB[4][8] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN E
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[5][8] == 0)
					cout << SQUARE[a][line];
				if(displayCB[5][8] == 11)
					cout << PAWN[a][line];
				if(displayCB[5][8] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[5][8] == 13)
					cout << BISHOP[a][line];
				if(displayCB[5][8] == 14)
					cout << ROOK[a][line];
				if(displayCB[5][8] == 15)
					cout << QUEEN[a][line];
				if(displayCB[5][8] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[5][8] == 1)
					cout << PAWN[a][line];
				if(displayCB[5][8] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[5][8] == 3)
					cout << BISHOP[a][line];
				if(displayCB[5][8] == 4)
					cout << ROOK[a][line];
				if(displayCB[5][8] == 5)
					cout << QUEEN[a][line];
				if(displayCB[5][8] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN F
			{
				SetConsoleTextAttribute(
					stdOut, BACKGROUND_INTENSITY);
				if(displayCB[6][8] == 0)
					cout << SQUARE[a][line];
				if(displayCB[6][8] == 11)
					cout << PAWN[a][line];
				if(displayCB[6][8] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[6][8] == 13)
					cout << BISHOP[a][line];
				if(displayCB[6][8] == 14)
					cout << ROOK[a][line];
				if(displayCB[6][8] == 15)
					cout << QUEEN[a][line];
				if(displayCB[6][8] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[6][8] == 1)
					cout << PAWN[a][line];
				if(displayCB[6][8] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[6][8] == 3)
					cout << BISHOP[a][line];
				if(displayCB[6][8] == 4)
					cout << ROOK[a][line];
				if(displayCB[6][8] == 5)
					cout << QUEEN[a][line];
				if(displayCB[6][8] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN G
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[7][8] == 0)
					cout << SQUARE[a][line];
				if(displayCB[7][8] == 11)
					cout << PAWN[a][line];
				if(displayCB[7][8] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[7][8] == 13)
					cout << BISHOP[a][line];
				if(displayCB[7][8] == 14)
					cout << ROOK[a][line];
				if(displayCB[7][8] == 15)
					cout << QUEEN[a][line];
				if(displayCB[7][8] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[7][8] == 1)
					cout << PAWN[a][line];
				if(displayCB[7][8] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[7][8] == 3)
					cout << BISHOP[a][line];
				if(displayCB[7][8] == 4)
					cout << ROOK[a][line];
				if(displayCB[7][8] == 5)
					cout << QUEEN[a][line];
				if(displayCB[7][8] == 6)
					cout << KING[a][line];
				//----------WHITE PIECES------
			}
			for(int line = 0; line < 11; line++)//COLUMN H
			{
				SetConsoleTextAttribute(
					stdOut, BACKGROUND_INTENSITY);
				if(displayCB[8][8] == 0)
					cout << SQUARE[a][line];
				if(displayCB[8][8] == 11)
					cout << PAWN[a][line];
				if(displayCB[8][8] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[8][8] == 13)
					cout << BISHOP[a][line];
				if(displayCB[8][8] == 14)
					cout << ROOK[a][line];
				if(displayCB[8][8] == 15)
					cout << QUEEN[a][line];
				if(displayCB[8][8] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[8][8] == 1)
					cout << PAWN[a][line];
				if(displayCB[8][8] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[8][8] == 3)
					cout << BISHOP[a][line];
				if(displayCB[8][8] == 4)
					cout << ROOK[a][line];
				if(displayCB[8][8] == 5)
					cout << QUEEN[a][line];
				if(displayCB[8][8] == 6)
					cout << KING[a][line];
			}
			cout << endl;
			
		}
		//////////////////////////////////////////////////										    //
		//                 END ROW 8				    //
		//////////////////////////////////////////////////


		//////////////////////////////////////////////////										    //
		//                    ROW 7				        //
		//////////////////////////////////////////////////
		for(int a = 0; a < 7; a++)
		{
			SetConsoleTextAttribute(
					stdOut, FOREGROUND_BLUE |FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY);
			if(a == 3)
				cout << " 7 ";
			else
				cout << "   ";
			//PAWNS
			for(int line = 0; line < 11; line++) //COLUMN A
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_INTENSITY );
				if(displayCB[1][7] == 0)
					cout << SQUARE[a][line];
				if(displayCB[1][7] == 11)
					cout << PAWN[a][line];
				if(displayCB[1][7] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[1][7] == 13)
					cout << BISHOP[a][line];
				if(displayCB[1][7] == 14)
					cout << ROOK[a][line];
				if(displayCB[1][7] == 15)
					cout << QUEEN[a][line];
				if(displayCB[1][7] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
				if(displayCB[1][7] == 1)
					cout << PAWN[a][line];
				if(displayCB[1][7] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[1][7] == 3)
					cout << BISHOP[a][line];
				if(displayCB[1][7] == 4)
					cout << ROOK[a][line];
				if(displayCB[1][7] == 5)
					cout << QUEEN[a][line];
				if(displayCB[1][7] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN B
			{
				
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[2][7] == 0)
					cout << SQUARE[a][line];
				if(displayCB[2][7] == 11)
					cout << PAWN[a][line];
				if(displayCB[2][7] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[2][7] == 13)
					cout << BISHOP[a][line];
				if(displayCB[2][7] == 14)
					cout << ROOK[a][line];
				if(displayCB[2][7] == 15)
					cout << QUEEN[a][line];
				if(displayCB[2][7] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[2][7] == 1)
					cout << PAWN[a][line];
				if(displayCB[2][7] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[2][7] == 3)
					cout << BISHOP[a][line];
				if(displayCB[2][7] == 4)
					cout << ROOK[a][line];
				if(displayCB[2][7] == 5)
					cout << QUEEN[a][line];
				if(displayCB[2][7] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN C
			{
				SetConsoleTextAttribute(
					stdOut, BACKGROUND_INTENSITY );
				if(displayCB[3][7] == 0)
					cout << SQUARE[a][line];
				if(displayCB[3][7] == 11)
					cout << PAWN[a][line];
				if(displayCB[3][7] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[3][7] == 13)
					cout << BISHOP[a][line];
				if(displayCB[3][7] == 14)
					cout << ROOK[a][line];
				if(displayCB[3][7] == 15)
					cout << QUEEN[a][line];
				if(displayCB[3][7] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
				if(displayCB[3][7] == 1)
					cout << PAWN[a][line];
				if(displayCB[3][7] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[3][7] == 3)
					cout << BISHOP[a][line];
				if(displayCB[3][7] == 4)
					cout << ROOK[a][line];
				if(displayCB[3][7] == 5)
					cout << QUEEN[a][line];
				if(displayCB[3][7] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN D
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[4][7] == 0)
					cout << SQUARE[a][line];
				if(displayCB[4][7] == 11)
					cout << PAWN[a][line];
				if(displayCB[4][7] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[4][7] == 13)
					cout << BISHOP[a][line];
				if(displayCB[4][7] == 14)
					cout << ROOK[a][line];
				if(displayCB[4][7] == 15)
					cout << QUEEN[a][line];
				if(displayCB[4][7] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[4][7] == 1)
					cout << PAWN[a][line];
				if(displayCB[4][7] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[4][7] == 3)
					cout << BISHOP[a][line];
				if(displayCB[4][7] == 4)
					cout << ROOK[a][line];
				if(displayCB[4][7] == 5)
					cout << QUEEN[a][line];
				if(displayCB[4][7] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN E
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_INTENSITY );
				if(displayCB[5][7] == 0)
					cout << SQUARE[a][line];
				if(displayCB[5][7] == 11)
					cout << PAWN[a][line];
				if(displayCB[5][7] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[5][7] == 13)
					cout << BISHOP[a][line];
				if(displayCB[5][7] == 14)
					cout << ROOK[a][line];
				if(displayCB[5][7] == 15)
					cout << QUEEN[a][line];
				if(displayCB[5][7] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
				if(displayCB[5][7] == 1)
					cout << PAWN[a][line];
				if(displayCB[5][7] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[5][7] == 3)
					cout << BISHOP[a][line];
				if(displayCB[5][7] == 4)
					cout << ROOK[a][line];
				if(displayCB[5][7] == 5)
					cout << QUEEN[a][line];
				if(displayCB[5][7] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN F
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				
				if(displayCB[6][7] == 0)
					cout << SQUARE[a][line];
				if(displayCB[6][7] == 11)
					cout << PAWN[a][line];
				if(displayCB[6][7] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[6][7] == 13)
					cout << BISHOP[a][line];
				if(displayCB[6][7] == 14)
					cout << ROOK[a][line];
				if(displayCB[6][7] == 15)
					cout << QUEEN[a][line];
				if(displayCB[6][7] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[6][7] == 1)
					cout << PAWN[a][line];
				if(displayCB[6][7] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[6][7] == 3)
					cout << BISHOP[a][line];
				if(displayCB[6][7] == 4)
					cout << ROOK[a][line];
				if(displayCB[6][7] == 5)
					cout << QUEEN[a][line];
				if(displayCB[6][7] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)// COLUMN G
			{
				SetConsoleTextAttribute(
					stdOut,  BACKGROUND_INTENSITY );
				if(displayCB[7][7] == 0)
					cout << SQUARE[a][line];
				if(displayCB[7][7] == 11)
					cout << PAWN[a][line];
				if(displayCB[7][7] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[7][7] == 13)
					cout << BISHOP[a][line];
				if(displayCB[7][7] == 14)
					cout << ROOK[a][line];
				if(displayCB[7][7] == 15)
					cout << QUEEN[a][line];
				if(displayCB[7][7] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
				if(displayCB[7][7] == 1)
					cout << PAWN[a][line];
				if(displayCB[7][7] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[7][7] == 3)
					cout << BISHOP[a][line];
				if(displayCB[7][7] == 4)
					cout << ROOK[a][line];
				if(displayCB[7][7] == 5)
					cout << QUEEN[a][line];
				if(displayCB[7][7] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) // COLUMN H
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[8][7] == 0)
					cout << SQUARE[a][line];
				if(displayCB[8][7] == 11)
					cout << PAWN[a][line];
				if(displayCB[8][7] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[8][7] == 13)
					cout << BISHOP[a][line];
				if(displayCB[8][7] == 14)
					cout << ROOK[a][line];
				if(displayCB[8][7] == 15)
					cout << QUEEN[a][line];
				if(displayCB[8][7] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[8][7] == 1)
					cout << PAWN[a][line];
				if(displayCB[8][7] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[8][7] == 3)
					cout << BISHOP[a][line];
				if(displayCB[8][7] == 4)
					cout << ROOK[a][line];
				if(displayCB[8][7] == 5)
					cout << QUEEN[a][line];
				if(displayCB[8][7] == 6)
					cout << KING[a][line];
			}
			cout << endl;
			
		}
		//////////////////////////////////////////////////										    //
		//                 END  ROW 7				    //
		//////////////////////////////////////////////////
		
		//////////////////////////////////////////////////
		//                    ROW 6                     //
		//////////////////////////////////////////////////
		for(int row = 0; row < 4; row++)
		{
			int remainder = 0;
			for(int a = 0; a < 7; a++)
			{
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_BLUE |FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY);
				if(a == 3)
					cout << " "<< 6 - row <<" ";
				else
					cout << "   ";

				remainder = (6 - row) % 2;
				//EMPTY
				for(int line = 0; line < 11; line++) //COLUMN A
				{
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					}
					else
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_INTENSITY);
					//----------BLACK PIECES------------
					if(displayCB[1][6 - row] == 0)
						cout << SQUARE[a][line];
					if(displayCB[1][6 - row] == 11)
						cout << PAWN[a][line];
					if(displayCB[1][6 - row] == 12)
						cout << KNIGHT[a][line];
					if(displayCB[1][6 - row] == 13)
						cout << BISHOP[a][line];
					if(displayCB[1][6 - row] == 14)
						cout << ROOK[a][line];
					if(displayCB[1][6 - row] == 15)
						cout << QUEEN[a][line];
					if(displayCB[1][6 - row] == 16)
						cout << KING[a][line];
					//----------WHITE PIECES------------
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					}
					else
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_INTENSITY);
					if(displayCB[1][6 - row] == 1)
						cout << PAWN[a][line];
					if(displayCB[1][6 - row] == 2)
						cout << KNIGHT[a][line];
					if(displayCB[1][6 - row] == 3)
						cout << BISHOP[a][line];
					if(displayCB[1][6 - row] == 4)
						cout << ROOK[a][line];
					if(displayCB[1][6 - row] == 5)
						cout << QUEEN[a][line];
					if(displayCB[1][6 - row] == 6)
						cout << KING[a][line];
					//---------------------------------
				}
				for(int line = 0; line < 11; line++) //COLUMN B 
				{
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_INTENSITY);
					}
					else
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );

					//----------BLACK PIECES------------
					if(displayCB[2][6 - row] == 0)
						cout << SQUARE[a][line];
					if(displayCB[2][6 - row] == 11)
						cout << PAWN[a][line];
					if(displayCB[2][6 - row] == 12)
						cout << KNIGHT[a][line];
					if(displayCB[2][6 - row] == 13)
						cout << BISHOP[a][line];
					if(displayCB[2][6 - row] == 14)
						cout << ROOK[a][line];
					if(displayCB[2][6 - row] == 15)
						cout << QUEEN[a][line];
					if(displayCB[2][6 - row] == 16)
						cout << KING[a][line];
					//----------WHITE PIECES------------
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
					}
					else
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					if(displayCB[2][6 - row] == 1)
						cout << PAWN[a][line];
					if(displayCB[2][6 - row] == 2)
						cout << KNIGHT[a][line];
					if(displayCB[2][6 - row] == 3)
						cout << BISHOP[a][line];
					if(displayCB[2][6 - row] == 4)
						cout << ROOK[a][line];
					if(displayCB[2][6 - row] == 5)
						cout << QUEEN[a][line];
					if(displayCB[2][6 - row] == 6)
						cout << KING[a][line];
					//----------------------------------
				}
				for(int line = 0; line < 11; line++) //COLUMN C
				{
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					}
					else
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_INTENSITY);
					//----------BLACK PIECES------------
					if(displayCB[3][6 - row] == 0)
						cout << SQUARE[a][line];
					if(displayCB[3][6 - row] == 11)
						cout << PAWN[a][line];
					if(displayCB[3][6 - row] == 12)
						cout << KNIGHT[a][line];
					if(displayCB[3][6 - row] == 13)
						cout << BISHOP[a][line];
					if(displayCB[3][6 - row] == 14)
						cout << ROOK[a][line];
					if(displayCB[3][6 - row] == 15)
						cout << QUEEN[a][line];
					if(displayCB[3][6 - row] == 16)
						cout << KING[a][line];
					//----------WHITE PIECES------------
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					}
					else
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_INTENSITY);
					if(displayCB[3][6 - row] == 1)
						cout << PAWN[a][line];
					if(displayCB[3][6 - row] == 2)
						cout << KNIGHT[a][line];
					if(displayCB[3][6 - row] == 3)
						cout << BISHOP[a][line];
					if(displayCB[3][6 - row] == 4)
						cout << ROOK[a][line];
					if(displayCB[3][6 - row] == 5)
						cout << QUEEN[a][line];
					if(displayCB[3][6 - row] == 6)
						cout << KING[a][line];
					//------------------------------
				}
				for(int line = 0; line < 11; line++) //COLUMN D
				{
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_INTENSITY);
					}
					else
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					//----------BLACK PIECES------------
					if(displayCB[4][6 - row] == 0)
						cout << SQUARE[a][line];
					if(displayCB[4][6 - row] == 11)
						cout << PAWN[a][line];
					if(displayCB[4][6 - row] == 12)
						cout << KNIGHT[a][line];
					if(displayCB[4][6 - row] == 13)
						cout << BISHOP[a][line];
					if(displayCB[4][6 - row] == 14)
						cout << ROOK[a][line];
					if(displayCB[4][6 - row] == 15)
						cout << QUEEN[a][line];
					if(displayCB[4][6 - row] == 16)
						cout << KING[a][line];
					//----------WHITE PIECES-------------
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
					}
					else
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					if(displayCB[4][6 - row] == 1)
						cout << PAWN[a][line];
					if(displayCB[4][6 - row] == 2)
						cout << KNIGHT[a][line];
					if(displayCB[4][6 - row] == 3)
						cout << BISHOP[a][line];
					if(displayCB[4][6 - row] == 4)
						cout << ROOK[a][line];
					if(displayCB[4][6 - row] == 5)
						cout << QUEEN[a][line];
					if(displayCB[4][6 - row] == 6)
						cout << KING[a][line];
					//-----------------------------
				}
				for(int line = 0; line < 11; line++) //COLUMN E
				{
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					}
					else
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_INTENSITY);
					//----------BLACK PIECES------------
					if(displayCB[5][6 - row] == 0)
						cout << SQUARE[a][line];
					if(displayCB[5][6 - row] == 11)
						cout << PAWN[a][line];
					if(displayCB[5][6 - row] == 12)
						cout << KNIGHT[a][line];
					if(displayCB[5][6 - row] == 13)
						cout << BISHOP[a][line];
					if(displayCB[5][6 - row] == 14)
						cout << ROOK[a][line];
					if(displayCB[5][6 - row] == 15)
						cout << QUEEN[a][line];
					if(displayCB[5][6 - row] == 16)
						cout << KING[a][line];
					//----------WHITE PIECES-------------
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					}
					else
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_INTENSITY);
					if(displayCB[5][6 - row] == 1)
						cout << PAWN[a][line];
					if(displayCB[5][6 - row] == 2)
						cout << KNIGHT[a][line];
					if(displayCB[5][6 - row] == 3)
						cout << BISHOP[a][line];
					if(displayCB[5][6 - row] == 4)
						cout << ROOK[a][line];
					if(displayCB[5][6 - row] == 5)
						cout << QUEEN[a][line];
					if(displayCB[5][6 - row] == 6)
						cout << KING[a][line];
					//---------------------------------
				}
				for(int line = 0; line < 11; line++) //COLUMN F
				{
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_INTENSITY);
					}
					else
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					//----------BLACK PIECES------------
					if(displayCB[6][6 - row] == 0)
						cout << SQUARE[a][line];
					if(displayCB[6][6 - row] == 11)
						cout << PAWN[a][line];
					if(displayCB[6][6 - row] == 12)
						cout << KNIGHT[a][line];
					if(displayCB[6][6 - row] == 13)
						cout << BISHOP[a][line];
					if(displayCB[6][6 - row] == 14)
						cout << ROOK[a][line];
					if(displayCB[6][6 - row] == 15)
						cout << QUEEN[a][line];
					if(displayCB[6][6 - row] == 16)
						cout << KING[a][line];
					//----------WHITE PIECES------------
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
					}
					else
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					if(displayCB[6][6 - row] == 1)
						cout << PAWN[a][line];
					if(displayCB[6][6 - row] == 2)
						cout << KNIGHT[a][line];
					if(displayCB[6][6 - row] == 3)
						cout << BISHOP[a][line];
					if(displayCB[6][6 - row] == 4)
						cout << ROOK[a][line];
					if(displayCB[6][6 - row] == 5)
						cout << QUEEN[a][line];
					if(displayCB[6][6 - row] == 6)
						cout << KING[a][line];
					//------------------------------
				}
				for(int line = 0; line < 11; line++)//COLUMN G
				{if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					}
					else
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_INTENSITY);
					//----------BLACK PIECES------------
					if(displayCB[7][6 - row] == 0)
						cout << SQUARE[a][line];
					if(displayCB[7][6 - row] == 11)
						cout << PAWN[a][line];
					if(displayCB[7][6 - row] == 12)
						cout << KNIGHT[a][line];
					if(displayCB[7][6 - row] == 13)
						cout << BISHOP[a][line];
					if(displayCB[7][6 - row] == 14)
						cout << ROOK[a][line];
					if(displayCB[7][6 - row] == 15)
						cout << QUEEN[a][line];
					if(displayCB[7][6 - row] == 16)
						cout << KING[a][line];
					//----------WHITE PIECES------------
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					}
					else
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_INTENSITY);
					if(displayCB[7][6 - row] == 1)
						cout << PAWN[a][line];
					if(displayCB[7][6 - row] == 2)
						cout << KNIGHT[a][line];
					if(displayCB[7][6 - row] == 3)
						cout << BISHOP[a][line];
					if(displayCB[7][6 - row] == 4)
						cout << ROOK[a][line];
					if(displayCB[7][6 - row] == 5)
						cout << QUEEN[a][line];
					if(displayCB[7][6 - row] == 6)
						cout << KING[a][line];
					//---------------------------------
				}
				for(int line = 0; line < 11; line++)//COLUMN H
				{
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_INTENSITY);
					}
					else
						SetConsoleTextAttribute(
							stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					//----------BLACK PIECES------------
					if(displayCB[8][6 - row] == 0)
						cout << SQUARE[a][line];
					if(displayCB[8][6 - row] == 11)
						cout << PAWN[a][line];
					if(displayCB[8][6 - row] == 12)
						cout << KNIGHT[a][line];
					if(displayCB[8][6 - row] == 13)
						cout << BISHOP[a][line];
					if(displayCB[8][6 - row] == 14)
						cout << ROOK[a][line];
					if(displayCB[8][6 - row] == 15)
						cout << QUEEN[a][line];
					if(displayCB[8][6 - row] == 16)
						cout << KING[a][line];
					//----------WHITE PIECES-------------
					if(remainder == 0)
					{
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
					}
					else
						SetConsoleTextAttribute(
							stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY |BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
					if(displayCB[8][6 - row] == 1)
						cout << PAWN[a][line];
					if(displayCB[8][6 - row] == 2)
						cout << KNIGHT[a][line];
					if(displayCB[8][6 - row] == 3)
						cout << BISHOP[a][line];
					if(displayCB[8][6 - row] == 4)
						cout << ROOK[a][line];
					if(displayCB[8][6 - row] == 5)
						cout << QUEEN[a][line];
					if(displayCB[8][6 - row] == 6)
						cout << KING[a][line];
				}
					cout << endl;
			}
				
		}
		//|||||||||||||||||||||||||||||||||||||||||||||||||
		//                   END OF ROW 3                ||
		//|||||||||||||||||||||||||||||||||||||||||||||||||

		
		///////////////////////////////////////////////////
		//                      ROW 2                    //
		///////////////////////////////////////////////////
		for(int a = 0; a < 7; a++)
		{
			SetConsoleTextAttribute(
					stdOut, FOREGROUND_BLUE |FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY);
			if(a == 3)
				cout << " 2 ";
			else
				cout << "   ";
			//PAWNS
			for(int line = 0; line < 11; line++) //COLUMN A
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[1][2] == 0)
					cout << SQUARE[a][line];
				if(displayCB[1][2] == 11)
					cout << PAWN[a][line];
				if(displayCB[1][2] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[1][2] == 13)
					cout << BISHOP[a][line];
				if(displayCB[1][2] == 14)
					cout << ROOK[a][line];
				if(displayCB[1][2] == 15)
					cout << QUEEN[a][line];
				if(displayCB[1][2] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[1][2] == 1)
					cout << PAWN[a][line];
				if(displayCB[1][2] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[1][2] == 3)
					cout << BISHOP[a][line];
				if(displayCB[1][2] == 4)
					cout << ROOK[a][line];
				if(displayCB[1][2] == 5)
					cout << QUEEN[a][line];
				if(displayCB[1][2] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN B
			{
				
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_INTENSITY );
				if(displayCB[2][2] == 0)
					cout << SQUARE[a][line];
				if(displayCB[2][2] == 11)
					cout << PAWN[a][line];
				if(displayCB[2][2] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[2][2] == 13)
					cout << BISHOP[a][line];
				if(displayCB[2][2] == 14)
					cout << ROOK[a][line];
				if(displayCB[2][2] == 15)
					cout << QUEEN[a][line];
				if(displayCB[2][2] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
				if(displayCB[2][2] == 1)
					cout << PAWN[a][line];
				if(displayCB[2][2] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[2][2] == 3)
					cout << BISHOP[a][line];
				if(displayCB[2][2] == 4)
					cout << ROOK[a][line];
				if(displayCB[2][2] == 5)
					cout << QUEEN[a][line];
				if(displayCB[2][2] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN C
			{
				SetConsoleTextAttribute(
					stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[3][2] == 0)
					cout << SQUARE[a][line];
				if(displayCB[3][2] == 11)
					cout << PAWN[a][line];
				if(displayCB[3][2] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[3][2] == 13)
					cout << BISHOP[a][line];
				if(displayCB[3][2] == 14)
					cout << ROOK[a][line];
				if(displayCB[3][2] == 15)
					cout << QUEEN[a][line];
				if(displayCB[3][2] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[3][2] == 1)
					cout << PAWN[a][line];
				if(displayCB[3][2] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[3][2] == 3)
					cout << BISHOP[a][line];
				if(displayCB[3][2] == 4)
					cout << ROOK[a][line];
				if(displayCB[3][2] == 5)
					cout << QUEEN[a][line];
				if(displayCB[3][2] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN D
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_INTENSITY );
				if(displayCB[4][2] == 0)
					cout << SQUARE[a][line];
				if(displayCB[4][2] == 11)
					cout << PAWN[a][line];
				if(displayCB[4][2] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[4][2] == 13)
					cout << BISHOP[a][line];
				if(displayCB[4][2] == 14)
					cout << ROOK[a][line];
				if(displayCB[4][2] == 15)
					cout << QUEEN[a][line];
				if(displayCB[4][2] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
				if(displayCB[4][2] == 1)
					cout << PAWN[a][line];
				if(displayCB[4][2] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[4][2] == 3)
					cout << BISHOP[a][line];
				if(displayCB[4][2] == 4)
					cout << ROOK[a][line];
				if(displayCB[4][2] == 5)
					cout << QUEEN[a][line];
				if(displayCB[4][2] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN E
			{
				SetConsoleTextAttribute(
					stdOut,  BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[5][2] == 0)
					cout << SQUARE[a][line];
				if(displayCB[5][2] == 11)
					cout << PAWN[a][line];
				if(displayCB[5][2] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[5][2] == 13)
					cout << BISHOP[a][line];
				if(displayCB[5][2] == 14)
					cout << ROOK[a][line];
				if(displayCB[5][2] == 15)
					cout << QUEEN[a][line];
				if(displayCB[5][2] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[5][2] == 1)
					cout << PAWN[a][line];
				if(displayCB[5][2] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[5][2] == 3)
					cout << BISHOP[a][line];
				if(displayCB[5][2] == 4)
					cout << ROOK[a][line];
				if(displayCB[5][2] == 5)
					cout << QUEEN[a][line];
				if(displayCB[5][2] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN F
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_INTENSITY);
				
				if(displayCB[6][2] == 0)
					cout << SQUARE[a][line];
				if(displayCB[6][2] == 11)
					cout << PAWN[a][line];
				if(displayCB[6][2] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[6][2] == 13)
					cout << BISHOP[a][line];
				if(displayCB[6][2] == 14)
					cout << ROOK[a][line];
				if(displayCB[6][2] == 15)
					cout << QUEEN[a][line];
				if(displayCB[6][2] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
				if(displayCB[6][2] == 1)
					cout << PAWN[a][line];
				if(displayCB[6][2] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[6][2] == 3)
					cout << BISHOP[a][line];
				if(displayCB[6][2] == 4)
					cout << ROOK[a][line];
				if(displayCB[6][2] == 5)
					cout << QUEEN[a][line];
				if(displayCB[6][2] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)// COLUMN G
			{
				SetConsoleTextAttribute(
					stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[7][2] == 0)
					cout << SQUARE[a][line];
				if(displayCB[7][2] == 11)
					cout << PAWN[a][line];
				if(displayCB[7][2] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[7][2] == 13)
					cout << BISHOP[a][line];
				if(displayCB[7][2] == 14)
					cout << ROOK[a][line];
				if(displayCB[7][2] == 15)
					cout << QUEEN[a][line];
				if(displayCB[7][2] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[7][2] == 1)
					cout << PAWN[a][line];
				if(displayCB[7][2] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[7][2] == 3)
					cout << BISHOP[a][line];
				if(displayCB[7][2] == 4)
					cout << ROOK[a][line];
				if(displayCB[7][2] == 5)
					cout << QUEEN[a][line];
				if(displayCB[7][2] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) // COLUMN H
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_INTENSITY );
				if(displayCB[8][2] == 0)
					cout << SQUARE[a][line];
				if(displayCB[8][2] == 11)
					cout << PAWN[a][line];
				if(displayCB[8][2] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[8][2] == 13)
					cout << BISHOP[a][line];
				if(displayCB[8][2] == 14)
					cout << ROOK[a][line];
				if(displayCB[8][2] == 15)
					cout << QUEEN[a][line];
				if(displayCB[8][2] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
				if(displayCB[8][2] == 1)
					cout << PAWN[a][line];
				if(displayCB[8][2] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[8][2] == 3)
					cout << BISHOP[a][line];
				if(displayCB[8][2] == 4)
					cout << ROOK[a][line];
				if(displayCB[8][2] == 5)
					cout << QUEEN[a][line];
				if(displayCB[8][2] == 6)
					cout << KING[a][line];
			}
			cout << endl;
			
		}
		//////////////////////////////////////////
		//             END ROW 2                //
		//////////////////////////////////////////


		//////////////////////////////////////////
		//                 ROW 1                //
		//////////////////////////////////////////
		for(int a = 0; a < 7; a++)
		{
			SetConsoleTextAttribute(
					stdOut,   FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY );
			if(a == 3)
					cout << " 1 ";
			else
				cout << "   ";
			for(int line = 0; line < 11; line++) //COLUMN A
			{
				SetConsoleTextAttribute(
					stdOut,  BACKGROUND_INTENSITY );
				//----------BLACK PIECES-------------
				if(displayCB[1][1] == 0)
					cout << SQUARE[a][line];
				if(displayCB[1][1] == 11)
					cout << PAWN[a][line];
				if(displayCB[1][1] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[1][1] == 13)
					cout << BISHOP[a][line];
				if(displayCB[1][1] == 14)
					cout << ROOK[a][line];
				if(displayCB[1][1] == 15)
					cout << QUEEN[a][line];
				if(displayCB[1][1] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY );
				if(displayCB[1][1] == 1)
					cout << PAWN[a][line];
				if(displayCB[1][1] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[1][1] == 3)
					cout << BISHOP[a][line];
				if(displayCB[1][1] == 4)
					cout << ROOK[a][line];
				if(displayCB[1][1] == 5)
					cout << QUEEN[a][line];
				if(displayCB[1][1] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN B
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[2][1] == 0)
					cout << SQUARE[a][line];
				if(displayCB[2][1] == 11)
					cout << PAWN[a][line];
				if(displayCB[2][1] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[2][1] == 13)
					cout << BISHOP[a][line];
				if(displayCB[2][1] == 14)
					cout << ROOK[a][line];
				if(displayCB[2][1] == 15)
					cout << QUEEN[a][line];
				if(displayCB[2][1] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[2][1] == 1)
					cout << PAWN[a][line];
				if(displayCB[2][1] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[2][1] == 3)
					cout << BISHOP[a][line];
				if(displayCB[2][1] == 4)
					cout << ROOK[a][line];
				if(displayCB[2][1] == 5)
					cout << QUEEN[a][line];
				if(displayCB[2][1] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN C
			{
				SetConsoleTextAttribute(
					stdOut,  BACKGROUND_INTENSITY );
				if(displayCB[3][1] == 0)
					cout << SQUARE[a][line];
				if(displayCB[3][1] == 11)
					cout << PAWN[a][line];
				if(displayCB[3][1] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[3][1] == 13)
					cout << BISHOP[a][line];
				if(displayCB[3][1] == 14)
					cout << ROOK[a][line];
				if(displayCB[3][1] == 15)
					cout << QUEEN[a][line];
				if(displayCB[3][1] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY );
				if(displayCB[3][1] == 1)
					cout << PAWN[a][line];
				if(displayCB[3][1] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[3][1] == 3)
					cout << BISHOP[a][line];
				if(displayCB[3][1] == 4)
					cout << ROOK[a][line];
				if(displayCB[3][1] == 5)
					cout << QUEEN[a][line];
				if(displayCB[3][1] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++) //COLUMN D
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[4][1] == 0)
					cout << SQUARE[a][line];
				if(displayCB[4][1] == 11)
					cout << PAWN[a][line];
				if(displayCB[4][1] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[4][1] == 13)
					cout << BISHOP[a][line];
				if(displayCB[4][1] == 14)
					cout << ROOK[a][line];
				if(displayCB[4][1] == 15)
					cout << QUEEN[a][line];
				if(displayCB[4][1] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[4][1] == 1)
					cout << PAWN[a][line];
				if(displayCB[4][1] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[4][1] == 3)
					cout << BISHOP[a][line];
				if(displayCB[4][1] == 4)
					cout << ROOK[a][line];
				if(displayCB[4][1] == 5)
					cout << QUEEN[a][line];
				if(displayCB[4][1] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN E
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_INTENSITY);
				if(displayCB[5][1] == 0)
					cout << SQUARE[a][line];
				if(displayCB[5][1] == 11)
					cout << PAWN[a][line];
				if(displayCB[5][1] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[5][1] == 13)
					cout << BISHOP[a][line];
				if(displayCB[5][1] == 14)
					cout << ROOK[a][line];
				if(displayCB[5][1] == 15)
					cout << QUEEN[a][line];
				if(displayCB[5][1] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY );
				if(displayCB[5][1] == 1)
					cout << PAWN[a][line];
				if(displayCB[5][1] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[5][1] == 3)
					cout << BISHOP[a][line];
				if(displayCB[5][1] == 4)
					cout << ROOK[a][line];
				if(displayCB[5][1] == 5)
					cout << QUEEN[a][line];
				if(displayCB[5][1] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN F
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[6][1] == 0)
					cout << SQUARE[a][line];
				if(displayCB[6][1] == 11)
					cout << PAWN[a][line];
				if(displayCB[6][1] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[6][1] == 13)
					cout << BISHOP[a][line];
				if(displayCB[6][1] == 14)
					cout << ROOK[a][line];
				if(displayCB[6][1] == 15)
					cout << QUEEN[a][line];
				if(displayCB[6][1] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[6][1] == 1)
					cout << PAWN[a][line];
				if(displayCB[6][1] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[6][1] == 3)
					cout << BISHOP[a][line];
				if(displayCB[6][1] == 4)
					cout << ROOK[a][line];
				if(displayCB[6][1] == 5)
					cout << QUEEN[a][line];
				if(displayCB[6][1] == 6)
					cout << KING[a][line];
			}
			for(int line = 0; line < 11; line++)//COLUMN G
			{
				SetConsoleTextAttribute(
					stdOut,   BACKGROUND_INTENSITY );
				if(displayCB[7][1] == 0)
					cout << SQUARE[a][line];
				if(displayCB[7][1] == 11)
					cout << PAWN[a][line];
				if(displayCB[7][1] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[7][1] == 13)
					cout << BISHOP[a][line];
				if(displayCB[7][1] == 14)
					cout << ROOK[a][line];
				if(displayCB[7][1] == 15)
					cout << QUEEN[a][line];
				if(displayCB[7][1] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY );
				if(displayCB[7][1] == 1)
					cout << PAWN[a][line];
				if(displayCB[7][1] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[7][1] == 3)
					cout << BISHOP[a][line];
				if(displayCB[7][1] == 4)
					cout << ROOK[a][line];
				if(displayCB[7][1] == 5)
					cout << QUEEN[a][line];
				if(displayCB[7][1] == 6)
					cout << KING[a][line];
				//----------WHITE PIECES------
			}
			for(int line = 0; line < 11; line++)//COLUMN H
			{
				SetConsoleTextAttribute(
					stdOut, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
				if(displayCB[8][1] == 0)
					cout << SQUARE[a][line];
				if(displayCB[8][1] == 11)
					cout << PAWN[a][line];
				if(displayCB[8][1] == 12)
					cout << KNIGHT[a][line];
				if(displayCB[8][1] == 13)
					cout << BISHOP[a][line];
				if(displayCB[8][1] == 14)
					cout << ROOK[a][line];
				if(displayCB[8][1] == 15)
					cout << QUEEN[a][line];
				if(displayCB[8][1] == 16)
					cout << KING[a][line];
				//----------WHITE PIECES--------------
				SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED );
				if(displayCB[8][1] == 1)
					cout << PAWN[a][line];
				if(displayCB[8][1] == 2)
					cout << KNIGHT[a][line];
				if(displayCB[8][1] == 3)
					cout << BISHOP[a][line];
				if(displayCB[8][1] == 4)
					cout << ROOK[a][line];
				if(displayCB[8][1] == 5)
					cout << QUEEN[a][line];
				if(displayCB[8][1] == 6)
					cout << KING[a][line];
			}
			cout << endl;
		}
		////////////////////////////////////////
		//            END ROW 1               //
		////////////////////////////////////////
		SetConsoleTextAttribute(
					stdOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY );

		cout << "\ta\t   b\t      c\t\t d\t    e\t       f\t  g\t     h     \n";
		 
		menu(); 
 
	}		
}