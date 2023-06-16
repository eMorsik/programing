#include "Body.h"

Body::Body()
{
	this->type = "тип кузова";
	this->color = "цвет кузова";
	this->doors = 4;
}

Body::~Body()
{
}

Body::Body(string type, string color, int doors)
{
	this->type = type;
	this->color = color;
	this->doors = doors;
}

Body::Body(string type)
{
	this->type = type;
	this->color = "цвет кузова";
	this->doors = 4;
}

string Body::getType()
{
	return type;
}

string Body::getColor()
{
	return color;
}

int Body::getDoors()
{
	return doors;
}

void Body::setType(string type)
{
	this->type = type;
}

void Body::setColor(string color)
{
	this->color = color;
}

void Body::setDoors(int doors)
{
	this->doors = doors;
}
