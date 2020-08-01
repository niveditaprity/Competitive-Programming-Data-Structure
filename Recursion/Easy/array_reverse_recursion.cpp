#include <bits/stdc++.h>
using namespace std;
vector<int> reversel(vector<int>&arr,int i,int j)
{
    if(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    reversel(arr,i+1,j-1);
    }
    return arr;
}


int main() {
	vector<int>arr;
	
	for(int i=0;i<10;i++)
	{
	   arr.push_back(i+1);
	}
	for(int i=0;i<arr.size();i++)
	{
	    cout<<arr[i]<<" ";
	}
	reversel(arr,0,arr.size());
	for(int i=0;i<arr.size();i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}
