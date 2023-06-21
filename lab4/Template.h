#pragma once
#include <array>
#include <iostream>

template<typename T, int count>
class Parts
{
private:
	array<T, count> parts;
public:
	void setArrItem(T item, int num) {
		parts[num] = item;
	}
	T getArrItem(int num) {
		return parts[num];
	}
};
