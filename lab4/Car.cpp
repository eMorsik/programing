#include "Car.h"
using namespace std;

Car::Car()
{
	Info initInfo;
	Body initBody;
	Engine initEngine;
	Chassis initChassis;

	this->CarInfo.setModel(initInfo.getModel());
	this->CarInfo.setRelYear(initInfo.getRelYear());
	this->CarInfo.setSeats(initInfo.getSeats());
	this->CarInfo.setFueltank(initInfo.getFueltank());
	this->CarInfo.setFuelneed(initInfo.getFuelneed());

	this->CarBody.setType(initBody.getType());
	this->CarBody.setColor(initBody.getColor());
	this->CarBody.setDoors(initBody.getDoors());

	this->CarEngine.setVolume(initEngine.getVolume());
	this->CarEngine.setPower(initEngine.getPower());
	this->CarEngine.setTurbo(initEngine.getTurbo());

	this->CarChassis.setTypeTrans(initChassis.getTypeTrans());
	this->CarChassis.setTypeDrive(initChassis.getTypeDrive());

}

Car::~Car()
{
}

Car::Car(Info CarInfo, Body CarBody, Engine CarEngine, Chassis CarChassis)
{
	this->CarInfo.setModel(CarInfo.getModel());
	this->CarInfo.setRelYear(CarInfo.getRelYear());
	this->CarInfo.setSeats(CarInfo.getSeats());
	this->CarInfo.setFueltank(CarInfo.getFueltank());
	this->CarInfo.setFuelneed(CarInfo.getFuelneed());

	this->CarBody.setType(CarBody.getType());
	this->CarBody.setColor(CarBody.getColor());
	this->CarBody.setDoors(CarBody.getDoors());

	this->CarEngine.setVolume(CarEngine.getVolume());
	this->CarEngine.setPower(CarEngine.getPower());
	this->CarEngine.setTurbo(CarEngine.getTurbo());

	this->CarChassis.setTypeTrans(CarChassis.getTypeTrans());
	this->CarChassis.setTypeDrive(CarChassis.getTypeDrive());
}

Car::Car(Info CarInfo)
{
	Body initBody;
	Engine initEngine;
	Chassis initChassis;

	this->CarInfo.setModel(CarInfo.getModel());
	this->CarInfo.setRelYear(CarInfo.getRelYear());
	this->CarInfo.setSeats(CarInfo.getSeats());
	this->CarInfo.setFueltank(CarInfo.getFueltank());
	this->CarInfo.setFuelneed(CarInfo.getFuelneed());

	this->CarBody.setType(initBody.getType());
	this->CarBody.setColor(initBody.getColor());
	this->CarBody.setDoors(initBody.getDoors());

	this->CarEngine.setVolume(initEngine.getVolume());
	this->CarEngine.setPower(initEngine.getPower());
	this->CarEngine.setTurbo(initEngine.getTurbo());

	this->CarChassis.setTypeTrans(initChassis.getTypeTrans());
	this->CarChassis.setTypeDrive(initChassis.getTypeDrive());
}

Car::Car(float fuelneed)
{
	Info initInfo;
	Body initBody;
	Engine initEngine;
	Chassis initChassis;

	this->CarInfo.setModel(initInfo.getModel());
	this->CarInfo.setRelYear(initInfo.getRelYear());
	this->CarInfo.setSeats(initInfo.getSeats());
	this->CarInfo.setFueltank(initInfo.getFueltank());
	this->CarInfo.setFuelneed(fuelneed);

	this->CarBody.setType(initBody.getType());
	this->CarBody.setColor(initBody.getColor());
	this->CarBody.setDoors(initBody.getDoors());

	this->CarEngine.setVolume(initEngine.getVolume());
	this->CarEngine.setPower(initEngine.getPower());
	this->CarEngine.setTurbo(initEngine.getTurbo());

	this->CarChassis.setTypeTrans(initChassis.getTypeTrans());
	this->CarChassis.setTypeDrive(initChassis.getTypeDrive());
}

int Car::getCountCars() {
    return countCars;
}

void Car::setCountCars(int newCountCars) {
    countCars = newCountCars;
}

void Car::Age(int* age) {
	*age = this_year - this->CarInfo.getRelYear();
}

void Car::Age(int& age) {
	age = this_year - this->CarInfo.getRelYear();
}

void Car::Input()
{
}

void Car::OutList()
{
}

void Car::Output(int carnum)
{
}



