long long int countSubarrWithEqualZeroAndOne(int arr[], int N)
{
  long long int z=0,o=0,ans=0,sum=0;
map < long long int , long long int> mp ;
for ( int i = 0 ; i < N ; i++ )
{
if (arr[i] == 0 )
  arr[i] = -1 ;
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
