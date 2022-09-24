/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    bool traverse(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root==NULL) return false;
        int left = traverse(root->left, p, q) ? 1 : 0;
        int right = traverse(root->right, p, q) ? 1 : 0;
        int mid = (root==p || root==q) ? 1:0;
        if(left+right+mid>=2) {
            ans=root;
        }
        return (left+right+mid>0);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool temp = traverse(root,p,q);
        return ans;
    }
};