#include <bits/stdc++.h>
using namespace std;
/*
StackTop is nothing but returing value at the index top 
Stackbottom is returning the element at bottom that is at index 0;

*/
class stacks {
public:
  int size;
  int top;
  int *arr;
};

int stackTop(stacks *ptr){
    return ptr->arr[ptr->top]; 
}
int stackBottom(stacks *ptr){
    return ptr->arr[0]; 
}

void push(stacks *ptr, int value) {
  if (ptr->top == ptr->size - 1) {
    cout << "Stack Overflow and cannot push" << value << endl;
  } else {
    ptr->top++;
    ptr->arr[ptr->top] = value;
  }
}

void print(stacks *ptr) {
  while (ptr->top != -1) {
    cout << ptr->arr[ptr->top] << endl;
    ptr->top--;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  stacks *sp;
  sp = new stacks();
  sp->size = 10;
  sp->top = -1;
  sp->arr = new int(sp->size);

  push(sp, 20);
  push(sp, 21);
  push(sp, 22);
  push(sp, 23);
  push(sp, 24);
  push(sp, 25);
  push(sp, 26);
  push(sp, 27);
  push(sp, 28);
  push(sp, 29);
  push(sp, 30);

cout<<stackTop(sp)<<endl;
cout<<stackBottom(sp)<<endl;
  //   cout<<sp->top<<endl;
  return 0;
}