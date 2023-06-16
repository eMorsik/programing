#pragma once
#include <string>
using namespace std;


class Engine{
private:
	float volume;
	int power;
	bool turbo;
public:
	Engine();
	~Engine();
	Engine(float volume, int power, bool turbo);
	Engine(float volume);

	float getVolume();
	int getPower();
	bool getTurbo();

	void setVolume(float volume);
	void setPower(int power);
	void setTurbo(bool turbo);

};

