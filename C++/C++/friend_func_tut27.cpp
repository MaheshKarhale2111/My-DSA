#include <iostream>
using namespace std;

// forward declaratio just for compiler
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
    // to access private data if some other class we use friend function
    // but we will define it after the complex class and not here
};

class complex
{
    int a, b;
    // Individully declaring functions as friends
    friend int calculator ::sumrealcomplex(complex, complex);
    friend int calculator ::sumcompcomplex(complex, complex);

    // declaring entire class as  friends
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int main()
{

    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);

    calculator calc;
    int result1 = calc.sumrealcomplex(o1, o2);
    int result2 = calc.sumcompcomplex(o1, o2);
    cout << result1 << result2;

    return 0;
}