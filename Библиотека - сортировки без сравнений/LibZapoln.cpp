#include <iostream>

using namespace std;

void Best(int MAS[], int n) // ������� ���������� ������� ������ ��������
{
    for (int i = 0; i < n; i++)
    {
        MAS[i] = i;
    }
}

void Rand(int MAS[], int n) // ������� ���������� ������� ������� ��������
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        MAS[i] = (rand() % 10) + 10;
    }
}

void Bad(int MAS[], int n)// ������� ���������� ������� ������ ��������
{
    for (int i = 0; i < n; i++)
    {
        MAS[i] = n - i - 1;
    }
}