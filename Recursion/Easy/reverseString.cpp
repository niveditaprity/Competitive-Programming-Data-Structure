#include <bits/stdc++.h>
using namespace std;
string ptr="";
string str(string s,int n)
{
if(n>0)
{
ptr+=s[n-1];
str(s,n-1);
}
return ptr;
}


int main() {
string s="geeks";
int n=s.size();
cout<<str(s,n);
	return 0;
}
