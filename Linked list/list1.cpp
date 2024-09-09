#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next; // a pointer of type node to store adress of next node 
};
void printdata(node *ptr)
{ // this function will take a pointer of type node

    while (ptr != NULL)
    {
        cout <<ptr->data<<endl;
        ptr = ptr->next;

    }
}
 
int main()
{
    
    // in linked list
    // memory adress 0 ( NULL) means it does not point to any valid memory location
    // Note : Memory allocation to heap memory and not stack memory 
    node *head;   // creating a pointer of type node. Same like int * ptr
    node *second; // creating a pointer of type node. Same like int * ptr
    node *third;  // creating a pointer of type node. Same like int * ptr
    // allocation of heap memory to head node;
    // this will return a pointer of type node
    head = new node();
    second = new node();
    third = new node();
    // Now declaring values

// By combining all above steps we can wrtie 
// node *head = new node ();

/* 
Dynamic memory allocation in C++ refers to the process of allocating memory for objects or data structures at runtime. It allows you to create objects whose size is determined dynamically, rather than being fixed at compile time. C++ provides several operators and functions to perform dynamic memory allocation, such as new, delete, new[], and delete[].


Dynamic memory allocation is useful when you need to create objects dynamically during program execution, or when the size of objects or data structures is not known until runtime. It allows you to manage memory efficiently and utilize resources based on runtime requirements. However, it's important to note that you are responsible for deallocating the dynamically allocated memory to prevent memory leaks.
*/



    head->data = 7;
    head->next = second; // linking first and second node
    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = NULL; // terminating

    //calling the function 
    printdata( head);




    return 0;
}
