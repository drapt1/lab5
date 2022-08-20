#include <iostream>
using namespace std;
int main()
{
    int mas[100][100];
    int n, i, j, a, k;
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество строк и столбцов массива ";
    cin >> n;                                //количество строк и столбцов массива одинаково и равно n 

    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            mas[i][j] = rand() % 10;
        }
    }

    cout << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mas[i][j] << " ";
            if (j == n - 1) cout << endl;
        }
    }
    for (i = 1; i < n; i++)                 //поиск строки и столбца, у которых первые элементы равны
    {
        for (j = 1; j < n; j++)
        {
            if (mas[i][0] == mas[0][j])
            {
                for (k = 0; k < n; k++)    //обмен строки и столбца
                {
                    a = mas[i][k];
                    mas[i][k] = mas[k][j];
                    mas[k][j] = a;
                }
            }
        }
    }
    cout << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mas[i][j] << " ";
            if (j == n - 1) cout << endl;
        }
    }
    return 0;
}
