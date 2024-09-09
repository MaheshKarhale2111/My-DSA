#include <bits/stdc++.h>
using namespace std;

class Complex{

    public: 
    int real; 
    int img; 

    Complex operator+ (Complex &obj){
        Complex temp; 
        temp.real = this->real + obj.real; 
        temp.img = this->img + obj.img; 

        return temp; 
    }

    void print(){
        cout<<this->real<<" "<<this->img<<" "<<endl; 
    }



};

signed main(){
    Complex A; 
    A.real = 5; 
    A.img = 6; 

    Complex B; 
    B.real = 11; 
    B.img = 2; 

    Complex C = A+ B; 

    A.print(); 
    B.print(); 
    C.print();

    
    return 0;
}