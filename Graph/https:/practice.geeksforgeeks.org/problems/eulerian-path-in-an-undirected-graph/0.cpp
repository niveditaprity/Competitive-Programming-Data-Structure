#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int arr[n][n];
         for(int i=0;i<n;i++)
         {
          for(int j=0;j<n;j++)
          {
              cin>>arr[i][j];
          }
         }
         int odd=0;
         int sum;
         for(int i=0;i<n;i++)
         {
             sum=0;
             for(int j=0;j<n;j++)
             {
                 sum+=arr[i][j];
             }
             if(sum%2==1)
             {
                 odd++;
             }
         }
         if(odd==2)
         {
             cout<<1<<endl;
         }
         else
         {
             cout<<0<<endl;
         }
         
         
     }//code
	return 0;
}
