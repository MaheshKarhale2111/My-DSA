#include <bits/stdc++.h>
using namespace std;

// public -> can be accessed by outside class
// private -> can not be accessed outside class
// protected -> can be access from inherieted classes

class node {
public:
  int data;
  node *next;

  node(int x,
       node *nextnode = NULL) { // assign defalut value as NULL if not passed
    data = x;
    next = nextnode;
  }
};

void printData(node *ptr) {
  while (ptr != NULL) {
    cout << ptr->data << endl;
    ptr = ptr->next;
  }
}

// ----------------------------------------------------------------
// Insertion of node at start

node *insert_at_start(int x, node *head) {
  node *temp = new node(x, head);
  return temp;
}

//--------------------------------------------------------
// insertin at the end of linked list

node *insert_at_end(int x, node *head) {

  node *ptr = head;
  while (ptr->next != NULL) {
    ptr = ptr->next;
  }
  node *temp = new node(x, NULL);
  ptr->next = temp;

  return head;
}

// --------------------------------------------------------------
// insert in between

node *insert_in_between(int x, node *head, int index) {

  node *temp = new node(x, NULL);

  node *ptr = head;
  int i = 0;

  while (i < index - 1) {
    ptr = ptr->next;
    i++;
  }

  temp->next = ptr->next;
  ptr->next = temp;
  return head;
}

int main() {
  // name of node
  // create the node -> allocate the memory

  // assigning the values using constructor
  node *third = new node(500, NULL);
  node *second = new node(50, third);
  node *head = new node(5, second);

  //   printData(head);
  //   printData(insert_at_start(1, head));
  //   printData(insert_at_end(1, head));
  printData(insert_in_between(1, head, 1));

  return 0;
};
