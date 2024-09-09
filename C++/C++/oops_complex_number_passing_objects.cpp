#include<iostream>
using namespace std;

class complex{
int a,b;
     public :
     void setdata(int p, int q){
         a=p;
         b=q;
     }

     void setDataBySum(complex o1,complex o2){
         a= o1.a +o2.a ;//note here o1.a is not multiplicatio. it says sum of a from o1 and a from o2 
         b= o1.b +o2.b;

     }


     void print(void){
         cout<<"The value of complex number is "<<a<<"+"<<b<<"i"<<endl;
     }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c3.setDataBySum(c1,c2);
    c1.print();
    c2.print();
    c3.print();
    return 0;
}