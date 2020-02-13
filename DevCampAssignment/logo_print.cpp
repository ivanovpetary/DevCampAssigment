#include <iostream>
using namespace std;

// Function for getting and checking user entered number
int get_user_number(int usr_num)
{
	while (true) {
		cout << "Enter odd number between 2 and 10 000: \n";
		cin >> usr_num;
		if (usr_num > 2 && usr_num < 10000 && usr_num % 2) {
			return usr_num;
		}
		else {
			cout << "Number is not in the range. Please enter new number! \n";
			continue;
		}
	}
}

// Function creating upper part of the letter M
void UpperPart(int usr_num, int row)
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
void BottomPart(int usr_num, int row)
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

// Function for printing the logo MM
void logo_print(int usr_num)
{
	int i;

	for (i = 0; i <= usr_num; i++)
		if (i < (usr_num + 1) / 2)
		{
			UpperPart(usr_num, i);
			UpperPart(usr_num, i);
			cout << endl;
		}
		else
		{
			BottomPart(usr_num, i);
			BottomPart(usr_num, i);
			cout << endl;
		}
}

// This is the main function
int main()
{
	int usr_num = 0;

	usr_num = get_user_number(usr_num);

	cout << "N";
	cout << " = ";
	cout << usr_num;
	cout << endl;

	logo_print(usr_num);

	system("pause");
	return 0;
}