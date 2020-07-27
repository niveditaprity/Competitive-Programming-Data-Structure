class Solution {
public:
    int balancedStringSplit(string s) {
        int countr=0,countl=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                countr++;
            }
            if(s[i]=='L')
            {
                countl++;
            }
            if(countr==countl)
            {
                count++;
            }
        }
       return count; 
    }
};
