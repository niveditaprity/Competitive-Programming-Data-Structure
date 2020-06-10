//Method 1
int intersectPoint(Node* head1, Node* head2)
{
  Node*temp1=head1;
  Node*temp2=head2;
  int n1=0,n2=0;
  while(temp1!=NULL)
  {
      n1++;
  }
  while(temp2!=NULL)
  {
      n2++;
  }
  while(n1>n2)
  {
      head1=head1->next;
      n1--;
  }
  while(n2>n1)
  {
      head2=head2->next;
      n2--;
  }
  while(head1!=head2)
  {
      head1=head1->next;
      head2=head2->next;
  }
  if(!head1)
  {
      return head1->data;
  }
  else
  return -1;
  // Your Code Here
}
//Method 2
int intersectPoint(Node* head1, Node* head2)
{
  unordered_set<node*>s;
while(head1)
{
s.insert(head1);
head1=head1->next;
}
while(head2)
{
if(s.find(head2)!=s.end())
{
return head2->data;
}
head2=head2->next;
}
return -1;
}

