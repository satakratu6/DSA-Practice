vector<vector<int>> zigZag(TreeNode *root)
{
  vector<vector<int>> result;
  if (!root)
  {
    return result;
  }
  deque<TreeNode *> dq;
  // push root to queue
  dq.push_back(root);
  bool leftToRight = true;
  while (!dq.empty())
  {
    int sz = dq.size();
    vector<int> level;
    for (int i = 0; i < sz; i++)
    {
      if (leftToRight)
      {
        TreeNode *node = dq.front();
        dq.pop_front();
        level.push_back(node->val);
        if (node->left)
          dq.push_back(node->left);
        if (node->right)
          dq.push_back(node->right);
      }
      else
      {
        TreeNode *node = dq.back();
        dq.pop_back();
        level.push_back(node->val);
        if (node->right)
          dq.push_front(node->right);
        if (node->left)
          dq.push_front(node->left);
      }
    }
    result.push_back(level);
    leftToRight = !leftToRight;
  }
}