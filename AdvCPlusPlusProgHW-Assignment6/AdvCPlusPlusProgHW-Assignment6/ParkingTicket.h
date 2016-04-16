// Specification file for ParkingTicket class
#ifndef PARKING_TICKET_H
#define PARKING_TICKET_H
#include "stdafx.h"
#include "ParkedCar.h"

// Constant for base fine amount.
const double BASE_FINE = 25.0;
// Constant for additional hourly fine amount.
const double HOURLY_FINE = 10.0;

// ParkingTicket class
class ParkingTicket
{
private:
	ParkedCar car;		// The parked vehicle
	double fine;		// Parking fine
	int minutes;		// # of Minutes over the limit

	// calculateFine method
	void calculateFine();

public:
	// Default constructor function
	ParkingTicket();
	// Constructor function
	ParkingTicket(ParkedCar, int);
	// Copy constructor function
	ParkingTicket(const ParkingTicket &);
	// Mutator functions
	void setCar(ParkedCar c)
	{
		car = c;
	}
	void setMinutes(int m)
	{
		minutes = m;
	}
	// Accessor functions
	ParkedCar getCar() const
	{
		return car;
	}
	double getFine() const
	{
		return fine;
	}
	//print function
	void print();
};
#endif