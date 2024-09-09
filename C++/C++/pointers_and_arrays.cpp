#include<iostream>
using namespace std;

int main(){
    int marks [4] = {21, 23, 56, 67};
    int* p= marks;
    cout<<"The value of marks[0] is "<<*p;
    
    return 0;
}