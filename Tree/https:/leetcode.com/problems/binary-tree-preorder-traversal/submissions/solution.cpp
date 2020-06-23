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
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>v;
        if(root==NULL)
        {
            return v;
        }
        stack<TreeNode*>s;
        s.push(root);
        
        while(!s.empty())
        {
            TreeNode*t=s.top();
            s.pop();
            v.push_back(t->val);
            if(t->right)
            {
                s.push(t->right);
            }
            if(t->left)
            {
                s.push(t->left);
            }
            
        }
        return v;
    }
};
