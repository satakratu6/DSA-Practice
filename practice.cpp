#include <bits/stdc++.h>
using namespace std;
class Tree
{
public:
  int data;
  Tree *left;
  Tree *right;
  Tree(int data) : data(data), left(nullptr), right(nullptr) {}
};
Tree *insert(Tree *root, int key)
{
  if (!root)
  {
    return new Tree(key);
  }
  if (root->data == key)
  {
    return root;
  }
  else if (root->data < key)
  {
    root->right = insert(root->right, key);
  }
  else
  {
    root->left = insert(root->left, key);
  }
  return root;
}
void inorder(Tree *root)
{
  if (!root)
  {
    return;
  }
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}
void preorder(Tree *root)
{
  if (!root)
  {
    return;
  }
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
void postOrder(Tree *root)
{
  if (!root)
  {
    return;
  }
  preorder(root->left);
  preorder(root->right);
  cout << root->data << " ";
}
class solution
{
public:
  vector<vector<int>> levelorder(Tree *root)
  {
    vector<vector<int>> ans;
    if (!root)
    {
      return ans;
    }
    queue<Tree *> q;
    q.push(root);
    while (!q.empty())
    {
      vector<int> levels;
      int s = q.size();
      for (int i = 0; i < s; i++)
      {
        Tree *node = q.front();
        q.pop();
        if (node->left)
        {
          q.push(node->left);
        }
        if (node->right)
        {
          q.push(node->right);
        }
        levels.push_back(node->data);
      }
      ans.push_back(levels);
    }
    return ans;
  }
};
Tree *getSuccessor(Tree *curr)
{
  curr = curr->right;
  while (curr && curr->left)
  {
    curr = curr->left;
  }
  return curr;
}
Treen *deleteNode(Tree *root, int key)
{
  if (!root)
  {
    return root;
  }
  if (root->data < key)
  {
    root->right = deleteNode(root->right, key);
  }
  else if (root->data > key)
  {
    root->left = deleteNode(root->left, key);
  }
  else
  {
    if (root->right == nullptr)
    {
      Tree *temp = root->left;
      delete root;
      return temp;
    }
    else if (root->left == nullptr)
    {
      Tree *temp = root->right;
      delete root;
      return temp;
    }
    Tree *succ = getSuccessor(root);
    root->data = succ->data;
    root->right = deleteNode(root->right, key);
  }
}