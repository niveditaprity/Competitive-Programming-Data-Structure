class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
                priority_queue<pair<int,char>>p;
        for(auto x:m)
        {
            p.push({x.second,x.first});
        }
        string str="";
        while(!p.empty())
        {
            auto x=p.top();
            p.pop();
            for(int i=0;i<x.first;i++)
            {
            str+=x.second;
            }
        }
        
       return str; 
    }
};
