#include<bits/stdc++.h>
using namespace std;

void fillflood(vector<vector<int>>&arr,int r,int c,int k,int prev)
{
 int rows=arr.size();
 int col=arr[0].size();
 if(r<0||r>=rows||c<0||c>=col)
 {
     return;
 }
 if(arr[r][c]!=prev)
 {
     return;
 }
 if(arr[r][c]==k)
 {
     return;
 }
 arr[r][c]=k;
 fillflood(arr,r-1,c,k,prev);
 fillflood(arr,r,c-1,k,prev);
 fillflood(arr,r+1,c,k,prev);
 fillflood(arr,r,c+1,k,prev);
 
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int m,n;
         cin>>m>>n;
          vector<vector<int>>arr(m,vector<int>(n,0));
         for(int i=0;i<m;i++)
         {
             for(int j=0;j<n;j++)
             {
                 cin>>arr[i][j];
             }
         }
         int x,y,k;
         cin>>x>>y>>k;
         int prev=arr[x][y];
        fillflood(arr,x,y,k,prev); 
        for(int i=0;i<m;i++)
         {
             for(int j=0;j<n;j++)
             {
                 cout<<arr[i][j]<<" ";
             }
         }
         cout<<endl;
     }//code
	return 0;
}
