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
    int ans;
    int rangeSumBST(TreeNode* root, int L, int R) {
     ans=0;
        dfs(root,L,R);
        return ans;
    }
    
    void dfs(TreeNode*root,int L,int R)
    {
        if(root!=NULL)
        {
        if(root->val<R)
        {
         dfs(root->right,L,R);
        }
        if(root->val>L)
        {
          dfs(root->left,L,R); 
        }
            if(L<=root->val&&root->val<=R)
            {
              ans+=root->val;
            
            }
        }
    }
};
