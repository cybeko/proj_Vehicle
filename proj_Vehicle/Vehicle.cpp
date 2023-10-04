#include "Vehicle.h"

void Vehicle::SetInfo(const char* u_model, const char* u_fuelType, int u_speed, int u_capacity)
{
	model = u_model;
	fuelType = u_fuelType;
	speed = u_speed;
	capacity = u_capacity;
}

void Vehicle::UserInput()
{
    cout << "\nEnter vehicle model: ";
    cin >> model;

    cout << "Enter fuel type: ";
    cin >> fuelType;

    cout << "Enter speed: ";
    cin >> speed;

    cout << "Enter capacity: ";
    cin >> capacity;
}

void Vehicle::PrintInfo() const
{
	cout << "[No info]" << endl;
}
