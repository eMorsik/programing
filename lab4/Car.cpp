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
	cout << "|���� ������ �� ����|";
	//���� �� ����
	cout << "\n������ ����: ";
	getline(cin, buffs);
	this->CarInfo.setModel(buffs);
	cout << "��� ������ ����: ";
	cin >> buff;
	this->CarInfo.setRelYear(buff);
	cout << "���-�� �������: ";
	cin >> buff;
	this->CarInfo.setSeats(buff);
	cout << "����� ���������: ";
	cin >> buff;
	this->CarInfo.setFueltank(buff);
	cout << "������ ������� �� 100��: ";
	cin >> buff;
	this->CarInfo.setFuelneed(buff);

	//����� ����
	getline(cin, buffs);
	cout << "\n��� ������: ";
	getline(cin, buffs);
	this->CarBody.setType(buffs);
	cout << "���� ������: ";
	getline(cin, buffs);
	this->CarBody.setColor(buffs);
	cout << "���-�� ������: ";
	cin >> buff;
	this->CarBody.setDoors(buff);

	//��������� ����
	cout << "\n����� ���������: ";
	cin >> buff;
	this->CarEngine.setVolume(buff);
	cout << "�������� ��������� � �/�: ";
	cin >> buff;
	this->CarEngine.setPower(buff);

	//����� ����
	getline(cin, buffs);
	cout << "\n��� ���: ";
	getline(cin, buffs);
	this->CarChassis.setTypeTrans(buffs);
	cout << "��� ������� ����: ";
	getline(cin, buffs);
	this->CarChassis.setTypeDrive(buffs);

	cout << "\n��������� ���� � ������: ";
	cin >> buff;
	this->setCarCost(buff);
}

void Car::Output()
{
	cout << "|���������� �� ����|" << endl;
	//���� �� ����
	cout << "\n������ ����: " << this->CarInfo.getModel() << endl;
	cout << "��� ������ ����: " << this->CarInfo.getRelYear() << endl;
	cout << "���-�� �������: " << this->CarInfo.getSeats() << endl;
	cout << "����� ���������: " << this->CarInfo.getFueltank() << endl;
	cout << "������ ������� �� 100��: " << this->CarInfo.getFuelneed() << endl;
	//����� ����
	cout << "\n��� ������: " << this->CarBody.getType() << endl;
	cout << "���� ������: " << this->CarBody.getColor() << endl;
	cout << "���-�� ������: " << this->CarBody.getDoors() << endl;
	//��������� ����
	cout << "\n����� ���������: " << this->CarEngine.getVolume() << endl;
	cout << "�������� ��������� � �/�: " << this->CarEngine.getPower() << endl;
	//����� ����
	cout << "\n��� ���: " << this->CarChassis.getTypeTrans() << endl;
	cout << "��� ������� ����: " << this->CarChassis.getTypeDrive() << endl;
	cout << "\n��������� ���� � ������: " << this->getCarCost() << endl;
}


