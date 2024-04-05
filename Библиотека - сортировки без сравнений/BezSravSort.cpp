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
    int* B = new int[length]; //�������������� ������
    int* C = new int[k]; //��������������� ������

    for (int i = 0; i < k; i++) // ��������� ��������������� ������ 0
    {
        C[i] = 0;
    }
    for (int j = 0; j < length; j++) //������ �� ������� A (�� ���� ������������)  � ����� � ��� ������������� ���������
    {
        C[A[j] - 1] = (C[A[j] - 1] + 1);
    }

    for (int i = 1; i < k; i++)
    {
        C[i] = (C[i] + C[i - 1]);
    }
    for (int j = (length - 1); j >= 0; j--)//���� ��� ������ � ������ B
    {
        B[C[A[j] - 1] - 1] = A[j]; // ������ � ������ �
        C[A[j] - 1] = C[A[j] - 1] - 1; // ���������� ���������� ������������� ���������
    }
    cout << "��������������� ������: ";
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
    
    for (i = 0; i < n; i++) C[i] = 0; //��������� ������ � 0
    
    for (i = 0; i < n; i++)
    {
        int a = Razr(A[i], razr);// ������� �������� ������� 
        B[C[a]][a] = A[i]; // � ������ � ��������� �������� � �������� �
        C[a] = C[a] + 1;   // ����������� ������� ���-�� ��������� 
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < C[i]; j++)
        {
            A[temp] = B[j][i];     // � �������� ������ � ������� �������� ����� ����������� � ������� �
            temp++;
        }
    }
}