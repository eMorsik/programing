#pragma once
#include <string>
using namespace std;


class Body {
private:
	string type;
	string color;
	int doors;
public:
	Body();
	~Body();
	Body(string type, string color, int doors);
	Body(string type);

	string getType();
	string getColor();
	int getDoors();

	void setType(string type);
	void setColor(string color);
	void setDoors(int doors);

};