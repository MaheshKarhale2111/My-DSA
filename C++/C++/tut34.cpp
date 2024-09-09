#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){} // defalult constructor
    number(int num){
        a=num;
    }
    void display(){
        cout<<"The number for this objext is "<< a<< endl;
    }
};


int main(){
    number x,y,z;
    return 0;
}