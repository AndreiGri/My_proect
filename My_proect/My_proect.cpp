#include <iostream>
#include <cstdlib>

using namespace std;

//Функция для считывания растояния в милях:
double getDistMile() {
    //Переменная для записи результата функции:
    double dist;
    //Запрос на ввод растояния в милях:
    cout << "Укажите растояние в милях: ";
    //Считывание значения для растояния в милях:
    cin >> dist;
    //Результат функции:
    return dist;
}

//Функция для перевода милей в километры:
double getDistKm(double dist) {
    //В одной миле километров:
    double kmInMile = 1.609344;
    //Результат функции:
    return dist * kmInMile;
}

int main()
{
    //Изменение кодировки консоли:
    system("chcp 1251>nul");
    //Переменная для записи растояния в милях:
    double distMile = getDistMile();
    //Выполнение вычислений:
    cout << "Растояние (в км): " << getDistKm(distMile) << endl;
    //Задержка консольного окна:
    system("pause>nul");
    return 0;
}
