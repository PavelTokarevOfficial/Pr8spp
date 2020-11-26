#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    //создание,вывод массива
    const int rows = 3, columns = 3;
    int mass[rows][columns] = { {11,12,13},{21,22,23},{31,32,33} }, a, b;
    cout << "Введите а: ";
    cin >> a;
    cout << "Введите б: ";
    cin >> b;
    cout << "Исходный массив: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Преобразованный массив: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (mass[i][j] >= a && mass[i][j] <= b)
            {
                mass[i][j] = 0;
            }
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
}
