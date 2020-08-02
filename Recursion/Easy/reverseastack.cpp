#include <bits/stdc++.h>
using namespace std;
stack<int>st;
void finder(stack<int>s)
{
if(!s.empty())
{
st.push(s.top());
s.pop();
finder(s);
}
}

int main() {
	stack<int>s;
s.push(1);
s.push(2);
s.push(3);
stack<int>p=s;
while(!p.empty())
{
cout<<p.top()<<" ";
p.pop();
}
 finder(s);
while(!st.empty())
{
cout<<st.top()<<" ";
st.pop();
}// your code goes here
	return 0;
}
