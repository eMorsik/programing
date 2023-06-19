#include <string.h>
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Car.h"
using namespace std;

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

    //создание массива с автомобилями
    Car car[10];

    cout << "Кол-во авто на данный момент: " << Car::getCountCars() << endl;
    cout << "любая клавиша для продолжения..." << endl;
    _getch();

    int menu, n = 0;
    do {
        system("cls");
        cout << "(1)Выход\n(2)Ввод данных об авто\n(3)Вывод данных об авто\n"
            "(4)Кол-во авто\n(5)Проверить состояние гарантии авто" << endl;
        cin >> menu;
        if (menu == 2) {
            system("cls");
            car[Car::getCountCars()].Input();
            Car::setCountCars(Car::getCountCars() + 1);
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
        else if (menu == 3) {
            system("cls");
            do {
                cout << "Введите номер авто, данные которого хотите вывести: ";
                cin >> n;
            } while (n > Car::getCountCars() || n < 1);
            car[n-1].Output();
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
        else if (menu == 4) {
            system("cls");
            cout << "Кол-во авто на данный момент: " << Car::getCountCars() << endl;
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
        else if (menu == 5) {
            system("cls");
            do {
                cout << "Введите номер авто, которое хотите проверить: ";
                cin >> n;
            } while (n > Car::getCountCars() || n < 1);
            cout << "Состояние гарантии: " << isWarranty(car[n - 1].CarInfo) << endl;
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
    } while (menu != 1);

    return 0;
}
