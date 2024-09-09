#include<iostream>
using namespace std;
// ************ WATCH NARES I TECHNOLOGIES VIDEO FOR UNDERSTANDING OF THIS OPERATOR 
// AND ALSO TUT 64
class A{
    int a;
    public :
          A&  setdata(int a){// A& will return the object
            this->a=a;
              return *this;

          }

          void getdata(){
              cout<<"The value of a is "<<a<<endl;
          }
};
int main(){
    //this is a keyword which is a pointer which points to the objec which invokes the 
    // member function
    A a;
    a.setdata(4).getdata();//

    // but a.setdata() will reurn a object and for which getdata we will invoke

    return 0;
}