#pragma once
#include "Info.h"
#include "Body.h"
#include "Engine.h"
#include "Chassis.h"
#include <string>
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
    Info CarInfo;
    Body CarBody;
    Engine CarEngine;
    Chassis CarChassis;
    static int countCars;
public:
    Car();
    ~Car();
    Car(Info CarInfo, Body CarBody, Engine CarEngine, Chassis CarChassis);
    Car(Info CarInfo);
    Car(float fuelneed);

    static int getCountCars();
    static void setCountCars(int newCountCars);

    void Age(int* age);
    void Age(int& age);

    void Input();
    void OutList();
    void Output(int carnum);

    Car operator + (Car car) {
        return Car(this->CarInfo.getFuelneed() + car.CarInfo.getFuelneed());
    };

    Car& operator ++ () {
        this->setCountCars(this->getCountCars()+1);
        return *this;
    };

    Car operator ++ (int) {
        Car post = *this;
        ++* this;
        return post;
    };
};

