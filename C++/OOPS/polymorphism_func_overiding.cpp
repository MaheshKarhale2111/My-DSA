#include <bits/stdc++.h>
using namespace std;

class animal {
    public : 
    void speak(){
        cout<<"Speaking"<<endl; 
    }

}; 

class dog: public animal {
    public: 
    void speak(){
        cout<<"barking"<<endl; 
    }
}; 

signed main(){
    
    dog d; 
    d.speak();
    return 0;
}