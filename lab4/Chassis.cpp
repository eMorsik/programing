#include "Chassis.h"

Chassis::Chassis()
{
	this->typetransmiss = "��� ���";
	this->typedrive = "��� �������";
}

Chassis::~Chassis()
{
}

Chassis::Chassis(string typetransmiss, string typedrive)
{
	this->typetransmiss = typetransmiss;
	this->typedrive = typedrive;
}

Chassis::Chassis(string typetransmiss)
{
	this->typetransmiss = typetransmiss;
	this->typedrive = "��� �������";
}

string Chassis::getTypeTrans()
{
	return typetransmiss;
}

string Chassis::getTypeDrive()
{
	return typedrive;
}

void Chassis::setTypeTrans(string typetransmiss)
{
	this->typetransmiss = typetransmiss;
}

void Chassis::setTypeDrive(string typedrive)
{
	this->typedrive = typedrive;
}
