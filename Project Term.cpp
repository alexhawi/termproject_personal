// Project Term.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void random()
{
	string adm, name, gender;
	char choice;

	cout << "Choose one of the three?\n"
		<< "1. Output Names\n"
		<< "2. Shuffle\n"
		<< "3. Exit\n";

	system("pause");

	cout << "Enter Choice: \n";
	cin >> choice;

	switch (choice)
	{
	case '1': {
		ifstream icsa("inputICS.csv");

		if (!icsa.is_open())
			cout << "File non existent\n";



		while (icsa.good())
		{
			getline(icsa, adm, '|');
			getline(icsa, name, '|');
			getline(icsa, gender, '|');

			cout << adm << name << gender << "\n";
		}
		break;
	}


	case '2': {

		break;
	}
	case '3': {
		exit(0);
		break;
	}
	default: {
		cout << "Enter valid choice! \n";
		cin >> choice;
		break;
	}
	}

	system("pause");
	system("cls");

}
