class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            mp[t[i]]--;
        }
        for(auto x:mp)
        {
            if(x.second>0)
            {
                count+=x.second;
            }
        }
        
       return count; 
    }
};
