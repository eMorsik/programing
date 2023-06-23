#include <string.h>
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <vector>
#include <algorithm>

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

//сравнение годов выпуска
bool lessByYear(Car& a, Car& b) {
    return a.CarInfo.getRelYear() < b.CarInfo.getRelYear();
}
string target;
//сравнение моделей авто
bool equalByModel(Car &a) {
    return a.CarInfo.getModel() == target;
}

int main()
{
    setlocale(LC_ALL, "russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //создание массива с автомобилями
    //Car* car = new Car[5];
    //BrokenCar* brokencar = new BrokenCar[5];

    Car car;
    BrokenCar brokencar;

    vector<Car> Cars;

    int menu, n = 0, buff = 0;
    do {
        system("cls");
        cout << "(1)Выход\n(2)Добавление авто\n(3)Добавление битого авто\n(4)Список моделей и года выпуска авто\n"
            "(5)Кол-во авто\n(6)Сортировка авто по году выпуска\n(7)Поиск авто по модели" << endl;
        cin >> menu;
        if (menu == 2) {
            system("cls");
            car.Input();
            Cars.push_back(car);
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
        else if (menu == 3) {
            system("cls");
            brokencar.Input();
            do {
                cout << "\nСостояние битого авто(от 0 до 100%): ";
                cin >> buff;
            } while (buff > 100 || buff < 0);
            brokencar.setCarCondition(buff);
            cout << "\nСтоимость авто с учётом состояния: " << brokencar.getCarCost();
            Cars.push_back(brokencar);
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
        else if (menu == 4) {
            system("cls");
            for (int i = 0; i < Cars.size(); i++) {
                cout << "(" << i + 1 << ") " << Cars[i].CarInfo.getModel() <<" " << Cars[i].CarInfo.getRelYear()<< "г.в." << endl;
            }
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
        else if (menu == 5) {
            system("cls");
            cout << "Кол-во авто на данный момент: " << Cars.size() << endl;
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
        else if (menu == 6) {
            system("cls");
            //сортировка по году выпуска
            sort(Cars.begin(), Cars.end(), lessByYear);
            cout << "Список авто отсортирован по году выпуска!" << endl;
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
        else if (menu == 7) {
            system("cls");
            getline(cin, target);
            cout << "Модель авто: ";
            getline(cin, target);
            //поиск по модели
            auto it = find_if(Cars.begin(), Cars.end(), equalByModel);
            if (it == Cars.end())
                cout << "\nАвто такой модели не найдено...";
            else
                cout << "\nАвто такой модели найдено по номеру: " << (it - Cars.begin() + 1) << endl;
            cout << "\nлюбая клавиша для продолжения..." << endl;
            _getch();
        }
    } while (menu != 1);

    return 0;
}
