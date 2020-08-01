#include <bits/stdc++.h>
using namespace std;
int sorted(int arr[],int n)
{
if(n>0)
{
if(arr[n-1]>arr[n-2])
{
return 1;
}
else
{
return 0;
}
sorted(arr,n-1);
}
}

int main() {
	int arr[]={1,2,3,6,5};
int n=5;
if(sorted(arr,n)==1)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
	return 0;
}
