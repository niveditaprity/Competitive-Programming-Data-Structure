#include <bits/stdc++.h>
using namespace std;
//undirected graph
void addedge(vector<int>vec[],int u,int v)
{
	vec[u].push_back(v)
	vec[v].push_back(u);
}
void print(vector<int>v[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"adjancency of nodes"<<" "<<i<<endl;
		for(auto x:v[i])
		{
			cout<<"->"<<x;
		}
		cout<<endl;
	}
}

int main()
{
int n=5;
vector<int>v[n];
addedge(v,0,1);
addedge(v,0,4);
addedge(v,1,0);
addedge(v,1,2);
addedge(v,1,3);
addedge(v,1,4);
print(v,n);


return 0;
}
