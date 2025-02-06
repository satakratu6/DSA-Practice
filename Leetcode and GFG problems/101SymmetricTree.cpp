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
private:
    bool isCheck(TreeNode *left, TreeNode *right)
    {
        if (!left && !right)
        {
            return true;
        }
        if (!left || !right)
        {
            return false;
        }
        return (left->val == right->val) && isCheck(left->left, right->right) && isCheck(left->right, right->left);
    }

public:
    bool isSymmetric(TreeNode *root)
    {
        bool ans = isCheck(root->left, root->right);
        return ans;
    }
};