vector<int> nextLargerNodes(ListNode* head) {
        vector<int>q;
        ListNode*temp=head;
        int n=0;
        while(temp!=NULL)
        {
            q.push_back(temp->val);
            temp=temp->next;
            n++;
        }
        stack<int>s;
        vector<int>next;
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
                next.push_back(0);
            }
            else if(s.size()>0&&q[i]<s.top())
            {
                next.push_back(s.top());
            }
            else if(s.size()>0&& q[i]>=s.top())
            {
                while(s.size()!=0&&q[i]>=s.top())
                {
                    s.pop();
                }
                if(s.empty())
                {
                    next.push_back(0);
                }
                else 
                {
                    next.push_back(s.top());
                }
            }
            s.push(q[i]);
        }
        reverse(next.begin(),next.end());
        
        
        return next;
        
    }
};
