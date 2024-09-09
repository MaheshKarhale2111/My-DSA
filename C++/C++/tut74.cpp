#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    // function objects or functor : Function wrapped in class so that it avalable like an object 
    int arr [] = {1,3 ,83, 89 ,34 };
    sort (arr, arr+5, greater<int>()); // this will arrage in decreasing order
    sort (arr, arr+5);// this will arrange in incresing order
    for (int i = 0; i < 6; i++)
    {
        cout<< arr[i]<<" ";
    }
    
    return 0;
}