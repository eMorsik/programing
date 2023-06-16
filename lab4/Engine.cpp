#include "Engine.h"

Engine::Engine()
{
	this->volume = 0;
	this->power = 0;
	this->turbo = false;
}

Engine::~Engine()
{

}

Engine::Engine(float volume, int power, bool turbo)
{
	this->volume = volume;
	this->power = power;
	this->turbo = turbo;
}

Engine::Engine(float volume)
{
	this->volume = volume;
	this->power = 0;
	this->turbo = false;
}

float Engine::getVolume()
{
	return volume;
}

int Engine::getPower()
{
	return power;
}

bool Engine::getTurbo()
{
	return turbo;
}

void Engine::setVolume(float volume)
{
	this->volume = volume;
}

void Engine::setPower(int power)
{
	this->power = power;
}

void Engine::setTurbo(bool turbo)
{
	this->turbo = turbo;
}
