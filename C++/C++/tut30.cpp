#include<iostream>
using namespace std;
// is parameterzed constructor
class complex {
    int a,b;
     public:
     
     complex(int , int );// constructor declaration
      void print()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }


};
complex :: complex (int x, int y){// this is parameterzed constructor
    a=x;
    b=y;
    cout<<"hello world";
}

int main()
{
    complex a(4,6);// implicit call 
    a.print();

    // Explicit call
    complex b= complex (5,7);
    b.print();


    
    return 0;
}