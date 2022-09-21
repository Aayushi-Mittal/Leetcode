/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        queue<Node*> q;
        q.push(root);
        Node* top;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                top = q.front();
                q.pop();
                if(i<n-1 && q.size()>=1)
                    top->next = q.front();
                if(top->left!=NULL)  q.push(top->left);
                if(top->right!=NULL) q.push(top->right);
            }
        }
        return root;
    }
};