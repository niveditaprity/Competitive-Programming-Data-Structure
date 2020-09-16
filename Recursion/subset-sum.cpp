#include<bits/stdc++.h>
using namespace std;
void subset( int a[],int n,int i,int sum,vector<int>&v){
if(n==i)
{
v.push_back(sum);
return;
}
subset(a,n,i+1,sum+a[i],v);
subset(a,n,i+1,sum,v);

}
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
vector<int> v;
for(int i=0;i<n;i++) cin>>a[i];
subset(a,n,0,0,v);
sort(v.begin(),v.end());
for(auto x: v)
cout<<x<<" "; cout<<endl;
}
}
