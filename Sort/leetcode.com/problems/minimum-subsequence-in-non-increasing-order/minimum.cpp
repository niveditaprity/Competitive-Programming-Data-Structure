class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums;
        }
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        vector<int>v;
        int t=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            t+=nums[i];
            v.push_back(nums[i]);
            sum-=nums[i];
            if(t>sum)
            {
                break;
            }
        }
        return v;
        
    }
};
