#include "Car.h"

void Car::PrintInfo() const
{
	cout << "\n\tCar info" << endl;
	cout << "Model: " << model << endl;
	cout << "Fuel type: " << fuelType << endl;
	cout << "Speed: " << speed <<"MPH" << endl;
	cout << "Capacity: " << capacity << endl<<endl;
}
