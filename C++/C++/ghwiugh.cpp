#include <iostream>
using namespace std;

class unname
{
    int a, b;

public:
    unname(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << this->a << this->b;
    }
};

int main()
{
    unname k(1, 2);
    k.show();
    return 0;
}