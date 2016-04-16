// Specification file for PoliceOfficer class
#ifndef POLICE_OFFICER_H
#define POLICE_OFFICER_H
#include "stdafx.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

// PoliceOfficer class
class PoliceOfficer
{
private:
	string name;			// Officer's name
	string badgeNumber;		// Badge Number
	ParkingTicket *ticket;	// Pointer for a ParkingTicket object

public:
	// Default Constructor function
	PoliceOfficer()
	{ name = ""; badgeNumber = ""; ticket = NULL; }

	//Constructor function
	PoliceOfficer(string n, string bn)
	{
		name = n;
		badgeNumber = bn;
		ticket = NULL;
	}

	// Copy constructor function
	PoliceOfficer(const PoliceOfficer &officer2)
	{
		name = officer2.name;
		badgeNumber = officer2.badgeNumber;
		ticket = new ParkingTicket(*officer2.ticket);
	}

	// Mutator functions
	void setName(string n)
	{
		name = n;
	}
	void setBadgeNumber(string b)
	{
		badgeNumber = b;
	}
	//Accessor functions
	string getName()
	{
		return name;
	}
	string setBadgeNumber()
	{
		return badgeNumber;
	}
	//patrol function
	ParkingTicket *patrol(ParkedCar, ParkingMeter);

	// print function
	void print();
};
#endif
