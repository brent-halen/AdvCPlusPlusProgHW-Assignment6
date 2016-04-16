// Implementation file for ParkingTicket
#include "stdafx.h"
#include "ParkingTicket.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Default constructor function
ParkingTicket::ParkingTicket()
{
	fine = 0.0;
	minutes = 0;
}

// Constructor function
ParkingTicket::ParkingTicket(ParkedCar aCar, int min)
{
	car = aCar;
	minutes = min;
	// Calculate fine
	calculateFine();
}

//Copy constructor function
ParkingTicket::ParkingTicket(const ParkingTicket &ticket2)
{
	car = ticket2.car;
	fine = ticket2.fine;
}

//calculateFine method for determining fine amount.
void ParkingTicket::calculateFine()
{
	//Get time parked in # of hours.
	double hours = minutes / 60.0;
	//get hours as int.
	int hoursAsInt = static_cast<int>(hours);
	//Round up for partial hours.
	if ((hours - hoursAsInt) > 0)
		hoursAsInt++;
	//Set the base fine
	fine = BASE_FINE;
	//Add additional hourly fine.
	fine += (hoursAsInt * HOURLY_FINE);
}

//print function
void ParkingTicket::print()
{
	//Print car information.
	car.print();
	//Print ticket info.
	cout << "Ticket Information:" << endl;
	cout << "\tMinutes attributed to violation: " << minutes << "\n";
	cout << "\tFine: $" << setprecision(2) << fixed << showpoint << fine << "\n";
}