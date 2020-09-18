void distance(vector<int>&v,Node*root,int k)
{
    if (root == NULL || k < 0)  return; 
  
  if(k==0)
  {
      v.push_back(root->data);
  }
 distance(v,root->left,k-1);
 distance(v,root->right,k-1); // Your code here
}
vector<int> Kdistance(struct Node *root, int k)
{
  vector<int>v;
  distance(v,root,k);
  return v;// Your code here
}
