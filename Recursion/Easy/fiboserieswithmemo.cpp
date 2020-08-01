#include <bits/stdc++.h>
using namespace std;
int v[1000];
int fib(int n)
{
    if(n==0||n==1)
    {
        v[n]=n;
        return n;
    }
    else
    {
    v[n]= fib(n-1)+fib(n-2);
    return v[n];
    }
}

int main() {
    fib(7);
    for(int i=0;i<7;i++)
    {
        cout<<v[i]<<" ";
    }
}
