ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode*odd=head;
        ListNode*even=head->next;
        ListNode*temp=even;
        while(even!=NULL&&even->next!=NULL)
        {
          odd->next=even->next;
            odd=odd->next;
                even->next=odd->next;
            even=even->next;
        }
        odd->next=temp;
       return head; 
    }
