#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // in linked list
    // memory adress 0 ( NULL) means it does not point to any valid memory location
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