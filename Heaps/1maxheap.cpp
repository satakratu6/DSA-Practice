#include <bits/stdc++.h>
using namespace std;
class HeapNode
{
public:
  int data;
  HeapNode *left;
  HeapNode *right;
  HeapNode *parent;
  HeapNode(int x)
  {
    data = x;
    left = right = parent = nullptr;
  }
};
class heap
{
  HeapNode *root;
  queue<HeapNode *> que;
  heap()
  {
    root = nullptr;
  }
  void insert(int x)
  {
    HeapNode *temp = new HeapNode();
    if (!root)
    {
      root = temp;
      que.push(temp);
      return;
    }
    HeapNode *potentialParent = que.front();
    if (!potentialParent->left)
    {
      potentialParent->left = temp;
    }
    else
    {
      potentialParent->right = temp;
      que.pop();
    }
    temp->parent = potentialParent;
    que.push(temp);
    heapifyUp(temp);
  }
  void heapifyUp(HeapNode *node)
  {
    while (node->parent && node->data > node->parent->data)
    {
      swap(node->data, node->parent->data);
      node = node->parent;
    }
  }
  HeapNode *lastAddedElement()
  {
    return que.back();
  }
  void deleteNode()
  {
    if (!root)
    {
      cout << "Nothing to delete";
      return;
    }
    HeapNode *lastElement = lastAddedElement();
    root->data = lastElement->data;
    if (!lastElement->parent)
    {
      if (lastElement->parent->right)
      {
        // I am a right child
        lastElement->parent->right = nullptr;
      }
      else
      {
        // I am a left child
        lastElement->parent->left = nullptr;
      }
    }
    else
    {
      root = nullptr;
    }
    delete lastElement;
    heapifyDown(root);
  }
  HeapNode *heapifyDown(HeapNode *node)
  {
    HeapNode *largest = node;
    if (node->left && node->left->data > node->data)
    {
      largest = node->left;
    }
    if (node->right && node->right->data > node->data)
    {
      largest = node->right;
    }
    if (largest != node)
    {
      swap(largest->data, node->data);
      heapifyDown(largest);
    }
  }
};
int main()
{
  return 0;
}