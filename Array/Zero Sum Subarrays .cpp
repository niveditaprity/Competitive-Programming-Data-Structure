#include<bits/stdc++.h>
using namespace std;
int countSubarrWithEqualZeroAndOne(int arr[], int N)
{
  int z=0,o=0,ans=0,sum=0;
map <int , int> mp ;
for ( int i = 0 ; i < N ; i++ )
{
sum += arr[i] ;
mp[sum]++ ;
}
for(auto itr:mp )
{
if( itr.second > 1 )
ans = ans + ( itr.second * (itr.second-1) / 2) ;
}
return (ans+mp[0]) ;  //Your code here
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         cout<<countSubarrWithEqualZeroAndOne(arr,n)<<endl;
     }//code
	return 0;
}
