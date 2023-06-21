#include "Car.h"
using namespace std;

int Car::countCars = 0;

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

	this->CarCost = 0;

}

Car::~Car()
{
}

Car::Car(Info CarInfo, Body CarBody, Engine CarEngine, Chassis CarChassis, int CarCost)
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

	this->CarCost = CarCost;
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

	this->CarCost = 0;
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

	this->CarCost = 0;
}

void Car::setCarCost(int CarCost)
{
	this->CarCost = CarCost;
}

int Car::getCarCost()
{
	return this->CarCost;
}

void Car::Age(int* age) {
	*age = this_year - this->CarInfo.getRelYear();
}

void Car::Age(int& age) {
	age = this_year - this->CarInfo.getRelYear();
}

void Car::Input()
{
	float buff;
	string buffs;
	getline(cin, buffs);
	cout << "|Ввод данных об авто|";
	//инфо об авто
	cout << "\nМодель авто: ";
	getline(cin, buffs);
	this->CarInfo.setModel(buffs);
	cout << "Год выхода авто: ";
	cin >> buff;
	this->CarInfo.setRelYear(buff);
	cout << "Кол-во сидений: ";
	cin >> buff;
	this->CarInfo.setSeats(buff);
	cout << "Объем бензобака: ";
	cin >> buff;
	this->CarInfo.setFueltank(buff);
	cout << "Расход топлива на 100км: ";
	cin >> buff;
	this->CarInfo.setFuelneed(buff);

	//кузов авто
	getline(cin, buffs);
	cout << "\nТип кузова: ";
	getline(cin, buffs);
	this->CarBody.setType(buffs);
	cout << "Цвет кузова: ";
	getline(cin, buffs);
	this->CarBody.setColor(buffs);
	cout << "Кол-во дверей: ";
	cin >> buff;
	this->CarBody.setDoors(buff);

	//двигатель авто
	cout << "\nОбъем двигателя: ";
	cin >> buff;
	this->CarEngine.setVolume(buff);
	cout << "Мощность двигателя в л/с: ";
	cin >> buff;
	this->CarEngine.setPower(buff);

	//шасси авто
	getline(cin, buffs);
	cout << "\nТип КПП: ";
	getline(cin, buffs);
	this->CarChassis.setTypeTrans(buffs);
	cout << "Тип привода авто: ";
	getline(cin, buffs);
	this->CarChassis.setTypeDrive(buffs);

	cout << "\nСтоимость авто с завода: ";
	cin >> buff;
	this->setCarCost(buff);
}

void Car::Output()
{
	cout << "|Информация об авто|" << endl;
	//инфо об авто
	cout << "\nМодель авто: " << this->CarInfo.getModel() << endl;
	cout << "Год выхода авто: " << this->CarInfo.getRelYear() << endl;
	cout << "Кол-во сидений: " << this->CarInfo.getSeats() << endl;
	cout << "Объем бензобака: " << this->CarInfo.getFueltank() << endl;
	cout << "Расход топлива на 100км: " << this->CarInfo.getFuelneed() << endl;
	//кузов авто
	cout << "\nТип кузова: " << this->CarBody.getType() << endl;
	cout << "Цвет кузова: " << this->CarBody.getColor() << endl;
	cout << "Кол-во дверей: " << this->CarBody.getDoors() << endl;
	//двигатель авто
	cout << "\nОбъем двигателя: " << this->CarEngine.getVolume() << endl;
	cout << "Мощность двигателя в л/с: " << this->CarEngine.getPower() << endl;
	//шасси авто
	cout << "\nТип КПП: " << this->CarChassis.getTypeTrans() << endl;
	cout << "Тип привода авто: " << this->CarChassis.getTypeDrive() << endl;
	cout << "\nСтоимость авто с завода: " << this->getCarCost() << endl;
}


