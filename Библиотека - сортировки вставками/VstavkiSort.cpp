#include <iostream>

using namespace std;

void ProstVstavki(int A[], int N) // сортировка простыми вставками
{
    int i, wr;
    for (int j = 1; j < N; j++)//обработка не отсортированной части массива
    {
        i = j - 1;
        wr = A[j];
        while ((i >= 0) && (A[i] > wr))//обработка отсортированной части массива
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = wr;
    }
}

void BinarSort(int Arr[], int n) // бинарные вставки
{
    // L - левая граница отсортированной части массива; 
    //R- правая граница отсортированной части массива
    int L, W, R, sr;
    for (int i = 1; i < n; i++)
    {
        if (Arr[i - 1]  > Arr[i])
        {
            W = Arr[i];//в W помещается рассматриваемый элемент массива Arr[i] для вставки
            L = 0;
            R = i - 1;
            while (L <= R)
            {
                sr = (L + R) / 2;    //индекс среднего элемента (середины массива)
                //cout << "Индекс среднего элемента: " << sr << endl;
                if (Arr[sr] < W)
                {
                    L = sr + 1;
                }
                else
                {
                    R = sr - 1;
                }
            }
            for (int j = i - 1; j >= L; j--)
            {
                Arr[j + 1] = Arr[j];
            }
            Arr[L] = W;
        }
    }
}

void SortShella(int m[], int n) //сортировка Шелла
{
    int step, j, temp;
    step = n / 2;

    while (step > 0)
    {
        for (int i = 0; i < n - step; i++)
        {
            j = i;
            while (j >= 0 && m[j] > m[j + step])
            {
                temp = m[j];
                m[j] = m[j + step];
                m[j + step] = temp;
                j--;
            }
        }
        step = step / 2;
    }
}
