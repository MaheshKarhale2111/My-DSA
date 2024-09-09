#include <bits/stdc++.h>
using namespace std;
/*
The operations in stack
isEmpty()
isFull()
Push()
Pop()
Peek()
are done in constant time so time complexity is O(1)

*/
class stacks
{
public:
  int size;
  int top;
  int *arr;
};
void push(stacks *ptr, int value)
{
  if (ptr->top == ptr->size - 1)
  {
    cout << "Stack Overflow and cannot push" << value << endl;
  }
  else
  {
    ptr->top++;
    ptr->arr[ptr->top] = value;
  }
}
void pop(stacks *ptr)
{
  if (ptr->top == -1)
  {
    cout << "Stack Underflow " << endl;
  }
  else
  {
    ptr->top--;
  }
}
void print(stacks *ptr)
{
  while (ptr->top != -1)
  {
    cout << ptr->arr[ptr->top] << endl;
    ptr->top--;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  stacks *sp;
  sp = new stacks();

  /*
  new stacks() dynamically allocates memory for an object of type stacks and calls its constructor.
The new keyword returns a pointer to the newly allocated and constructed object.
sp now points to this new stacks object.*/
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
  push(sp, 23);
  push(sp, 23);
  push(sp, 23);
  push(sp, 23);
  push(sp, 23);
  pop(sp);
  print(sp);
  //   cout<<sp->top<<endl;
  return 0;
}