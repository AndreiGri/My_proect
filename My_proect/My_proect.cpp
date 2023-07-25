#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //Изменение кодировки консоли:
    system("chcp 1251>nul");
    //Количество футов в миле:
    const int ftInMile = 5280;
    //Константа определяет, сколько в одной миле километров:
    const double kmInMile = 1.609344;
    //Целочисленные переменные для записи количества миль, футов, километров и метров:
    int dMile, dFt, dKm, dM;
    //Переменные для записи расстояния в милях и километрах:
    double distMile, distKm;
    //Ввод растояния в милях и футах:
    cout << "Растояние в милях и футах." << endl;
    cout << "Мили: ";
    cin >> dMile;
    cout << "Футы: ";
    cin >> dFt;
    //Растояние в милях:
    distMile = dMile + (double)dFt / ftInMile;
    //Растояние в километрах:
    distKm = distMile * kmInMile;
    //Только километры:
    dKm = (int)distKm;
    //Только метры:
    dM = (int)((distKm - dKm) * 1000);
    //Отображение результата вычисления:
    cout << "Растояние в километрах и метрах." << endl;
    cout << "Километры: " << dKm << endl;
    cout << "Метры: " << dM << endl;
    //Задержка консольного окна:
    system("pause>nul");
    return 0;
}
