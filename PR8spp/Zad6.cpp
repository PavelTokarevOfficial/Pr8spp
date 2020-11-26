#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    const int rows = 3, columns = 3;
    int mass[rows][columns] = { {11,12,13},{21,22,23},{31,32,33}},max=0;
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mass[i][j] << " ";
            if (mass[i][j] > max) 
            {
                max = mass[i][j];
            }
        }
        cout << endl;
    }

    int mass2[1];
    mass2[0] = max;
    cout << "Число во 2 массиве:" << mass2[0];
}

