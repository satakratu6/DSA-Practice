// You are given a BST(Binary Search Tree) with n number of nodes and value x. your task is to find the greatest value node of the BST which is smaller than or equal to x.
// Note: when x is smaller than the smallest node of BST then returns -1.

// Examples:

// Input:
// n = 7               2
//                      \
//                       81
//                     /     \
//                  42       87
//                    \       \
//                     66      90
//                    /
//                  45
// x = 87
// Output: 87
// Explanation: 87 is present in tree so floor will be 87.
// Input:
// n = 4                     6
//                            \
//                             8
//                           /   \
//                         7       9
// x = 11
// Output: 9
// Input:
// n = 4                     6
//                            \
//                             8
//                           /   \
//                         7       9
// x = 5
// Output: -1
class Solution
{
  int ans = -1;

public:
  int floor(Node *root, int x)
  {
    // Code here
    if (!root)
    {
      return -1;
    }
    if (root->data <= x)
    {
      ans = root->data;
      floor(root->right, x);
    }
    else
    {
      floor(root->left, x);
    }
    return ans;
  }
};