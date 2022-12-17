#include <bits/stdc++.h>
using namespace std;
/*
using linked list the bottom most element which enterned first in the box will
be poined to NULL and we will be keep creating nodes and adding nodes of linked
list from top
*/
class node {
public:
  int data;
  node *next;
  // note that with pointer we are pointing to another node so
  // pointer should be of type node
};

void push(int value) {
  node *temp = new node();
  temp->data = value;
}

int isEmpty(node *top) {
  if (top == NULL) {
    return 1;
  }
  return 0;
}

int isFull(node *top) {
  node *ptr = new node();
  /*
  note stack using linkedlist can never get full.
  as we can keep requesting memory , making nodes
  except new operator refuse to give memory
  i.e. new operator return NULL ( no memory available)
  which is almost impossible
  */
  if (ptr == NULL) {
    return 1;
  }
  return 0;
}

node* push(node *top, int x) {
  if (!isEmpty(top)) {
    cout << "Stack over flow" << endl;
    return NULL ; 
  }
  else {
    node * ptr = new node(); 
    ptr->data = x ; 
    ptr->next = top ; 
    top = ptr; 
    return top; 
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  node *first = new node();
  node *second = new node();

  first->data = 80;
  first->next = second;

  second->data = 81;
  second->next = NULL;
  return 0;
}