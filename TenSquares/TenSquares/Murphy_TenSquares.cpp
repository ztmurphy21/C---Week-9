//This program displays a list of numbers and their squares.
//cpt-180
//Zachary Murphy on 3-15-2017

#include <iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main() {
	//declarations
	int maxNum, minNum;

	//intro
	cout << "**********************************************************************************\n";
	cout << "\t\t\t Squares Calculators\n";
	cout << "You will input a min and max number.\n";
	cout << "This program will calculate the squared values of all numbers within that range.\n";
	
	//get min
	cout << "Please input the starting number to square: ";
	cin >> minNum;


	//get max
	cout << "Please input the ending number to square: ";
	cin >> maxNum;

	cout << "\t\t\t Results:\n";

	//counter
	int num = minNum;

	//output
	cout << "\t\t\tNumber\t\tNumber Squared\n";
	cout << "\t\t\t---------------------------------\n";
	while (num <= maxNum) {
		cout << "\t\t\t" << num << "\t\t" << (num*num) << endl;
		num++; //increment the counter
	}
	cout << "**********************************************************************************\n";
	
	//allow user to exit.
	cout << "Press any key to exit...";

	_getch();
	return 0;
	
}