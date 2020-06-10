int getDecimalValue(ListNode* head) {
        ListNode*temp=head;
        int num=0;
        while(temp!=NULL)
        {
            num=(num<<1)+temp->val;
            temp=temp->next;
        }
        return num;
    }
