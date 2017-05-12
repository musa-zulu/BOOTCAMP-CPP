// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "TicTacToe.h"
//#include "TicTacToe_Cpp.h"


#include <iostream> 
#include <iomanip> 
#include <stdio.h>
using namespace std;


void ShowBoard(void);
string GetMoves();
void PlayGame(void);
bool Winner();

int main()
{
	ShowBoard();
	PlayGame();
	/*TicTacToe game;
	game.Init();
	game.ShowBoard();*/
	cin.get();
	return 0;
}

void ShowBoard(void)
{
	cout << setw(4) << "A" << setw(8) << "B" << setw(7) << "C" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (int a = 0; a < 3; a++)
	{		
		cout << a << setw(1) << "|" << setw(6) << "|" << setw(8) << "|" << setw(6) << "|" << endl;		
		cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;		
	}
}




void PlayGame(void)
{
	char coord;
	int value1;


	cout << "Please enter (A, B, or C) : ";
	cin >> coord;

	cout << "Please enter (0, 1, or 2) : ";
	cin >> value1;

	cout << setw(4) << "A" << setw(8) << "B" << setw(7) << "C" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;


	if (coord == 'A' || coord == 'a' && value1 == 0)
	{		
		for (int a = 0; a < 3; a++)
		{
			cout << a << setw(1) << "|" << " O "  << setw(6) << "|" << setw(8) << "|" << setw(6) << "|" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
	}

}

bool Winner()
{
	return true; // still to be coded
}