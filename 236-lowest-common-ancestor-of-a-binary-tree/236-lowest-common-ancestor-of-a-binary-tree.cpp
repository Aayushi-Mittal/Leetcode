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
    bool traverse(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL) return false;
        int l = traverse(root->left, p, q) ? 1:0;
        int r = traverse(root->right, p, q) ? 1:0;
        int mid = (root==p || root==q) ? 1:0;
        if(l+r+mid>=2) ans=root;
        return (mid+l+r>0);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        traverse(root, p, q);
        return ans;
    }
};