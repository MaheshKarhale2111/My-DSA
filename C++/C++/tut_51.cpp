#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
         void getdata(){
             cout<<"real part is "<<real<<endl;
             cout<<"imaginary part is "<<imaginary<<endl;
         }
         void setdata( int a, int b){
             real = a;
             imaginary=b;         }         
};
int main(){
    // complex c1;
    // complex *ptr =&c1;

    complex *ptr = new complex;
    // another way using new operator

    // (*ptr).setdata(1,5);// note very imp = bracket is imp as precedence of dot(.) operator is higher than star(*)
ptr->setdata(1,5);
// this means ptr jis object ko point kar raha hai uska set data run karo
    (*ptr).getdata();

    return 0;
}