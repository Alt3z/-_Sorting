#include <iostream>

using namespace std;

void PodchetSort(int A[], int length)
{
    int k = A[0];
    for (int i = 1; i < length; i++)
    {
        if (k < A[i])
        {
            k = A[i];
        }
    }
    int* B = new int[length]; //результирующий массив
    int* C = new int[k]; //вспомогательный массив

    for (int i = 0; i < k; i++) // заполняем вспомогательный массив 0
    {
        C[i] = 0;
    }
    for (int j = 0; j < length; j++) //проход по массиву A (то есть изначальному)  и поиск в нем повторяющихся элементов
    {
        C[A[j] - 1] = (C[A[j] - 1] + 1);
    }

    for (int i = 1; i < k; i++)
    {
        C[i] = (C[i] + C[i - 1]);
    }
    for (int j = (length - 1); j >= 0; j--)//цикл для записи в массив B
    {
        B[C[A[j] - 1] - 1] = A[j]; // запись в массив В
        C[A[j] - 1] = C[A[j] - 1] - 1; // уменьшение количества повторяющихся элементов
    }
    cout << "Отсортированный массив: ";
    for (int i = 0; i < length; i++)
    {
        cout << B[i] << " ";
    }
}

int Razr(int chislo, int razr)
{
    int chislo_1 = chislo;
    while (razr > 1)
    {
        chislo = chislo / 10;
        razr--;
    }
    chislo = chislo % 10;
    return chislo;
}

void PorazrSort(int A[], int razr, int n)
{
    
    int** B;
    B = new int* [n];
    for (int i = 0; i < n; i++)
    {
        B[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = 0;
        }
    }

    int i, j, temp = 0;

    int* C = new int[n];
    
    for (i = 0; i < n; i++) C[i] = 0; //заполняем массив С 0
    
    for (i = 0; i < n; i++)
    {
        int a = Razr(A[i], razr);// рассчет текущего разряда 
        B[C[a]][a] = A[i]; // в массив В заносятся элементы с индексом а
        C[a] = C[a] + 1;   // увеличиваем счетчик кол-ва элементов 
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < C[i]; j++)
        {
            A[temp] = B[j][i];     // в исходный массив А заносим элементы после группировки с массива В
            temp++;
        }
    }
}
