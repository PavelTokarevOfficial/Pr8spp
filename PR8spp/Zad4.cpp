#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    const int rows = 3, columns = 3;
    int mass[rows][columns] = { {-11,-12,-13},{-21,-22,-23},{31,32,33} }, min = -100;
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mass[i][j] << " ";
            if (mass[i][j]<0&& mass[i][j]>min)
            {
                min = mass[i][j];
            }
        }
        cout << endl;
    }
    cout << "\nМинимальное отрицательное: " << min;
}
