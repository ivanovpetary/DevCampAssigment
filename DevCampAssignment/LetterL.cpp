#include "LetterL.h"

#include <iostream>
using namespace std;

// Function creating upper part of the letter L
void UpperPartL(int usr_num, int row)
{
	int emptySpace, letterPart;

	for (emptySpace = 0; emptySpace < usr_num; emptySpace++)
		cout << "-";
	for (letterPart = 0; letterPart < usr_num; letterPart++)
		cout << "*";
	for (emptySpace = 0; emptySpace < usr_num; emptySpace++)
		cout << "-";
	for (emptySpace = 0; emptySpace < usr_num; emptySpace++)
		cout << "-";
}

// Function creating bottom part of the letter L
void BottomPartL(int usr_num, int row)
{
	int emptySpace, letterPart;

	for (emptySpace = 0; emptySpace < usr_num; emptySpace++)
		cout << "-";
	for (letterPart = 0; letterPart < usr_num; letterPart++)
		cout << "*";
	for (emptySpace = 0; emptySpace < usr_num; emptySpace++)
		cout << "*";
	for (emptySpace = 0; emptySpace < usr_num; emptySpace++)
		cout << "-";
}

// Function for printing letter L
void logo_print_l(int usr_num)
{
	int i;

	for (i = 0; i <= usr_num; i++)
		if (i < ((usr_num + 1) / 2 + 1))
		{
			UpperPartL(usr_num, i);
			cout << endl;
		}
		else
		{
			BottomPartL(usr_num, i);
			cout << endl;
		}
}