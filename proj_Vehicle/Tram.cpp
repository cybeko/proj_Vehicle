#include "Tram.h"

void Tram::PrintInfo() const
{
	cout << "\n\tTram info" << endl;
	cout << "Model: " << model << endl;
	cout << "Fuel type: " << fuelType << endl;
	cout << "Speed: " << speed << "MPH" << endl;
	cout << "Capacity: " << capacity << endl << endl;
}

