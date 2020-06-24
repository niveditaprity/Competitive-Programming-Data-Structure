class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p;
        for(auto x:m)
        {
          p.push({x.second,x.first});
            if(p.size()>k)
            {
                p.pop();
            }
        }
        vector<int>v;
        while(!p.empty())
        {
            auto x=p.top();
            p.pop();
            v.push_back(x.second);
        }
        return v;
        
    }
};
