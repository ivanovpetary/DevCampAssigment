#include "LetterM.h"

#include <iostream>
using namespace std;

// Function creating upper part of the letter M
void UpperPartM(int usr_num, int row)
{
	int emptySpace, letterPart;

	for (emptySpace = 0; emptySpace < usr_num - row; emptySpace++)
		cout << "-";
	for (letterPart = 0; letterPart < usr_num + (row * 2); letterPart++)
		cout << "*";
	for (emptySpace = 0; emptySpace < usr_num - (row * 2); emptySpace++)
		cout << "-";
	for (letterPart = 0; letterPart < usr_num + (row * 2); letterPart++)
		cout << "*";
	for (emptySpace = 0; emptySpace < usr_num - row; emptySpace++)
		cout << "-";

}

// Function creating bottom part of the letter M
void BottomPartM(int usr_num, int row)
{
	int emptySpace, letterPart;

	for (emptySpace = 0; emptySpace < usr_num - row; emptySpace++)
		cout << "-";
	for (letterPart = 0; letterPart < usr_num; letterPart++)
		cout << "*";
	for (emptySpace = 0; emptySpace < (row * 2) - usr_num; emptySpace++)
		cout << "-";
	for (letterPart = 0; letterPart < usr_num + ((usr_num - row) * 2); letterPart++)
		cout << "*";
	for (emptySpace = 0; emptySpace < (row * 2) - usr_num; emptySpace++)
		cout << "-";
	for (letterPart = 0; letterPart < usr_num; letterPart++)
		cout << "*";
	for (emptySpace = 0; emptySpace < usr_num - row; emptySpace++)
		cout << "-";
}

// Function for printing letter M
void logo_print_m(int usr_num)
{
	int i;

	for (i = 0; i <= usr_num; i++)
		if (i < (usr_num + 1) / 2)
		{
			UpperPartM(usr_num, i);
			cout << endl;
		}
		else
		{
			BottomPartM(usr_num, i);
			cout << endl;
		}
}