//temperature program
//this program guides a technician as he checks temperatures in celcius 
//Programmer: Zachary Murphy on 3-15-2017
//CPT-180

#include <iostream>
#include<conio.h>
#include<iomanip>


using namespace std;

//press any key to continue method. 
void  check()
{
	char chk; int j;
	cout << "\n\nPress any key to continue once you have waited five minutes...\n";
	chk = _getch();
	j = chk;
	for (int i = 1; i <= 256; i++)
		if (i == j) break;
}
int main() {
	//declaration
	double temp;

	//intro
	cout << "****************************************************************************\n";
	cout << "\t\t\t Temperature Saftey\n";
	cout << "You will check the temperature of the substance in the vat.\n";
	cout << "This program will then output the appropriate action, based off your input.\n";
	

	//get temperature from user
	cout << "Please input the temperature in degrees celcius: ";
	cin >> temp;
	cout << endl;

	//loop if greater than 102.5 celcius
	while (temp > 102.5) {
		cout << "WARNING: Temperature is too high! \n";
		cout << "Please turn down the thermostat and wait five minutes.\n";
		check();
		cout << "Please input the temperature again: ";
		cin >> temp;
	}
	//all is safe, see you in 15 min.
	cout << "Please check the temperature again in fifteen minutes, and run this again.\n";
	cout << "****************************************************************************\n";
	
	//allow user to exit
	cout << "Please press any key to exit...";
	_getch();
	return 0;
}