#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 9)// here b is default argument // It will be reaplaced only if some externam argument is passed
    {
        data1 = a;
        data2 = b;
    }

    void print()
    {
        cout << " the value of data is "<< data1 << "and " << data2<<endl;
    }
};
int main()
    {
        simple s(1, 4);
        s.print();
        simple s2 (1);
        s2.print();

        return 0;
    }