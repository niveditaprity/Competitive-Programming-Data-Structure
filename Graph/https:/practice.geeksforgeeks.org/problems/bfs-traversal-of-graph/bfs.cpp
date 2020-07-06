vector <int> bfs(vector<int> g[], int N) {
vector<int>visited(N,false);
vector<int>v;
queue<int>q;
int s=0;
visited[s]=true;
q.push(s);
while(!q.empty())
{
 int n=q.front();
 v.push_back(n);
 q.pop();
 for(auto x:g[n])
 {
     if(visited[x]==false)
     {
         visited[x]=true;
         q.push(x);
     }
 }
}
return v;
    // Your code here
}
