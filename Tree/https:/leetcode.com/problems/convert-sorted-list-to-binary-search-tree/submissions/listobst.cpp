/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    ListNode*findmiddle(ListNode*head)
    {
        ListNode*slow_ptr=head;
        ListNode*fast_ptr=head;
        ListNode*ptr=NULL;
        while(fast_ptr!=NULL&&fast_ptr->next!=NULL)
        {
            ptr=slow_ptr;
            slow_ptr=slow_ptr->next;
            fast_ptr=fast_ptr->next->next;
        }
        if(ptr!=NULL)
        {
            ptr->next=NULL;
        }
        return slow_ptr;
    }
    TreeNode* sortedListToBST(ListNode* head) {
      if(head==NULL)
      {
          return NULL;
      }
        ListNode*mid=findmiddle(head);
        TreeNode*root=new TreeNode(mid->val);
        if(head==mid)
        {
            return root;
        }
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(mid->next);
        return root;
    }
};
