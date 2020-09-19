#include<bits/stdc++.h>
using namespace std;
bool check(string s,int k)
{
     if(s.length()<26)
	       {
	           return false;
	       }
   int index;
         vector<bool>visited(26,false);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
               index=s[i]-'A'; 
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                index=s[i]='a';
            }
            visited[index]=true;
        }
        int count=0;
        for(int i=0;i<=25;i++)
        {
            if(visited[i]==false)
            {
            count++;
            }
        }
        if(count>k)
        {
        return false;
        }
        else
        {
            return true;
        } 
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         int k;
         cin>>k;
         if(check(s,k)==true)
         {
             cout<<1<<endl;
         }
         else
         {
             cout<<0<<endl;
         }
         
     }//code
	return 0;
}
