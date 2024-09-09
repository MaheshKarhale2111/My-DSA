#include <iostream>
#include<cmath>
using namespace std;

class simplecalculator
{
protected:
    float a, b, result;

public:
    simplecalculator(float p, float q)
    { // constructor
        a = p;
        b = q;
    }

    void calc()
    {
        char c;
        cout << "Enter the operand" << endl;
        cin >> c;

        switch (c)
        {

        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        }

        cout << result << endl;
    }
};

class scicalculator
{
protected:
    float num, result;

public:
    scicalculator(float p)
    {
        num = p;
    }
    void scical()
    {
        cout << "1 for sin" << endl
             << "2 for cos" << endl
             << "3 for tan" << endl
             << "4 for log" << endl;

        int n;
        cout<<"Enter the corresponding number";
        cin>>n;

        switch(n){

            case 1: result= sin(num);
            break;
            case 2: result= cos(num);
            break;
            case 3: result= tan(num);
            break;
            case 4: result= log(num);
            break;
        }
cout<<result<<endl;


            
    }
};

int main()
{
    float a,b;
    a=6;
    b=5;

    simplecalculator d1(a,b);
    d1.calc();




    return 0;
}