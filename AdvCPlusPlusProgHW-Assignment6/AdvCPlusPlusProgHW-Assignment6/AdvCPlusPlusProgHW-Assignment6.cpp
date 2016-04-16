// AdvCPlusPlusProgHW-Assignment6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;


int main()
{
	// Initialize char variables for user interface mode.
	char play = 'y';
	char again = 'y';
	// Initialize string and int variables for user mode.
	string usermake, useryear, usercol, userplate;
	int userparkmin, usermetmin;
	// Initialize poitner for parking ticket issued.
	ParkingTicket *ticket = NULL;;
	
	// Create a ParkedCar object.
	ParkedCar car("Dodge", "1969", "Black", "643HBS3", 86);

	// Create a Parkingmeter object.
	ParkingMeter meter(60);

	//Create PoliceOfficer object.
	PoliceOfficer officer("Judge Dredd", "1337");

	// Have officer patrol.
	ticket = officer.patrol(car, meter);
	if (ticket != NULL)
	{
		// Display officer info
		officer.print();
		// Display ticket info
		ticket->print();
		// Delete ticket once finished.
		delete ticket;
		ticket = NULL;
	}
	else
		cout << "This citizen has not committed a crime. Put the gun away." << endl;
	system("pause");
	cout << endl;
	cout << "Well, that was a nice little demo. Would you like to try it yourself?"<< endl;
	cout << "Please enter 'y' to continue, or any other character to close the program." << endl;
	cout << ">>>>>>>>>>    ";
	cin >> play;
	if(tolower(play) == 'y')
	{
		do{
			cout << "\nPlease enter the information when prompted. \nWhat is the Make of the vehicle?: ";
			cin >> usermake;
			cin.ignore();
			cout << "\nWhat is the year of the vehicle?: ";
			cin >> useryear;
			cin.ignore();
			cout << "\nWhat color is the vehicle?: ";
			cin >> usercol;
			cin.ignore();
			cout << "\nWhat is the license plate #?: ";
			cin >> userplate;
			cin.ignore();
			cout << "\nHow many minutes has it been parked?: ";
			cin >> userparkmin;
			cin.ignore();
			cout << "\nHow many minutes had the vehicle purchased from the meter?: ";
			cin >> usermetmin;
			cin.ignore();
			// Create a ParkedCar object.
			ParkedCar car(usermake, useryear, usercol, userplate, userparkmin);

			// Create a Parkingmeter object.
			ParkingMeter meter(usermetmin);

			// Have officer patrol.
			ticket = officer.patrol(car, meter);
			if (ticket != NULL)
			{
				// Display officer info
				officer.print();
				// Display ticket info
				ticket->print();
				// Delete ticket once finished.
				delete ticket;
				ticket = NULL;
			}
			else
			cout << "\nThis citizen has not committed a crime. Put the gun away." << endl;
			system("pause");
			cout << "\nWell, that was fun. Would you like to go again?" << endl;
			cout << "Please enter 'y' to continue and any other character to quit." << endl;
			cout << ">>>>>>>>     ";
			cin >> again;
			cin.ignore();
			if(tolower(again)=='y')
				system("cls");
		}while(tolower(again)=='y');
	}
	

	return 0;
}

