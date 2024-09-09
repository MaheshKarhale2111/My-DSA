#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n<=1)
    {
        return 1;
    }
    
    return n * factorial(n - 1);
}


/* How it works
4!= 4* factorial(3)
factorial(3)= 3*factorial(2)
factorial (2)= 2*1 */

int main()
{int a = 4;

cout<<"factorial is "<<factorial(a);
    return 0;
}