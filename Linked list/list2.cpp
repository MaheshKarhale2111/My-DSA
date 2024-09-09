/*
 Insert at beginning  - O(1)
 Insert in between  - O(n)
 Insert at the end  - O(n)
 Insert after node   - O(1)
// in the last case adress of node after which we have to insert is given 


*/
// Date 1/10/2021

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
// ******linked list traversal********
void printdata(node *ptr) 
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}







//***********Insert at first**********
node *insert_at_first(node *head, int data) // this function will return a pointer of type node
// taking head pointer and data to insert as input

{
    node *ptr = new node(); //allocating memory to new pointer of type node
    ptr->next = head;
    ptr->data = data;
    return ptr;
}



//************Insert at end **************
void insert_at_end(node *head, int data)
{
    node *ptr = new node();
    ptr->data = data;
    ptr->next = NULL;
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next= ptr;
}






//***********Insert in between**********
void insert_in_between(node *head, int data, int index)
{
    node *ptr = new node(); //allocating memory to new pointer of type node as
                            // we have to traverse till index and we dont want to lose head;
    // node *temp = new node();
    // temp = head; // instead allocating space, we can create local temp node
    node *temp = head;
    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }

    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
    // return head;
}













int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node *head;
    node *second;
    node *third;
    

    head = new node();
    second = new node();
    third = new node();
    head->data = 11;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 13;
    third->next = NULL;

    // head = insert_at_first(head, 56); // calling function
    insert_in_between(head, 56, 1); // calling function
    // insert_at_end(head, 33); // calling function
    printdata(head);

    return 0;
}