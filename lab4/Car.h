#pragma once
#include "Info.h"
#include "Body.h"
#include "Engine.h"
#include "Chassis.h"
#include <string>
#include <iostream>
using namespace std;

const int this_year = 2023;

/*
Класс Машина:
    *Класс Информация о машине: модель, год выпуска, 
     кол-во мест, объем бака, расход топлива
    
    *Класс Кузов: тип кузова, кол-во дверей, цвет
    
    *Класс Двигатель: объем, мощность, турбированность
    
    *Класс Шасси: тип КПП, тип привода
*/

class Car {
public:
    static int countCars;
    Info CarInfo;
    Body CarBody;
    Engine CarEngine;
    Chassis CarChassis;
public:
    Car();
    ~Car();
    Car(Info CarInfo, Body CarBody, Engine CarEngine, Chassis CarChassis);
    Car(Info CarInfo);
    Car(float fuelneed);

    static void setCountCars(int newCountCars) {
        countCars = newCountCars;
    }
    static int getCountCars() {
        return countCars;
    }

    void Age(int* age);
    void Age(int& age);

    void Input();
    void Output();

    Car operator + (Car car) {
        return Car(this->CarInfo.getFuelneed() + car.CarInfo.getFuelneed());
    };

    Car& operator ++ () {
        this->CarInfo.setRelYear(this->CarInfo.getRelYear() + 1);
        return *this;
    };

    Car operator ++ (int) {
        Car post = *this;
        ++* this;
        return post;
    };
};

