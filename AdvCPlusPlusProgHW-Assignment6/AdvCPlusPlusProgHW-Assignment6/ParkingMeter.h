// Spec file for ParkingMeter class
#ifndef PARKING_METER_H
#define PARKING_METER_H
#include "stdafx.h"
#include <iostream>
using namespace std;

// ParkingMeter class
class ParkingMeter
{
private:
	int minutesPurchased; // # of minutes purchased

public:
	// Default constructor function
	ParkingMeter()
	{ minutesPurchased = 0; }

	// Constructor function
	ParkingMeter(int m)
	{ minutesPurchased = m; }

	// Mutator function
	void setMinutesPurchased(int m)
	{ minutesPurchased = m;}

	// Accessor function
	int getMinutesPurchased() const
	{ return minutesPurchased; }

	//print function
	void print()
	{ cout << "Meter Information:" << endl;
	  cout << "\tMinutes Purchased: "
		  << minutesPurchased << "\n";
	}
};

#endif