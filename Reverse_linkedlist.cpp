Node* reverseList(Node *head)
{
    Node*temp=head;
    Node*prev=NULL;
    Node*Next=NULL;
 while(temp!=NULL)
 {
  Next=temp->next;
  temp->next=prev;
  prev=temp;
  temp=Next;
 }
 head=prev;
 return head;// Your code here
}
