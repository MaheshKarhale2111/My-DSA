#include<iostream>
using namespace std;

int fib(int n){ 
    if (n<=2)
    {
        return 1;
    }
    
    return fib(n-2)+ fib(n-1);
}
int main(){
    int a=1;
    // cout<<"enter";
    // cin>>a;
    while(a<=10){
    cout<<a<<"th term is "<< fib(a)<<endl;
    a++;
    }
    
    return 0;
}