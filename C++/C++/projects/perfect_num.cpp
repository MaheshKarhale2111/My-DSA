#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    for (int num = 2; num <= 4; num++)
    {
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                //  cout<<i<<endl; //--> //This wil print all factors of a number
                sum = sum + i;
            }
        }

        if (sum==num)
        {
            sum=0;
        }
        
        cout << sum << endl;

        if (sum == num)
        {
            cout << num << " is a perfect number " << endl;
        }
        // else
        // {
        //     cout <<num<< "is a not a perfect number"<<endl;
        // }
        //  cout<<sum<<endl;
    }

    return 0;
}