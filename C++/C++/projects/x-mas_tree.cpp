//this is a program to print two x-mas trees by using multiple for loops
// Date created --> 17-04-2021
//K.Mahesh
#include <iostream>
using namespace std;

int main()
{
    int i, j, k, m, n, p, r = 1, s, t, row, enter;
    cout << "Enter number of rows : "; // This is data for our first loop
    cin >> row;

    for (int i = 1; i <= row; i++) // this loop control each row and add new rows only

    {                                  //*****for first tree******
        for (int j = row; j >= i; j--) // this loop controls number of blank spaces in each row
                                       // note that it is decreasing
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) // this loop controls number of stars in each row
        {
            cout << "*";
        }
        //        ********* for second tree ********
        for (int s = 2 * row - 1; s >= 2 * i - 1; s--)
        {
            cout << " ";
        }

        for (int t = 1; t <= 2 * i - 1; t++)
        {
            cout << "*";
        }

        cout << endl;
    }
    //********* for trunk part *******
    for (int m = 1; m <= 5; m++)
    {
        for (int n = 1; n <= row - 1; n++) // row -1 expression derived in order to keep trunk in middle
        {
            cout << " ";
        }
        for (int p = 1; p <= 3; p++) // p<=3 choosen as we want only 3 stars at trunk
        {
            cout << "*";
        }

        // while (m = 3)
        // {
        //     cout << "Programmed by K.Mahesh" << endl;
        // }

        // *********for second trunk **********
        for (int n = 1; n <= 2 * row - 2; n++)
        {
            cout << " ";
        }
        for (int p = 1; p <= 3; p++)
        {
            cout << "*";
        }

        cout << endl;
    }

    while (r <= 3)
    {
        for (int q = 1; q <= 4 * row + 1; q++)
        {
            cout << "`";
        }
        cout << endl;
        r++;
    }
    cout << "Enter esc to exit";
    cin >> enter;
    return 0;
}