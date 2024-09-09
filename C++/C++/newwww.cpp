#include<iostream>
using namespace std;

int main(){
     int a =2;
    int *ptr=&a;
    int * ptrtemp= ptr;
    cout<<ptr<<endl;
    cout<<ptrtemp<<endl;
    // cout<<*ptrtemp<<endl;
    
    return 0;
}