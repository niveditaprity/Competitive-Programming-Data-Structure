#include <bits/stdc++.h>
using namespace std;
int v[1000];
int fib(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
    v[n]= fib(n-1)+fib(n-2);
    return v[n];
    }
}

int main() {
    cout<<fib(6)<<" ";
}
