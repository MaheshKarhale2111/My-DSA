#include<iostream>
using namespace std;
class baseclass {
    public :

    int var1=1;
   virtual void display(){
        cout<< "Displaying base class variable "<<var1<<endl;
    }

};
class derived : public baseclass{
public:
 int var2=2;
    void display(){
        cout<< "Displaying base class variable "<<var1<<endl;
        cout<< "Displaying derived class variable "<<var2<<endl;
    }


};
int main(){
     baseclass *base_ptr;
    baseclass obj1;
    derived obj2;
    base_ptr =&obj2;// pointing base class pointer to derived class
    base_ptr->display();
    return 0;
}