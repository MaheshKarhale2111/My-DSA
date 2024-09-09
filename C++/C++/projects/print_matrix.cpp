// This is a programme to find transpose of a matrix given by user
//date created --> 20-04-2021
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], row, col, transpose[10][10];
    cout << "Enter number of rows ";
    cin >> row;
    cout << "Enter number of colums ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    { // taking element wise input
        for (int j = 1; j <= col; j++)
        {
            // cout << "Enter element a" << i << j << " : ";
            cin >> a[i][j];
        }
    }
    // printing matix

    cout << "The matrix is \n";
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << a[i][j];
            cout << " ";
            if (j == col) // line break
            {
                cout << endl;
            }
        }
    }
    // assignning transpose values
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    // printing transpose

    cout << "The transpose of given matrix is \n";

    for (int i = 1; i <= col; i++)// very important change as row become columns
    {
        for (int j = 1; j <= row; j++)
        {
            cout << transpose[i][j];
            cout << " ";
            if (j == row) // very important change as row become columns
            {
                cout << endl;
            }
        }
    }

    return 0;
}