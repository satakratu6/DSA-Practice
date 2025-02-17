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
  }
};
int main()
{
  return 0;
}