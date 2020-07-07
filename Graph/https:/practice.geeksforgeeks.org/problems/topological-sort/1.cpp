void dfs(int u,vector<int> adj[],vector<bool>&vis,stack<int>&s)
{
    vis[u]=true;
    for(auto it:adj[u])
    {
        if(!vis[it])
        {
            dfs(it,adj,vis,s);
        }
    }
   s.push(u);         
            
        }
vector<int> topoSort(int V, vector<int> adj[]) {
 vector<bool>vis(V,false);
 stack<int>s;
 for(int i=0;i<V;i++)
 {
     if(vis[i]==false)
     {
         dfs(i,adj,vis,s);
     }
 }
 vector<int>v;
 while(!s.empty())
 {
   v.push_back(s.top());
   s.pop();
 }
 return v;// Your code here
}
