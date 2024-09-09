#include<iostream>
using namespace std;

class baseclass {
    public :

    int var1;
    void display(){
        cout<< "Displaying base class variable "<<var1<<endl;
    }

};
class derived : public baseclass{
public:
 int var2;
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

    base_ptr->var1= 31;// we can assign like this as var1 is public
    // base_ptr->var2=63; this will not work as pointer is binded to base class . even if it is pointing to object of derived class it can interact with that items only which are derived from base class. like var 1. look display is avaible in both funcions but it cant invoke display of derived class; 
    base_ptr->display();

    derived * derived_ptr;// making derived class pointer
    derived_ptr = &obj2;// pointing it to object of derived class

    derived_ptr->var2= 98;
    derived_ptr->display();


    //*********** run time polymorphism************ 

    return 0;
}