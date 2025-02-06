#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

Node *insert(Node *root, int key)
{
  if (!root)
  {
    return new Node(key);
  }
  if (root->data == key)
  {
    return root;
  }
  if (root->data < key)
  {
    root->right = insert(root->right, key);
  }
  else
  {
    root->left = insert(root->left, key);
  }
  return root;
}

void inorder(Node *root)
{
  if (!root)
  {
    return;
  }
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

int main()
{
  Node *root = new Node(50);
  root = insert(root, 30);
  root = insert(root, 20);
  root = insert(root, 40);
  root = insert(root, 70);
  root = insert(root, 60);
  root = insert(root, 80);

  inorder(root); // This will print the BST in sorted order

  return 0;
}
