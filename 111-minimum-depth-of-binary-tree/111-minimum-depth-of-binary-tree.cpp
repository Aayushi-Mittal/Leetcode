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

// Edge Case= n-ary trees
// BFS Solution
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int ans=1;
        while(!q.empty())
        {
            int sz=q.size();
            while(sz>0)
            {
                TreeNode* rt = q.front();
                q.pop();
                if(rt->left==NULL && rt->right==NULL) return ans;
                if(rt->left!=NULL) q.push(rt->left);
                if(rt->right!=NULL) q.push(rt->right);
                sz--;
            }
            ans++; 
        }
        return ans;
    }
};