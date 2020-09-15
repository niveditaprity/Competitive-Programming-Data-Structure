#include<iostream>
using namespace std;
int jsp(int n,int k)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (jsp(n-1,k)+k-1)%n+1;
    }
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,k;
         cin>>n>>k;
         cout<<jsp(n,k)<<endl;
     }//code
	return 0;
}
