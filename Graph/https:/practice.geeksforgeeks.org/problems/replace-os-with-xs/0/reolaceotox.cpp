#include<bits/stdc++.h>
using namespace std;
char arr[50][50];
int m,n;
int check(int x,int y,int vis[50][50])
{
   if(x<0||y<0||x>=m||y>=n)
   {
       return 0;
   }
   if(arr[x][y]=='X')
   {
    return 1;   
   }
   if(vis[x][y]==1)
   {
       return 1;
   }
   if(vis[x][y]==0&&arr[x][y]=='O')
   {
   vis[x][y]=1;
   }
   int l=check(x-1,y,vis);
   int p=check(x,y-1,vis);
   int c=check(x,y+1,vis);
    int d=check(x+1,y,vis);
return l&p&c&d;
}
int main()
 {
int t;
cin>>t;
while(t--)
{
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='O')
            {
                int vis[50][50]={};
                if(check(i,j,vis))
                {
                arr[i][j]='X';
                }
            }
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
}
	return 0;
}
