#include <iostream>
using namespace std;

void swapointer(int *a, int *b);
int main()
{
    int x = 4, y = 5;
    cout << x << y;
    swapointer(&x, &y);
    cout << x << y;

    return 0;
}
void swapointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}