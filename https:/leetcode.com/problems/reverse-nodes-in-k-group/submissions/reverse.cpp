 ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*ptr=head;
        int n=0;
        while(ptr!=NULL)
        {
            n++;
            ptr=ptr->next;
}
        
        ListNode*temp=head;
        ListNode*prev=NULL;
        ListNode*Next=NULL;
        int count=0;
        if(n>=k){
        while(temp!=NULL&&count<k)
        {
            Next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=Next;
            count++;
            
        }
            n=n-k;
        }
            if(n>=k)
            {
        if(Next!=NULL)
        {
            head->next=reverseKGroup(Next,k);
        }
            }
        else
        {
            head->next=Next;
        }
        return prev;
        
    }
