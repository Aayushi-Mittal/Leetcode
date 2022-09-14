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
    int ans=0;
    unordered_map<int,int> count;
    
    void preorder(TreeNode* root)
    {
        if(root==NULL) return;
        count[root->val]++;
        if(root->left==NULL && root->right==NULL) {
            int odd_count=0;
            for(auto c:count)
            {
                if(c.second%2==1) odd_count++;
            }
            if(odd_count<=1) ans++;
        }
        preorder(root->left);
        preorder(root->right);
        count[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        preorder(root);
        return ans;
    }
};