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
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

class Solution
{
public:
    vector<vector<int>> levelOrder(Tree *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<Tree *> q;
        q.push(root);
        while (!q.empty())
        {
            int s = q.size();
            vector<int> level;
            for (int i = 0; i < s; i++)
            {
                Tree *node = q.front();
                q.pop();
                if (node->left != NULL)
                    q.push(node->left);
                if (node->right != NULL)
                    q.push(node->right);
                level.push_back(node->data);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
// for deletion
Tree *getSuccessor(Tree *curr)
{
    curr = curr->right;
    while (curr != nullptr && curr->left != nullptr)
        curr = curr->left;
    return curr;
}

Tree *delNode(Tree *root, int x)
{
    if (root == nullptr)
        return root;

    if (root->data > x)
        root->left = delNode(root->left, x);
    else if (root->data < x)
        root->right = delNode(root->right, x);
    else
    {
        // Node found

        // Case 1: Node with only right child or no child
        if (root->left == nullptr)
        {
            Tree *temp = root->right;
            delete root;
            return temp;
        }

        // Case 2: Node with only left child
        else if (root->right == nullptr)
        {
            Tree *temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Node with two children
        Tree *succ = getSuccessor(root);
        root->data = succ->data;
        root->right = delNode(root->right, succ->data);
    }
    return root;
};

int main()
{
    Tree *root = nullptr;
    int n;
    cout << "Enter number of elements to insert into BST: ";
    cin >> n;
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        root = insert(root, x);
    }

    cout << "\nInorder Traversal: ";
    inorder(root);
    cout << "\nPreorder Traversal: ";
    preorder(root);
    cout << "\nPostorder Traversal: ";
    postOrder(root);

    cout << "\nLevel Order Traversal:\n";
    cout << "\nEnter value to delete: ";
    int delVal;
    cin >> delVal;
    root = delNode(root, delVal);

    cout << "\nInorder traversal after deletion: ";
    inorder(root);
    cout << endl;

    Solution sol;
    vector<vector<int>> levels = sol.levelOrder(root);
    for (auto &level : levels)
    {
        for (int node : level)
        {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
