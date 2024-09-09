#include<iostream>
using namespace std;

 
    int can( int a , int b)
    { 
        int temp =a,c;
        a=b;
        b=temp;
        c= a/b;
        return c;
    }



    int main (){

        int a =10;
        int b=20;
        // cout<< a/b<<endl;
        cout<<can(a,b);
        // int temp =a,c;
        // a=b;
        // b=temp;
        
        


    }



    

    


    
