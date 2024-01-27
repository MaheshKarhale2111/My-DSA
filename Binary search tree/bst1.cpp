#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int d) {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

// code for level order traversal

void levelOrder(Node *root) {
  queue<Node *> q;
  q.push(root);

  while (!q.empty()) {

    int size = q.size();

    for (int i = 0; i < size; i++) {

      Node *front = q.front();
      q.pop();
      cout << front->data;

      if (front->left)
        q.push(front->left);
      if (front->right)
        q.push(front->right);
    }

    cout<<endl;
  }
}

Node* insertIntoBst(Node* &root, int data) {

  // creation of node if root is null
  if (root == NULL) {
    root = new Node(data);
    return root;
  }

  if (data < root->data) {
    // push in left part
    // this will go to the left and root->left is null before so hit the base
    // case to crete new node and return it
    root->left = insertIntoBst(root->left, data);

  } else {
    // push in right part
    root->right = insertIntoBst(root->right, data);
  }

  return root;
}

void takeInput(Node* &root) {
  int data;
  cin >> data;

  while (data != -1) {
    Node* root1 = insertIntoBst(root, data);
    cin >> data;
  }
}

int main() {

  Node *root = NULL;

  cout << "Enter data to create BST" << endl;
  takeInput(root);
  levelOrder(root);

  return 0;
}