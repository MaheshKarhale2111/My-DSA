#include <bits/stdc++.h>
#include <cstring>
using namespace std;

stack<char> sp; // we are using stack from STL
int precedence(char ch) {
  if (ch == '*' || ch == '/') {
    return 3;
  } else if (ch == '+' || ch == '-') {
    
    return 2;
  } else {
    return 0;
  }
}
int isOperator( char ch){

    if ( ch == '+'|| ch == '-' || ch == '*' || ch == '/' ){
        return 1;
    }
    return 0;
}
void solution(string infix) {
  // const char infix []  = "x-y/z-k*d";
  char *postfix = new char(infix.length() + 1); // creating a character array
  int i = 0;                                   // to track infix traversal
  int j = 0;                                   // to track postfix addition

  while (infix[i] != '\0') {
    if (!isOperator(infix[i])) {
      postfix[j] = infix[i];
      // cout<<infix[i]<<endl;
      i++;
      j++;
    } else {
      if (sp.empty() ||precedence(infix[i]) > precedence(sp.top())) {
        sp.push(infix[i]);
        i++;
      } else {
        postfix[j] = sp.top();
        sp.pop();
        j++;
      }
    }
  }
  while (!sp.empty()) {
    postfix[j] = sp.top();
    sp.pop();
    j++;
  }
  postfix[j] = '\0';
  cout<<postfix<<endl;
  // return postfix; 
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

string exp = "x-y/z-k*d/h"; 
solution(exp);
  return 0;
}