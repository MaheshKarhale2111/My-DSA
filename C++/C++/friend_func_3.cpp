#include <iostream>
using namespace std;
// forward declaration 
class y;


class x
{
    int data;
friend void add (x, y);// But the friend dont know about y till now hence we need forward declaration oY y
public:
    void setvalue(int value)
    {
        data = value;
    }
};
class y
{
    int num;
friend void add(x, y);
public:
    void setvalue(int value)
    {
        num = value;
    }
};

void add ( x o1, y o2){// this means one object from x and one object from y
   cout<<"The sum is "<< o1.data + o2.num;
}

int main()
{ x a1;
a1.setvalue(3);

y b1;
b1.setvalue(4);

add (a1,b1);


    return 0;
}