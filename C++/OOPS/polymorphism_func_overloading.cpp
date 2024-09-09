#include <bits/stdc++.h>
using namespace std;

class human {


    public : 
    int age; 

    public: 

    void func(int x){
        cout<<"this is one"; 
    }

    void func(int x,int y){
        cout<<"this is two"; 
    }

    void func(string x){
        cout<<"this is three"; 
    }


}; 


signed main(){
   
   human alpha; 
   alpha.func(3);
   alpha.func(3,4);
   alpha.func("mahesh");



   return 0; 
}