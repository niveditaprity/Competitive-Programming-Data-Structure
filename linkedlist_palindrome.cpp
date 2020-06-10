bool isPalindrome(Node *head)
{
   stack<int>s;
   Node*temp=head;
   while(temp!=NULL)
   {
       s.push(temp->data);
       temp=temp->next;
   }
   while(head!=NULL)
   {
       if(head->data!=s.top())
       {
           return 0;
       }
       s.pop();
       head=head->next;
   }
   return 1;//Your code here
}

