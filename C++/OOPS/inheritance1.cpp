#include <bits/stdc++.h>
using namespace std;

class human{

    protected: 
    int height; 
    int weight; 
    int age; 

    public : 
    int getAge() {
        return this->age; 
    }

    void sleep(){
        cout<<"gale"<<endl;
    }

    void setWeight(int w){
        this->weight  = w;
    }
};

// inheritance classes starting 
// symtax -> class {classname} : {public/private/protected} {parentclassname}

class Male {

    public: 
    string color; 

    void sleep(){
        cout<<"male"<<endl; 
    }

    // void print(){
    //     cout<<this->age<<endl; 
    // }
};

class baccha : public human, public Male {

};


signed main(){

    Male m; 
    // cout<<m.age<<endl;
    // m.print();
    baccha b; 
    b.human::sleep(); 

 
}