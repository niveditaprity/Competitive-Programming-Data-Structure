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
    TreeNode*construct(TreeNode*&root,int ele)
    {
      if(root==NULL)
      {
          root=new TreeNode(ele);
          return root;
      }
        if(root->val>ele)
        {
            root->left=construct(root->left,ele);
        }
        else
        {
            root->right=construct(root->right,ele);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode*root=NULL;
        for(auto x:preorder)
        {
          construct(root,x);  
        }
        return root;
        
    }
};
