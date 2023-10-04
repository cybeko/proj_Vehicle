#include "Airplane.h"

void Airplane::PrintInfo() const
{
	cout << "\n\tAirplane info" << endl;
	cout << "Model: " << model << endl;
	cout << "Fuel type: " << fuelType << endl;
	cout << "Speed: " << speed << "MPH" << endl;
	cout << "Capacity: " << capacity << endl << endl;
}

