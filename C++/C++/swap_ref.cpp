//call by refenrence by using c++ referende variales
#include<iostream>
using namespace std;

// void swapref(int&a, int&b){
//     int temp =a;
//     a=b;
//     b=temp;


// }
 int  swapref(int&a, int&b){
    int temp =a;
    a=b;
    b=temp;
return a;

}


int main(){
    int x=4 ,y=5;
    cout<<x<<y;

    // swapref(x,y)=766;
    swapref(x,y);
    cout<<x<<y;

    return 0;
}