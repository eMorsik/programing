#include "BrokenCar.h"

BrokenCar::BrokenCar()
{
	condition = 0;
}

BrokenCar::~BrokenCar()
{
}

BrokenCar::BrokenCar(Info CarInfo, Body CarBody, Engine CarEngine, Chassis CarChassis, int Carcost, int condition) : Car(CarInfo, CarBody, CarEngine, CarChassis, CarCost)
{
	this->condition = condition;
}

void BrokenCar::setCarCondition(int condition)
{
	this->condition = condition;
}

int BrokenCar::getCarCondition()
{
	return this->condition;
}
