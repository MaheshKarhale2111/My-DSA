// circular linked list
//oct 19 2021

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void printdata(node *head)
{
    node *ptr = head;
    do
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr!= head);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node *head;
    node *second;
    node *third;
    node *fourth = new node();

    head = new node();
    second = new node();
    third = new node();
    head->next = second;
    head->data = 11;

    second->data = 12;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 21;
    fourth->next = head;

printdata( head);
    return 0;
}