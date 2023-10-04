#include "Ship.h"

void Ship::PrintInfo() const
{
	cout << "\n\tShip info" << endl;
	cout << "Model: " << model << endl;
	cout << "Fuel type: " << fuelType << endl;
	cout << "Speed: " << speed << "MPH"<< endl;
	cout << "Capacity: " << capacity << endl << endl;
}

