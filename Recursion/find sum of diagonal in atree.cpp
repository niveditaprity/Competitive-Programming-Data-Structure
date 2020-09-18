void solve(Node*root,map<int,int>&m,int d)
{
    if(root==NULL)
    {
        return;
    }
    m[d]=root->data+m[d];
    solve(root->left,m,d+1);
    solve(root->right,m,d);
}
vector <int> diagonalSum(Node* root) {
   map<int,int>m;
   vector<int>v;
   int d=0;
   solve(root,m,d);
   for(auto x:m)
   {
       v.push_back(x.second);
   }
   return v;// 
