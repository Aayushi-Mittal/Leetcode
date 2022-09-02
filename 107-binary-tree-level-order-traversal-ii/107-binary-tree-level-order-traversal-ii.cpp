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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int> temp;
            for(int i=0; i<s; i++)
            {
                TreeNode* t=q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->right!=NULL) q.push(t->right);
                if(t->left!=NULL) q.push(t->left);
            }
            reverse(temp.begin(), temp.end());
            ans.push_back(temp);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};