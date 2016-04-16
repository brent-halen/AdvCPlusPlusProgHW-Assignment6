// Implementation file for PoliceOfficer
// Though I thought I remembered that the ones who dolled out those tickets were meter maids VS police officers.
// What'd this police officer do to get a demotion like this?
// Wait, nevermind. I don't think I wanna know.
#include "stdafx.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include <iostream>
using namespace std;

// Patrol function.
// Returns a parking ticket pointer if the car has been parked longer than the # of minutes purchased. 
ParkingTicket* PoliceOfficer::patrol(ParkedCar car, ParkingMeter meter)
{
	//Get # of minutes over limit
	int illegalMinutes = car.getMinutesParked() - meter.getMinutesPurchased();

	//Set if conditional for illegally parked cars. 
	if(illegalMinutes > 0)
	{
		// If conditional returns new parking ticket pointer.
		ticket = new ParkingTicket(car, illegalMinutes);
	}
	// Return ticket.
	return ticket;
}

// Print function
void PoliceOfficer::print()
{
	cout << "Police Officer Information:" << endl;
	cout << "\tName: " << name << endl;
	cout << "\tBadge Number: " << badgeNumber << endl;
}
