#include <string.h>
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Car.h"
#include "BrokenCar.h"
#include "Template.h"
using namespace std;

//Дружественная функция "на гарантии ли авто"
bool isWarranty(Info &info) {
    if (info.releaseyear < this_year - 5)
        return false;
    return true;
}

//реализация throw
void carInput(Car *car) {
    if (Car::getCountCars() < 5) {
        car->Input();
        Car::setCountCars(Car::getCountCars() + 1);
        return;
    }
    throw string{ "Недостаточно памяти для записи данных!" };
}

int main()
{
    setlocale(LC_ALL, "russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //создание массива с автомобилями
    Car* car = new Car[5];
    BrokenCar brokencar;

    cout << "Кол-во авто на данный момент: " << Car::getCountCars() << endl;
    cout << "любая клавиша для продолжения..." << endl;
    _getch();

    int menu, n = 0, buff = 0;
    do {
        system("cls");
        cout << "(1)Выход\n(2)Ввод данных об авто\n(3)Вывод данных об авто\n"
            "(4)Кол-во авто\n(5)Проверить состояние гарантии авто\n(6)Добавление битого авто" << endl;
        cin >> menu;
        if (menu == 2) {
            system("cls");
            //реализация ввода через try-catch
            try {
                carInput(&car[Car::getCountCars()]);
            }
            catch (string error_msg) {
                cout << error_msg << endl;
            }
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
        else if (menu == 6) {
            system("cls");
            //реализация виртуального метода и производного класса
            brokencar.Input();
            do {
                cout << "\nСостояние битого авто(от 0 до 100%): ";
                cin >> buff;
            } while (buff > 100 || buff < 0);
            brokencar.setCarCondition(buff);
            cout << "\nСтоимость авто с учётом состояния: " << brokencar.getCarCost();
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
    } while (menu != 1);

    //Реализация шаблона класса(лучше не придумал)
    Parts<Engine, 10> engine;
    for (int i = 0; i < Car::getCountCars(); i++) {
        engine.setArrItem(car[i].CarEngine, i);
    }
    float MPower = 0;
    for (int i = 0; i < Car::getCountCars(); i++) {
        MPower += engine.getArrItem(i).getPower();
    }
    MPower = MPower / Car::getCountCars();
    cout << "\nСредняя мощность двигателей: " << MPower << endl;

    return 0;
}
