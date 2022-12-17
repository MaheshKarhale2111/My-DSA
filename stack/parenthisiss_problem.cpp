#include <bits/stdc++.h>
using namespace std;

class stacks {
public:
  int size;
  int top;
  char *stack_arr;
};

//  Function to check if stack is empty or not
int isempty(stacks *ptr) {
  if (ptr->top == -1) {
    return 1; // return 1 if stack is empty
  }

  return 0; // if not empty then return 0
}

// function to chek if stack is full or not
int isfull(stacks *ptr) {
  if (ptr->top == ptr->size - 1) {
    return 1;
  }

  return 0;
}
void push(stacks *ptr, char value) {

  if (ptr->top == ptr->size - 1) {
    cout << "Stack Overflow and cannot push" << value << endl;
  } else {
    ptr->top++;
    ptr->stack_arr[ptr->top] = value;
  }
}
void pop(stacks *ptr) {
  if (ptr->top == -1) {
    cout << "Stack Underflow " << endl;
  } else {
    ptr->top--;
  }
}
void print(stacks *ptr) {
  while (ptr->top != -1) {
    cout << ptr->stack_arr[ptr->top] << endl;
    ptr->top--;
  }
}





void solution(stacks *stack_ptr, char *arr, int n) // same as char arr[]
{
  int count = n;
  //  int n = sizeof(arr)/sizeof(arr[0]); // we cannot use this as array pointer
  //  is passed and not whole array
  // we must pass size as parameter to function
  for (int i = 0; i < n; i++) {
    char temp1 = arr[i];
    char temp2 = stack_ptr->stack_arr[stack_ptr->top];
    if (temp1 == '(' || temp1 == '{' || temp1 == '[') {
      push(stack_ptr, temp1);
      cout << "push" << temp1 << endl;
      count--;

    }

    else if (temp2 == '(' && temp1 == ')' || temp2 == '{' && temp1 == '}' ||
             temp2 == '[' && temp1 == ']') {
      pop(stack_ptr); //****** check ifEmpty condition***********
      cout << "pop" << temp2 << endl;
      count--;
    }
  }

  if (isempty(stack_ptr) && count == 0) {
    cout << "Parenthesis are balanced" << endl;
  } else {
    cout << "Parenthesis are not balanced" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 6;
  char arr[] = {'(', ')', '[', '[', '}', ']'};

  stacks *s;

  s = new stacks();
  s->size = n;
  s->top = -1;
  s->stack_arr = new char(s->size);

  //   push(s,'(');
  solution(s, arr, n);
  // print((s));

  return 0;
}