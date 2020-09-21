#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,idx,r;
	    cin>>n>>idx>>r;
	    int arr[n];
	    for(int i=0;i<n;i++)
	     cin>>arr[i];
	    
	    vector<pair<int,int>> v;
	    for(int i=0;i<r;i++)
	    {
	        int l,r;
	        cin>>l>>r;
	        v.push_back({l,r});
	    }
	    
	    for(int i=v.size()-1;i>=0;i--)
	    {
	        int left=v[i].first;
	        int right=v[i].second;
	        
	         if(left<=idx && right>=idx)
	           {
	               if(idx==left)
	                 idx=right;
	                else
	                 idx--;
	           }
	   }
	   cout<<arr[idx]<<endl;
	}
	return 0;
}
