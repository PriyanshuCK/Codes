// Coding Just for Fun
// Priyanshu Sharma
// https://priyanshusharma.dev
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> v;
    if (root == NULL)
    {
        return v;
    }
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty())
    {
        int size = st.size();
        for (int i = 0; i < size; i++)
        {
            TreeNode *node = st.top();
            st.pop();
            v.push_back(node->val);
            if (node->right)
            {
                st.push(node->right);
            }
            if (node->left)
            {
                st.push(node->left);
            }
        }
    }
    return v;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    struct TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> a = preorderTraversal(root);
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
// Recursive
// vector<int> v;
// vector<int> preorderTraversal(TreeNode *root)
// {
//     if (root == NULL)
//     {
//         return v;
//     }
//     v.push_back(root->val);
//     preorderTraversal(root->left);
//     preorderTraversal(root->right);
//     return v;
// }