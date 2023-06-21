#pragma once
#include "Car.h"
using namespace std;

class BrokenCar : public Car
{
private:
	int condition; //состояние битого авто
public:
	BrokenCar();
	~BrokenCar();
	BrokenCar(Info CarInfo, Body CarBody, Engine CarEngine, Chassis CarChassis, int CarCost, int condition);

	void setCarCondition(int condition);
	int getCarCondition();

	int getCarCost() override {
		return CarCost * condition / 100;
	}

};

