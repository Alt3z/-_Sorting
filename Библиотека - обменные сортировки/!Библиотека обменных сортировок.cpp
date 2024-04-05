#include <iostream>
#include "LibZapoln.h"
#include "LibVivod.h"
#include "ObmenSort.h"

using namespace std;

void main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    cout << "Введите кол-во элементов: ";
    cin >> n;

    int *m = new int[n];

    cout << endl<<"Четно-нечетная сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    ChetNechetSort(m, n);//Четно-нечетная сортировка
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl<<"Cортировка простым обменом" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    ProstObmenSort(m, n);//Cортировка простым обменом
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка расческой" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    RacheskaSort(m, n);//Сортировка расческой
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка Хоара" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    QSort(m, 0,n-1);//Сортировка Хоара
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Гномья сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    GnomeSort(m, n);//Гномья сортировка
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Шейкер сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    ShakerSort(m, n); //Шейкер сортировка
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    system("pause");
}