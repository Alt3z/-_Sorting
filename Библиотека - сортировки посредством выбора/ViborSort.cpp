#include <iostream>

using namespace std;

void SortViborom(int* MAS, int n) //������� ���������� ������� �� �����
{
    int rA, k;

    for (int i = n - 1; i > 0; i--)
    {
        rA = MAS[i]; //rA - ������� ��������
        k = i; //k - ������
        for (int j = 0; j <= i; j++)
        {
            if (MAS[j] >= MAS[k]) //��������: �������� �� ������� ������� ������ ��� ����� �������� ���������
            {
                k = j; //����� ������
                rA = MAS[k];
            }
        }
        MAS[k] = MAS[i]; //�����
        MAS[i] = rA;
    }
}

void KvadratSort(int a[], int n)
{
    int n1 = sqrt(n); //��������� ���������� ����� � ���������� ���� � ���
    int* b = new int[n1];//������ �
    int* c = new int[n];// ������ �
    int min, imin;

    for (int z = 0; z < n; z++)
    {
        for (int i = 0; i < n1; i++)//���������� ���� ��� ������� �� 3 �������
        {
            min = a[i * n1]; //���������� ������ ������� ������ ������
            imin = i * n1; //���������� ������ ������� �������� ������ ������
            for (int j = imin + 1; (j < (i + 1) * n1) && (j < n); j++) // ����, ������� ���������� �� ���������� ����. ����� ������� � ���� �� ������� ���� ���� ������
            {
                if (a[j] <= min) //���� ����� ������� �������, ��� �� ��������� ������, �� ���������� ��� � ��� ������
                {
                    min = a[j];
                    imin = j;
                }
            }
            b[i] = imin; //������� ������ ����� �������� � ������ b
        }
        min = a[b[0]]; //���������� �������� ������� � � �������� �������� b � �������� 0
        imin = 0; //�������� ���������� 
        for (int i = 1; i < n1; i++)//���� ��� ������� �� �������
        {
            if (a[b[i]] < min) //���� ������� �� ������� � � ��������,������� �� ������ � ������� b ������ ��� ����� ��, ��� �� ��� ���������
            { //�� ���������� ����� ��������
                min = a[b[i]];
                imin = i;
            }
        }
        c[z] = min;//������� � ������ � �������� �� ������� � � ��������

        a[b[imin]] = 666; // �������� ���������� �������� �� ���������
    }

    cout << endl << "��������������� ������: ";
    for (int i = 0; i < n; i++)
        cout << c[i] << " ";
}

int PIR(int A[], int i, int N) //��� ������������� ����������
{
    int imin, W;
    if ((2 * i + 2) < N)
    {
        if (A[2 * i + 1] > A[2 * i + 2])
            imin = 2 * i + 2;
        else
            imin = 2 * i + 1;
    }
    else imin = 2 * i + 1;

    if (imin >= N) return i;
    if (A[i] > A[imin])
    {
        W = A[i];
        A[i] = A[imin];
        A[imin] = W;
        if (imin < N / 2) i = imin;
    }
    return i;
}

void PirSort(int A[], int n) //������������� ����������
{
    for (int i = n / 2 - 1; i >= 0; --i)
    {
        int ir = i;
        i = PIR(A, i, n);
        if (ir != i) ++i;
    }
    int W;
    for (int k = n - 1; k >= 0; --k)
    {
        W = A[0];
        A[0] = A[k];
        A[k] = W;
        int i1 = 0, ir = -1;
        while (i1 > ir)
        {
            ir = i1;
            i1 = PIR(A, i1, k);
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        W = A[i];
        A[i] = A[n - i - 1];
        A[n - i - 1] = W;
    }
}