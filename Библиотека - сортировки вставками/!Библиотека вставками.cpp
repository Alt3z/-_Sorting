#include <iostream>
#include "LibZapoln.h"
#include "LibVivod.h"
#include "VstavkiSort.h"

using namespace std;

void main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    cout << "Введите кол-во элементов: ";
    cin >> n;

    int* m = new int[n];

    cout << endl << "Сортировка простыми вставками" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    ProstVstavki(m, n);//Сортировка простыми вставками
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка бинарными вставками" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    BinarSort(m, n);//Сортировка бинарными вставками
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка Шелла" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    SortShella(m, n);//Сортировка Шелла
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    system("pause");
}