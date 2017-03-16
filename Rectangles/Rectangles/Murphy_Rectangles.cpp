//This program calculates the area of two recntangles dimensions per user input
//Then it will determine and output to the user which rectangle is bigger or if both are the same
//Programmer: Zach Murphy on 3-15-2017
//CPT-180

#include <iostream>
#include <conio.h>
#include<iomanip>

using namespace std;

int main() {
	//vairbale declarations
	double lOne, wOne, lTwo, wTwo, areaOne, areaTwo;

	//intro
	cout << "**********************************************************************************************\n";
	cout << "\t\t\tLarger Rectangle\n";
	cout << "You will be asked to input two rectangles dimensions.\n";
	cout << "The program will determine which is the lager rectangle by area.\n\n";

	//get input for rec 1
	cout << "First rectangle dimensions...\n";
	cout << "Please input the length of rectangle 1: ";
	cin >> lOne;
	cout << "Please input the width of rectangle 1: ";
	cin >> wOne;
	cout << "\n";

	//get input for rec 2
	cout << "Second rectangle dimensions...\n";
	cout << "Please input the length of rectangle 2: ";
	cin >> lTwo;
	cout << "Please input the width of rectangle 2: ";
	cin >> wTwo;
	cout << "\n";

	//calculate areas
	areaOne = lOne * wOne;
	areaTwo = lTwo * wTwo;

	//output result
	cout << "\t\t\tResults:\n";
	cout << "Area of rectangle one is " << areaOne << " and area of rectangle two is " << areaTwo << " .\n";
	if (areaOne > areaTwo) {//rectangle one is greater
		cout << "Rectangle one is greater than rectangle two.\n";
	}
	else if (areaTwo > areaOne) {//rectangle two is greater
		cout << "Rectangle two is greater than rectangle one.\n";
	}
	else {//equal
		cout << "Both rectangles are of equal value.\n";
	}
	cout << "**********************************************************************************************\n";

	cout << "Press any key to exit";
	_getch();
	return 0;
}