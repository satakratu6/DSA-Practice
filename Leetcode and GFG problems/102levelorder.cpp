class Solution
{
    void lorder(TreeNode *root, int level, vector<vector<int>> &v)
    {
        if (!root)
        {
            return;
        }
        if (v.size() == level)
        {
            v.push_back({});
        }
        v[level].push_back(root->val);

        lorder(root->left, level + 1, v);
        lorder(root->right, level + 1, v);
    }

public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> v;
        lorder(root, 0, v);
        return v;
    }
};
