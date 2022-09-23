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
    bool ans=true;
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        if(abs(left-right) > 1){
            ans = false;
        }
        return 1+max(left,right);
    }
    
    bool isBalanced(TreeNode* root) {
        int temp=height(root);
        return ans;
    }
};