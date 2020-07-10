
bool dfs(int u,vector<int>adj[],vector<bool>&vec,vector<bool>&vis)
{
    if(vis[u]==false){
        vec[u]=true;
        vis[u]=true;
        for(auto it:adj[u])
        {
            if(!vis[it]&&dfs(it,adj,vec,vis)){
                return true;
            }
            else if(vec[it]==true){
                return true;
            }
            }
    }
    vec[u]=false;
        return false;
}
bool isCyclic(int V, vector<int> adj[])
{
   vector<bool> vec(V,false);
   vector<bool> vis(V,false);
   for(int i=0;i<V;i++)
   {
       if(dfs(i,adj,vec,vis))
          return true;
   }
   return false;// Your code here
}
