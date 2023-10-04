using namespace std;
#include <iostream>
#include"Vehicle.h"
#include"Car.h"
#include"Ship.h"
#include"Tram.h"
#include"Motorcycle.h"
#include"Airplane.h"

int main()
{
	Vehicle* ptr = nullptr;
	int userCh;
	bool loopCheck = true;

	while (loopCheck)
	{
		bool choiceCheck = true;
		cout << "\tMenu\n1. Car\n2. Ship\n3. Airplane\n4. Tram\n5. Motorcycle\n6. Exit" << endl;
		cout << "\nChoose the type of vehicle: ";
		cin >> userCh;

		switch (userCh)
		{
		case 1:
			ptr = new Car;
			break;
		case 2:
			ptr = new Ship;
			break;
		case 3:
			ptr = new Airplane;
			break;
		case 4:
			ptr = new Tram;
			break;
		case 5:
			ptr = new Motorcycle;
			break;
		case 6:
			cout << "Exiting..." << endl;
			loopCheck = false;
			break;
		default:
			cout << "\nWrong value!" << endl<<endl;
			choiceCheck = false;
			break;
		}
		if(loopCheck && choiceCheck)
		{
			//ptr->SetInfo("Vehicle", "Vehicle", 10, 80);
			ptr->UserInput();
			ptr->PrintInfo();
			system("pause");
			system("cls");
		}
	}
}