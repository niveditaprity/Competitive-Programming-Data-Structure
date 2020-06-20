#include <bits/stdc++.h>
using namespace std;
bool subsum(int arr[],int n,int sum)
{
    bool t[n+1][sum+1];
 for(int i=0;i<n+1;i++)
	{
	    for(int j=0;j<sum+1;j++)
	    {
	        if(i==0)
	        {
	            t[i][j]=false;
	        }
	        if(j==0)
	        {
	            t[i][j]=true;
	        }
	    }
	}
	for(int i=1;i<n+1;i++)
	{
	    for(int j=1;j<sum+1;j++)
	    {
	        if(arr[i-1]<=j)
	        {
	            t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
	        }
	        else
	        {
	            t[i][j]=t[i-1][j];
	        }
	    }
	}
	return t[n][sum];
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int sum;
	cin>>sum;
	if (subsum(arr, n, sum) == true) 
        printf("Found a subset with given sum"); 
    else
        printf("No subset with given sum");
	return 0;
}
