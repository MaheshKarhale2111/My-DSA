#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    } // Below line means that non member sumcomplex function is allowed to do anything with my private parts
    friend complex sumcomplex(complex o1, complex o2);
    void print()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2) // here we used complex sumcomplex and not void sumcomplex as 
                                            // we are returning a complex number
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c2.setnumber(5, 8);

    sum = sumcomplex(c1, c2);
    c1.print();
    c2.print();
    sum.print();

    return 0;
}

/* Properties of friend function
1. Not in the scope of class . It is not a part of class
2.since it is not in the scope of the class ,  it cannot be called from the object of that class
for eg. c1.sumcomplex() is invalid
3.usually contains objects as arguments  
4. can be declared inside public or private section of the class
          */