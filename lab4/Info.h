#pragma once
#include <string>
using namespace std;


class Info
{
	friend bool isWarranty(Info &info);
private:
	string model;
	int releaseyear;
	int seats;
	int fueltank;
	float fuelneed;
public:
	Info();
	~Info();
	Info(string model, int releaseyear, int seats, int fueltank, float fuelneed);
	Info(string model);

	string getModel();
	int getRelYear();
	int getSeats();
	int getFueltank();
	float getFuelneed();

	void setModel(string model);
	void setRelYear(int releaseyear);
	void setSeats(int seats);
	void setFueltank(int fueltank);
	void setFuelneed(float fuelneed);

};

