#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
  int data;
  TreeNode *left, *right;
  TreeNode(int x)
  {
    data = x;
    left = right = NULL;
  }
};

int SumAllNode(TreeNode *root)
{

  if (root == NULL)
  {
    return 0;
  }

  int lhs = SumAllNode(root->left);
  int rhs = SumAllNode(root->right);

  return lhs + rhs + root->data;
}

int countAllNodes(TreeNode *root)
{

  if (root == NULL)
  {
    return 0;
  }

  int lhs = countAllNodes(root->left);
  int rhs = countAllNodes(root->right);

  return lhs + rhs + 1;
}
int maxelem(TreeNode *root)
{
  if (root == nullptr)
  {
    return 0;
  }
  int lhs = maxelem(root->left);
  int rhs = maxelem(root->right);
  return max(root->data, max(lhs, rhs));
}
int main()
{

  TreeNode *root = new TreeNode(10);
  root->left = new TreeNode(20);
  root->right = new TreeNode(30);
  root->left->left = new TreeNode(40);
  root->left->right = new TreeNode(50);
  root->right->left = new TreeNode(60);
  root->right->right = new TreeNode(70);
  cout << SumAllNode(root) << endl;
  cout << countAllNodes(root) << endl;
  cout << maxelem(root) << endl;
  return 0;
}
