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

//----------------------------------------------------------------

void inorder(node *root) {

  // base case
  if (root == NULL) {
    return;
  }

  // LNR

  inorder(root->left);
  // above line will call inorder function again saying root->left wala is out
  // new root and tree start from that
  cout << root->data << " ";

  inorder(root->right);
}

// ----------------------------------------------------------------

void preorder(node *root) {

  if (root == NULL) {
    return;
  }
  // NLR
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

//------------------------------------------------------------------------------

void postorder(node *root) {
  if (root == NULL) {
    return;
  }

  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

//------------------------------------------------------------------------------
int main() {

  node *root = NULL;
  root = buildTree(root);
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

  cout << "--------------------------------" << endl;
    cout << "printing inorder traversal output..." << endl;
    inorder(root);

//   cout << "printing preorder traversal output..." << endl;
//   preorder(root);

  // cout << "printing postorder traversal output..." << endl;
  // postorder(root);
  // bhai aaj nahi karna day 1

  return 0;
}