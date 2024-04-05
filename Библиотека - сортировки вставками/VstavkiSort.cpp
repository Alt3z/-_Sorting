#include <iostream>

using namespace std;

void ProstVstavki(int A[], int N) // ���������� �������� ���������
{
    int i, wr;
    for (int j = 1; j < N; j++)//��������� �� ��������������� ����� �������
    {
        i = j - 1;
        wr = A[j];
        while ((i >= 0) && (A[i] > wr))//��������� ��������������� ����� �������
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = wr;
    }
}

void BinarSort(int Arr[], int n) // �������� �������
{
    // L - ����� ������� ��������������� ����� �������; 
    //R- ������ ������� ��������������� ����� �������
    int L, W, R, sr;
    for (int i = 1; i < n; i++)
    {
        if (Arr[i - 1]  > Arr[i])
        {
            W = Arr[i];//� W ���������� ��������������� ������� ������� Arr[i] ��� �������
            L = 0;
            R = i - 1;
            while (L <= R)
            {
                sr = (L + R) / 2;    //������ �������� �������� (�������� �������)
                //cout << "������ �������� ��������: " << sr << endl;
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

void SortShella(int m[], int n) //���������� �����
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