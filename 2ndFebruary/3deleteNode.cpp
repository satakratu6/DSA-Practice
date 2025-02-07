class Solution
{
  TreeNode *findMin(TreeNode *root)
  {
    while (root->left)
    {
      root = root->left;
    }
    return root;
  }

public:
  TreeNode *deleteNode(TreeNode *root, int key)
  {
    if (!root)
    {
      return nullptr;
    }

    if (key > root->val)
    {
      root->right = deleteNode(root->right, key);
    }
    else if (key < root->val)
    {
      root->left = deleteNode(root->left, key);
    }
    else
    {
      if (!root->left && !root->right)
      {
        delete root;
        return nullptr;
      }
      else if (root->left && root->right)
      {
        TreeNode *temp = findMin(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
      }
      else
      {
        TreeNode *temp = root->left ? root->left : root->right;
        delete root;
        return temp;
      }
    }
    return root;
  }
};
