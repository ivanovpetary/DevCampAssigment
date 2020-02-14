#include <iostream>
#include "ctype.h"

#include "LetterW.h"
#include "LetterM.h"

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

// Function for picking letter for print
char pick_letter_for_print(char letterPrint)
{
	while (true)
	{
		cout << "Please pick letter to print! \n";
		cin >> letterPrint;

		if (isalpha(letterPrint))
		{
			return letterPrint;
		}
		else
		{
			cout << "Please pick a LETTER! \n";
			continue;
		}

	}


	return letterPrint;
}
// This is the main function
int main()
{
	int usr_num = 0;
	char letterPrint{ ' ' };

	usr_num = get_user_number(usr_num);
	letterPrint = pick_letter_for_print(letterPrint);

	cout << "N";
	cout << " = ";
	cout << usr_num;
	cout << endl;
	cout << "You pick letter: ";
	cout << letterPrint;
	cout << endl;
	cout << endl;

	if (letterPrint == 'm' || letterPrint == 'M')
	{
		logo_print_m(usr_num);
	}
	else if (letterPrint == 'w' || letterPrint == 'W')
	{
		logo_print_w(usr_num);
	}
	else
	{
		cout << "Still in devolepment! \n";
	}

	system("pause");
	return 0;
}