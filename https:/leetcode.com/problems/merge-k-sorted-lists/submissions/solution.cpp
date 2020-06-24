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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* merge= new ListNode(0);
        ListNode*head=merge;
        vector<int>v;
        for(int i=0;i<lists.size();i++)
        {
            ListNode*temp=lists[i];
            while(temp!=NULL)
            {
            v.push_back(temp->val);
            temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
            for(auto x: v)
            {
             merge->next= new ListNode(x);
                merge=merge->next;
            }
        return head->next;
        
    }
};
