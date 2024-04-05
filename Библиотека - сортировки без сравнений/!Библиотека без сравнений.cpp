#include <iostream>
#include "LibZapoln.h"
#include "LibVivod.h"
#include "BezSravSort.h"

using namespace std;

void main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    cout << "Введите кол-во элементов > 10: ";
    cin >> n;

    int* m = new int[n];

    cout << endl << "Поразрядная сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    int razr = 2;
    for (int i = 1; i <= razr; i++)
    {
        PorazrSort(m, i, n); //Поразрядная сортировка
    }
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка подсчетом" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    PodchetSort(m, n);//Сортировка подсчетом

    system("pause");
}


