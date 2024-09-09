// Deletion in linked list
/*
 Deleting the first node
 Deleting the last node
 Deleting the node between
 Deleting a node with given key

*/
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

node *delete_at_first(node *head)
{
    node *ptr; // no need to declare memory
    ptr = head->next;
    free(head);
    return ptr;
}
// void delete_at_first (node *head){  // not working
//        node * ptr;
//        ptr= head;
//        head = head->next;
//        free(ptr); // hmm we didnt allocated memory to ptr then w
// why we are freeing it?
// actually we are freeing memery which ptr is pointing that is first node

// }

void delete_inbetween(node *head, int index)
{
    node *ptr = head; // note I often forgot this to point on head before incrementing
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    node *q = ptr->next;
    ptr->next = q->next;
    free(q);
}

// void delete_at_end(node *head)
// {
//     node *p = head;
//     node *q = head->next;
//     while (q->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);
// }

void delete_at_end(node *head)
{

    node *p = head;
    while (p->next->next != NULL)
    {
        p = p->next;
    }

    node *q = p->next;
    p->next= NULL;
    free(q);
}
void delete_at_value(node *head, int value)
{
    node *p = head;
    node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {

        p->next = q->next;
        free(q);
    }
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
    head->data = 11;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 21;
    fourth->next = NULL;

    // head = delete_at_first(head);
    // delete_at_first(head);
    // delete_inbetween(head, 0);
    delete_at_end( head);
    // delete_at_value(head, 12);
    printdata(head);
    return 0;
}