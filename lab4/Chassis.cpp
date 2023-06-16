#include "Chassis.h"

Chassis::Chassis()
{
	this->typetransmiss = "тип КПП";
	this->typedrive = "тип привода";
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
	this->typedrive = "тип привода";
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
