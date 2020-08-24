int kMostFrequent(int arr[], int n, int k) 
{ 
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
for(auto x:mp)
{
    pq.push({x.second,x.first});
    if(pq.size()>k)
    {
        pq.pop();
    }// Your code here	
} 
int sum=0;
while(pq.size()>0)
{
  sum+=pq.top().first; 
  pq.pop();
  
}
return sum;
}
