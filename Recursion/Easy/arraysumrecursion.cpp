#include <bits/stdc++.h>
using namespace std;
int sumarray(int arr[],int n)
{
    if(n<0)
    {
        return 0;
    }
    return arr[n-1]+sumarray(arr,n-1);
}

int main() {
	int arr[]={1,2,3,4,5};
	cout<<sumarray(arr,5);
	return 0;
}
