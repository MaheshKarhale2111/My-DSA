// This is programme to determine given number is prime or not
// Date created 16-04-2021

#include <iostream>
using namespace std;

int main()
{
    int num, /*remainder, quotient*/ i;
    cout << "Enter number to check prime or not:";
    cin >> num;
    i = 2;

    // FOLLOWRING CODE IS NOT WORKING

    // for (int i = 2; i <num; i++)
    // {
    //     if (num==1 || num==0)
    //     {
    //         cout<<"They are not prime not..";
    //     }

    //     if (num%i==0)
    //     {
    //         cout<<"It is not a prime number";
    //         break;
    //     }
    //     else{
    //         cout<<"It is a prime number";
    //         break;
    //     }

    // }

    // METHOD 1

    if (num == 0 || num == 1)
    {
        cout << "Not a prime not a composite number";
    }
    else
    {
        while (i < num)
        {
            if (num % i == 0)
            {
                cout << "This is a not  prime number";
                break;
            }
            else
            {
                cout << "This is a prime number";
            }
            i++;
        }
    }

    return 0;
}
