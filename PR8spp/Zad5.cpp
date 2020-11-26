#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    const int rows = 3, columns = 3;
    int mass[rows][columns] = { {11,12,13},{22,22,23},{31,32,33} }, summ=0;
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << mass[i][j] << " ";
            if (mass[i][j] % 2 == 0 && i>j) 
            {
                summ = summ + mass[i][j];
                
            }

        }
        cout << endl;
    }
    cout << "\nСумма: " << summ;
}
