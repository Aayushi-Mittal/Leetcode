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
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        rec(root,ans);
        return ans;
        // vector<int> ans;
        // stack<TreeNode*> st;
        // TreeNode* curr=root;
        // while(!st.empty() || curr!=NULL)
        // {
        //     if(curr!=NULL)
        //     {
        //         st.push(curr);
        //         curr = curr->left;
        //     }
        //     else
        //     {
        //         curr=st.top();
        //         st.pop();
        //         ans.push_back(curr->val);
        //         curr=curr->right;
        //     }
        // }
        // return ans;
    }
    void rec(TreeNode* root, vector<int> &ans)
    {
        if(root==NULL) return;
        rec(root->left, ans);
        ans.push_back(root->val);
        rec(root->right, ans);
    }
};