#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //Изменение кодировки консоли:
    system("chcp 1251>nul");
    //Верхняя граница суммы, значение суммы и индексная переменная:
    //Алгоритм О(1)
    int n;
    cout << "Введите число до которого нужна сумма квадратов чисел: ";
    cin >> n;
    int result = (n*(n + 1)*(2*n + 1)) / 6;
    cout << "Сумма квадратов чисел до числа " << n << ": " << result;
    //Задержка консольного окна:
    system("pause>nul");
    return 0;
}
