#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    while (1)
    {
        int z = 0;
        cout << "Выберите действие: 1-вычисление, 0-выход."
            << endl;
        cin >> z;
        if (z != 1)
        {
            break;
        }
    int N;
    int k = 0;
    int M;
    cout << "Введите количество элементов массива-";
    cin >> N;
    int* A1 = new int[N];
    for (int i = 0; i < N; i++)
    {
        A1[i] = 1 + rand() % 10;

    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++)   //возрастание
        {
            if (A1[i] > A1[j]) {
                int temp = A1[i];
                A1[i] = A1[j];
                A1[j] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << "\n [" << i << "] : " << A1[i];
    }
    M = 0;
    int* A2 = new int[N];
    for (int i = 0; i < N; i++)
    {
        A2[i] = A1[i];

    }
    int* A3 = new int[N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++) {
            if (A1[i] == A1[j]) {
                A3[k] = A1[i];
                k++;
            }
        }
    }
    int t = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A3[j] == A1[i]) {
                t = 1;
            }
        }
        if (t == 0) {
            A2[M] = A1[i];
            if (i != N) {
                M++;
            }
        }
        t = 0;
    }
    cout << "\n\n Новый массив ";
    for (int i = 0; i < M; i++) {
        cout << "\n [" << i << "] : " << A2[i];
    }
    delete[] A1;
    delete[] A2;
    delete[] A3;
   cout << endl;
    }
    system("pause");
    return 0;
}