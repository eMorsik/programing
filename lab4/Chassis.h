#pragma once
#include <string>
using namespace std;


class Chassis{
private:
	string typetransmiss;
	string typedrive;
public:
	Chassis();
	~Chassis();
	Chassis(string typetransmiss, string typedrive);
	Chassis(string typetransmiss);

	string getTypeTrans();
	string getTypeDrive();

	void setTypeTrans(string typetransmiss);
	void setTypeDrive(string typedrive);

};

