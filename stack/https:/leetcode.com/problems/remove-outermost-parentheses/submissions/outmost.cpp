string removeOuterParentheses(string S) {
     string str="";
        int count=1;
        for(int i=1;i<S.size();i++)
        {
        count=S[i]=='('?count+1:count-1;
            if(count)
            {
                str.push_back(S[i]);
            }
            else
            {
                count=1;
                ++i;
            }
        }
        return str;
    }
};
