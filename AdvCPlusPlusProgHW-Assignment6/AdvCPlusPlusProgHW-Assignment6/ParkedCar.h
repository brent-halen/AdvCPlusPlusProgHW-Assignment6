// Specification file for the ParkedCar class
#ifndef PARKED_CAR_H
#define PARKED_CAR_H
#include "stdafx.h"
#include <string>
using namespace std;

// ParkedCar class
class ParkedCar
{
private:
	string make;			// Car's Make
	string model;			// Car's Model
	string color;			// Car's Color
	string licenseNumber;	// Car's license plate #
	int minutesParked;		// # of minutes parked

public:
	// Default constructor function
	ParkedCar();

	// Constructor function
	ParkedCar(string, string, string, string, int);

	// Copy constructor function
	ParkedCar(const ParkedCar &);

	//Mutator function
	void setMake(string m)
	{ make = m; }
	void setModel(string m)
	{ model = m; }
	void setColor(string c)
	{ color = c; }
	void setLicenseNumber(string lic)
	{ licenseNumber = lic; }

	// Access functions
	string getMake() const
	{ return make; }
	string getModel() const
	{ return model; }
	string getColor() const
	{ return color; }
	string getLicenseNumber() const
	{ return licenseNumber; }
	int getMinutesParked() const
	{ return minutesParked; }

	//print function
	void print();
};

#endif