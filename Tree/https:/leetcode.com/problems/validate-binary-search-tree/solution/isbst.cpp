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
    bool isBST(TreeNode*root,int min,int max)
    {
        if(root==NULL)
        {
            return true;
        }
        int val=root->val;
        if(min!=NULL&&val<=min)
        {
            return false;
        }
        if(max!=NULL&&val>=max)
        {
            return false;
        }
        return isBST(root->right,val,max)&&isBST(root->left,min,val);
    }
    bool isValidBST(TreeNode* root) {
        return isBST(root,NULL,NULL);
        
    }
};
