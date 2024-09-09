#include<iostream>
using namespace std;
class complex {
    int a,b;
     public:
     // creating a constructor
     // constructor is a specil function with same name as of the class.
     // it is automatically invoked whebever an object is created
     // used to initalize the objects of its class
     complex(void);// constructor declaration
      void print()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }


};
complex :: complex (void){// this is default constructure as it takes no parameters
    a=10;
    b=0;
    cout<<"hello world";
}
int main(){
    complex c1,c2; // constructor  is automatically invoked whebever an object is created
    c1.print();
    c2.print();    

    
    return 0;
}
/* Properties of constructor 
1. It should be declared in the public section of the class
2.They are automatically
3.They cannot return vales and do not have return types
4. it can have defalt argument( passing values )
5. We can not refer to thier address*/