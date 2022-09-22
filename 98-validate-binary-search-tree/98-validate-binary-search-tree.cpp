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
    bool bst_check(TreeNode* root, TreeNode* minNode, TreeNode* maxNode)
    {
        if(root==NULL) return true;
        if(minNode!=NULL && root->val <= minNode->val) return false;
        if(maxNode!=NULL && root->val >= maxNode->val) return false;
        return (bst_check(root->left, minNode, root) && bst_check(root->right, root, maxNode));
    }
    bool isValidBST(TreeNode* root) {
        return bst_check(root, NULL, NULL);
    }
};