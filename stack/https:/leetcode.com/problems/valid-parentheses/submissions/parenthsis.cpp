class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        char str;
        for(int i=0;i<s.length();i++)
        {
          if(s[i]=='['||s[i]=='{'||s[i]=='(')  
          {
              st.push(s[i]);
              continue;
          }
            if(st.empty()
            {
                return false;
            }
            switch(s[i])
            {
                case ')':
                    str=st.top();
                    st.pop();
                    if(str=='{'||str=='[')
                    {
                        return false;
                    }
                    break;
                    case '}':
                    str=st.top();
                    st.pop();
                    if(str=='('||str=='[')
                    {
                        return false;
                    }
                    break;
                    case ']':
                    str=st.top();
                    st.pop();
                    if(str=='{'||str=='(')
                    {
                        return false;
                    }
                    break;
            }
            
        }
        return st.empty();
        
    }
};
