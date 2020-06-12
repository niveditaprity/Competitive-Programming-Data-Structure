#include<bits/stdc++.h>
using namespace std;
bool parenthesischecker(string s)
{
    stack<char>st;
    char x;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
        {
            st.push(s[i]);
            continue;
        }
        if(st.empty())
        {
            return false;
        }
        switch(s[i])
        {
            case ')':
              x=st.top();
              st.pop();
              if(x=='['||x=='{')
              {
                return false;
               }
              break;
            case '}':
               x=st.top();
               st.pop();
               if(x=='['||x=='(')
               {
                return false;
                
                }
              break;
            case ']':
               x=st.top();
               st.pop();
               if(x=='('||x=='{')
               {
                return false;
                   
               }
              break;
        }
            
            
        }
        return (st.empty());
    }
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
      string s;
      cin>>s;
      if(parenthesischecker(s)==1)
      {
          cout<<"balanced"<<endl;
      }
      else
      {
          cout<<"not balanced"<<endl;
      }
     }//code
	return 0;
}
