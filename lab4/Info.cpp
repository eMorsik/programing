#include "Info.h"
#include <string.h>
using namespace std;

Info::Info() {
	this->model = "модель";
	this->releaseyear = 2000;
	this->seats = 0;
	this->fueltank = 0;
	this->fuelneed = 0;
}

Info::Info(string model, int releaseyear, int seats, int fueltank, float fuelneed) {
	this->model = model;
	this->releaseyear = releaseyear;
	this->seats = seats;
	this->fueltank = fueltank;
	this->fuelneed = fuelneed;
}

Info::Info(string model) {
	this->model = model;
	this->releaseyear = 2000;
	this->seats = 0;
	this->fueltank = 0;
	this->fuelneed = 0;
}

Info::~Info() {

}

string Info::getModel()
{
	return model;
}

int Info::getRelYear()
{
	return releaseyear;
}

int Info::getSeats()
{
	return seats;
}

int Info::getFueltank()
{
	return fueltank;
}

float Info::getFuelneed()
{
	return fuelneed;
}

void Info::setModel(string model)
{
	this->model = model;
}

void Info::setRelYear(int releaseyear)
{
	this->releaseyear = releaseyear;
}

void Info::setSeats(int seats)
{
	this->seats = seats;
}

void Info::setFueltank(int fueltank)
{
	this->fueltank = fueltank;
}

void Info::setFuelneed(float fuelneed)
{
	this->fuelneed = fuelneed;
}

