#include<iostream>
using namespace std;

class base1{
    public: 
         void greet(){
            cout<<"how are you?";
         }

};
class base2{
    public: 
         void greet(){
            cout<<"kaise ho bhai?";
         }

};

class derived : public base1, public base2{
int a;

public:
void greet(){
    base1::greet();// caling base1 greet
                   // ambiguity resolution
}

};



int main(){
    
derived d;

d.greet();



    return 0;
}