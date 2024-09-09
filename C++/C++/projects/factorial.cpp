//this is a program to find factorial

#include<iostream>
using namespace std;

int main(){
    int a,mul=1; // here since we are multiplying mul in further code 
                 // hence we need to difine their initial values first 
                 // we declared i=1 in for loop and declaring mul =1 here 

                   cout<<"Enter a number :";
                 cin>>a;

for (int i = 1; i <= a; i++)
{
    mul=mul*i;
}

    cout<<mul;
    return 0;
}