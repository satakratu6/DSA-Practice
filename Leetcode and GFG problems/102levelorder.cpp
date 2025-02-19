// class Solution
// {
//     void lorder(TreeNode *root, int level, vector<vector<int>> &v)
//     {
//         if (!root)
//         {
//             return;
//         }
//         if (v.size() == level)
//         {
//             v.push_back({});
//         }
//         v[level].push_back(root->val);

//         lorder(root->left, level + 1, v);
//         lorder(root->right, level + 1, v);
//     }

// public:
//     vector<vector<int>> levelOrder(TreeNode *root)
//     {
//         vector<vector<int>> v;
//         lorder(root, 0, v);
//         return v;
//     }
// };
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        if (root == NULL)
            return ans;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if (node->left != NULL)
                    q.push(node->left);
                if (node->right != NULL)
                    q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};