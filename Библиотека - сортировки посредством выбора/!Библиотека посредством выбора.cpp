#include <iostream>
#include "LibZapoln.h"
#include "LibVivod.h"
#include "ViborSort.h"

using namespace std;

void main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    cout << "Введите кол-во элементов: ";
    cin >> n;

    int* m = new int[n];

    cout << endl << "Сортировка выбором" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    SortViborom(m, n);//сортировка выбором
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Квадратичная сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    KvadratSort(m, n);//Квадратичная сортировка

    cout << endl <<endl << "Пирамидальная сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    PirSort(m, n);//Пирамидальная сортировка
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    system("pause");
}