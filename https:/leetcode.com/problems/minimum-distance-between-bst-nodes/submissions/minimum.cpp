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
    vector<int>v;
    void traversal(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        traversal(root->left);
        v.push_back(root->val);
        traversal(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        
      traversal(root);
        int min=INT_MAX;
        for(int i=1;i<v.size();i++)
        {
            if(min>abs(v[i]-v[i-1]))
            {
                min=abs(v[i]-v[i-1]);
            }
        }
        return min;
    }
    
};
