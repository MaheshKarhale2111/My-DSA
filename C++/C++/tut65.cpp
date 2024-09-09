#include <iostream>
using namespace std;

template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;

    void display()
    {
        cout << this->data1 << this->data2 << endl;
    }
};
int main()
{
myclass <int, char>op;

    return 0;
}