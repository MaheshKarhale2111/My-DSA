#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
    // virtual base class have higher preference
};

*/


class base1{
    int data1;
    public:
    base1(int i){
        data1=i;
        cout<<"base1 class constructor is called"<<endl;
    }

    void print_base1(){
        cout<<"The value of data is "<<data1 <<endl;
        
    }
};

class base2{
     int data2;
    public:
    base2(int i){
        data2=i;
        cout<<"base2 class constructor is called"<<endl;
    }

    void print_base2(){
        cout<<"The value of data is "<<data2 <<endl;
        
    }
};

class derived :public base2, public base1{
int derived1, derived2;
public:
derived (int a, int b, int c, int d): base1(a), base2(b){
    derived1=c;
    derived2=d;
    cout<<"derived constructor is called"<<endl;

}

void print_derived(){
    cout<<"The value of derived1 and derived2 is "<< derived1<<derived2<<endl;
    }
};

int main(){
    derived harry(1,2,3,4);
    harry.print_base1();
    harry.print_derived();


    
    return 0;
}