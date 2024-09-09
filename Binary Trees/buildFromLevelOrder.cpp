#include <bits/stdc++.h>
using namespace std;

class node {
public:
  int data;
  node *left;
  node *right;

  node(int d) { // constructor
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

node *buildTree(node *root) {

  cout << "Enter the data:" << endl;
  int data;
  cin >> data;

  root = new node(data);
  if (data == -1) {
    return NULL;
  }

  cout << "Enter left wala data for" << data << endl;
  root->left = buildTree(root->left);

  cout << "Enter right wala data for" << data << endl;
  root->right = buildTree(root->right);

  return root;
}

void buiildFromLevelOrder(node *&root) { // here we are passing by reference

  queue<node *> q;
  cout << "Enter data for root:" << endl;
  int rootData;
  cin >> rootData;
  root = new node(rootData); // calling constructor 
  q.push(root);

  while(!q.empty()){
    node* temp = q.front(); 
    q.pop(); 

    cout<<"Enter left node for "<< temp->data <<endl; 
    int leftData; 
    cin >> leftData; 

    if(leftData!= -1){
        temp->left = new node(leftData); // calling constructor 
        q.push(temp->left); 
    }

    cout<<"Enter right node for "<< temp->data <<endl; 
    int rightData; 
    cin >> rightData; 

    if(rightData!= -1){
        temp->right = new node(rightData); // calling constructor 
        q.push(temp->right); 
    }
  }
}

void levelOrderTraversal(node *root) {
  // aaj nahi bhai , aag lagani hai
  queue<node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty()) {      // jabtak queue khali nahi hai
    node *temp = q.front(); // get first element of queue
    // in queue elements are inserted from back and removed from front

    q.pop();

    // After adding NULL our queue look like this
    // 1 NULL 3 7 NULL 7 11 17

    if (temp == NULL) {
      // purana wala complete traverse ho chuka hai
      cout << endl;

      if (!q.empty()) {

        q.push(NULL);
      }
    }

    else {
      cout << temp->data << " ";
      if (temp->left) { // basically saying ki temp ka left NULL to nahi hai
        q.push(temp->left);
      }

      if (temp->right) {
        q.push(temp->right);
      }
    }

    // write on notebook to understand this
  }
  cout << endl;
}


int main() {

  node *root = NULL;
  buiildFromLevelOrder(root);
  // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
  levelOrderTraversal(root);



//   root = buildTree(root);
//   // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

//   cout << "--------------------------------" << endl;
//   cout << "printing level order traversal output..." << endl;
//   levelOrderTraversal(root);
  // bhai aaj nahi karna day 1

  return 0;
}