#include "LetterN.h"

#include <iostream>
using namespace std;

// Function creating upper part of the letter N
void UpperPartN(int usr_num, int row)
{
	int emptySpace, letterPart;

	for (emptySpace = 0; emptySpace < usr_num + (row * 2); emptySpace++)
		cout << "*";
	for (letterPart = 0; letterPart < usr_num - (row * 2); letterPart++)
		cout << "-";
	for (emptySpace = 0; emptySpace < usr_num ; emptySpace++)
		cout << "*";

}

// Function creating bottom part of the letter N
void BottomPartN(int usr_num, int row)
{
	int emptySpace, letterPart;

	for (emptySpace = 0; emptySpace < usr_num; emptySpace++)
		cout << "*";
	for (letterPart = 0; letterPart < usr_num - ((usr_num - row) * 2); letterPart++)
		cout << "-";
	for (emptySpace = 0; emptySpace < usr_num + ((usr_num - row) * 2); emptySpace++)
		cout << "*";
}

// Function for printing letter N
void logo_print_n(int usr_num)
{
	int i;

	for (i = 0; i <= usr_num; i++)
		if (i < (usr_num + 1) / 2)
		{
			UpperPartN(usr_num, i);
			cout << endl;
		}
		else
		{
			BottomPartN(usr_num, i);
			cout << endl;
		}
}