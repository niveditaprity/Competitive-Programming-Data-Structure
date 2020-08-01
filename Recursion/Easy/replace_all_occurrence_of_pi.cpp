#include <bits/stdc++.h>
using namespace std;
string replace(string s,int n)
{
    string output="";
    if(s.size()>n+1)
{
  if(s[n]=='p'&&s[n+1]=='i')
  {
   output+="3.14";  
n++; 
  }
  else
  {
    output+=s[n];  
  }
  output+=replace(s,n+1);
}
  return output;
}
int main() {
    string s="2 * pi + 3 * pi = 5 * pi";
    cout<<replace(s,0);
	
	return 0;
}
