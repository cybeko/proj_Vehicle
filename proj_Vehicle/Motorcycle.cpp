#include "Motorcycle.h"

void Motorcycle::PrintInfo() const
{
	cout << "\n\tMotorcycle info" << endl;
	cout << "Model: " << model << endl;
	cout << "Fuel type: " << fuelType << endl;
	cout << "Speed: " << speed << "MPH" << endl;
	cout << "Capacity: " << capacity << endl << endl;
}

