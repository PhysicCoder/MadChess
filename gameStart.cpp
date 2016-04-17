#include "gameStart.h"


namespace GameStart
{

	Start::Start()
	{/*Empty Constructor*/}

	void Start::askName()
	{
		cout << "Please enter your name Player1 :";
		cin >> name1;

		cout << "\n\n";

		cout << "Please enter your name Player2 :";
		cin >> name2;
	}

	void Start::setInitialBoard()
	{
		const char lettas[8] = {'a','b','c','d','e','f','g','h'}; // added letters to display
	//initial ChessBoard Layout DATA
	/*8*/	iCB[1][8]=p2.ROOK;iCB[2][8]=p2.KNIGHT;iCB[3][8]=p2.BISHOP;iCB[4][8]=p2.QUEEN;iCB[5][8]=p2.KING;iCB[6][8]=p2.BISHOP;iCB[7][8]=p2.KNIGHT;iCB[8][8]=p2.ROOK;
	/*7*/	iCB[1][7]=p2.PAWN;iCB[2][7]=p2.PAWN;  iCB[3][7]=p2.PAWN;  iCB[4][7]=p2.PAWN; iCB[5][7]=p2.PAWN;iCB[6][7]=p2.PAWN;  iCB[7][7]=p2.PAWN;  iCB[8][7]=p2.PAWN;
	/*6*/	iCB[1][6]=EMPTY;	 iCB[2][6]=EMPTY;	iCB[3][6]=EMPTY;	   iCB[4][6]=EMPTY;	 iCB[5][6]=EMPTY;  iCB[6][6]=EMPTY;	 iCB[7][6]=EMPTY;	iCB[8][6]=EMPTY;
	/*5*/	iCB[1][5]=EMPTY;	 iCB[2][5]=EMPTY;	iCB[3][5]=EMPTY;	   iCB[4][5]=EMPTY;	 iCB[5][5]=EMPTY;  iCB[6][5]=EMPTY;	 iCB[7][5]=EMPTY;	iCB[8][5]=EMPTY;
	/*4*/	iCB[1][4]=EMPTY;	 iCB[2][4]=EMPTY;	iCB[3][4]=EMPTY;	   iCB[4][4]=EMPTY;	 iCB[5][4]=EMPTY;  iCB[6][4]=EMPTY;	 iCB[7][4]=EMPTY;	iCB[8][4]=EMPTY;
	/*3*/	iCB[1][3]=EMPTY;	 iCB[2][3]=EMPTY;	iCB[3][3]=EMPTY;    iCB[4][3]=EMPTY;	 iCB[5][3]=EMPTY;  iCB[6][3]=EMPTY;	 iCB[7][3]=EMPTY;	iCB[8][3]=EMPTY;
	/*2*/	iCB[1][2]=p1.PAWN;iCB[2][2]=p1.PAWN;  iCB[3][2]=p1.PAWN;  iCB[4][2]=p1.PAWN; iCB[5][2]=p1.PAWN;iCB[6][2]=p1.PAWN;  iCB[7][2]=p1.PAWN;	iCB[8][2]=p1.PAWN;
	/*1*/	iCB[1][1]=p1.ROOK;iCB[2][1]=p1.KNIGHT;iCB[3][1]=p1.BISHOP;iCB[4][1]=p1.QUEEN;iCB[5][1]=p1.KING;iCB[6][1]=p1.BISHOP;iCB[7][1]=p1.KNIGHT;iCB[8][1]=p1.ROOK;
	//          a                b                  c                  d                 e                f                  g                  h

	
	cout << endl;
	/*
	cout << setw(30) << "MAD CHESS!!!" << endl; // basically title
	cout << setw(30) << "------------" << endl;
		for(int row = 8; row >= 1; row--)
		{
			cout << setw(5) << row << "|" << setw(5);
			for(int col = 1; col <= 8; col++)
			{
				cout << iCB[col][row] << setw(5);
			}
			cout << endl;
		}
		cout << "      ----------------------------------------" << endl;
		cout << "     ";
		for(int letters = 0; letters < 8; letters++)
		{
		cout << setw(5) << lettas[letters];
		}
		cout << endl;
		cout << endl;*/
	}
	//char Start::getWhiteName()
	//{
	//	return name1;
	//}
	//char Start::getBlackName()
	//{
	//	//return name2;
	//}
}
