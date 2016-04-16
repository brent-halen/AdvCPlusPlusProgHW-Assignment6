// Implementation file for ParkedCar class
#include "stdafx.h"
#include <iostream>
#include "ParkedCar.h"
using namespace std;

// Default Constructor function
ParkedCar::ParkedCar()
{
	make = "";
	model = "";
	color = "";
	licenseNumber = "";
	minutesParked = 0;
}

//Constructor function
ParkedCar::ParkedCar(string mk, string mod, string col, string lic, int min)
{
	make = mk;
	model = mod;
	color = col;
	licenseNumber = lic;
	minutesParked = min;
}

// Copy constructor function
ParkedCar::ParkedCar(const ParkedCar &car2)
{
	make = car2.make;
	model = car2.model;
	color = car2.color;
	licenseNumber = car2.licenseNumber;
	minutesParked = car2.minutesParked;
}

//print function
void ParkedCar::print()
{
	cout << "Car Information:" << endl;
	cout << "\tMake: " << make << "\n";
	cout << "\tModel: " << model << "\n";
	cout << "\tColor: " << color << "\n";
	cout << "\tLicense Number: " << licenseNumber << "\n";
	cout << "\tMinutes Parked: " << minutesParked << "\n";
}