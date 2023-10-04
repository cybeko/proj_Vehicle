#pragma once
using namespace std;
#include <iostream>

class Vehicle
{
protected:
	string model;
	string fuelType;
	int speed;
	int capacity;
public:
	void SetInfo(const char* u_model, const char* u_fuelType, int u_speed, int u_capacity);
	void UserInput();
	virtual void PrintInfo() const;
};

