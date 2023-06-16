#include <string.h>
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Car.h"

bool isWarranty(Info &info) {
    if (info.releaseyear < this_year - 5)
        return false;
    return true;
}

int main()
{
    setlocale(LC_ALL, "russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car car;
    car.setCountCars(0);

    cout << "|Ввод данных об авто|";
    car.Input();

    car.OutList();

    cout << "Введите номер авто, данные о котором хотите вывести";
    int carnum;
    do {
        cin >> carnum;
    } while (carnum > car.getCountCars());
    car.Output(carnum);

}
