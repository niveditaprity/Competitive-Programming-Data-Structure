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
    TreeNode*construct(vector<int>& postorder, vector<int>& inorder,int startp,int endp,int starti,int endi)
    {
        if(startp>endp||starti>endi)
        {
            return NULL;
        }
        TreeNode*root=new TreeNode(postorder[endp]);
        int k=0;
        for(int i=starti;i<=endi;i++)
        {
            if(inorder[i]==root->val)
            {
                k=i;
                break;
             }
        }
        root->left=construct(postorder,inorder,startp,startp+k-starti-1, starti,k-1);
         root->right=construct(postorder,inorder,endp-endi+k,endp-1, k+1, endi);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        if(n<=0)
        {
            return NULL;
        }
        return construct(postorder,inorder,0,n-1,0,n-1);
    }
};
