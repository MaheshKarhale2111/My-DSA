#include <bits/stdc++.h>
using namespace std;

/*  Stack vs heap memory

A stack is a special area of computer’s memory which stores temporary variables created by a function. In stack, variables are declared, stored and initialized during runtime.

The heap is a memory used by programming languages to store global variables. By default, all global variable are stored in heap memory space. It supports Dynamic memory allocation.


*/

class stacks // here you can not use word stack at it is a keyword
{
public:
    int size;
    int top;
    int *arr; // making array in heap 
};

// Function to check if stack is empty or not
// int isempty(stacks *ptr)
// {
//     if (ptr->top == -1)
//     {
//         return 1;
//     }

//     return 0;
// }

// // function to chek if stack is full or not
// int isfull(stacks *ptr)
// {
//     if (ptr->top == ptr->size -1)
//     {
//         return 1;
//     }

//     return 0;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stacks s;
    s.size =80;
    s.top = -1;// top =-1 means nohting is present in stack
    s.arr = new int (s.size); // allocates memory equal to size of int * s.size
    // // same as malloc( s.size * size of int )
    // // since we are storing int in stack we allocated meomory of int accordingly

    // ** differnet method. creating pointer of type stack
    // stacks *s;
    // s = new stacks();
    // s->size = 80;
    
    // s->top = -1;               // top =-1 means nohting is present in stack
    // s->arr = new int(s->size); // allocates memory equal to size of int * s.size
    // //                            // same as malloc( s.size * size of int )
    // //                            // since we are storing int in stack we allocated meomory of int accordingly

     
    // cout<<s->arr<<endl; 
    // cout<<s->arr[0]<<endl; 
    // cout<<s->arr[1]<<endl; 
    // cout<<s->arr[2]<<endl; 

    // cout<<s.arr<<endl;
    // cout<<s.arr[0]<<endl;
    // cout<<s.arr[1]<<endl;
    // cout<<s.arr[2]<<endl;


    // if(isempty(s)) {
    //     cout<<"Stack is empty";
    // }
    // else {
    //     cout<<"stack is not empty";
    // }
    return 0;
}