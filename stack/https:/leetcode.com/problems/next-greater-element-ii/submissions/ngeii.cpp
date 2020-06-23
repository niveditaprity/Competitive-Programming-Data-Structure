class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        stack<int>s;
        for(int i=2*n-1;i>=0;--i)
        {
            while(s.size()>0&&nums[s.top()]<=nums[i%n])
            {
                s.pop();
            }
             if(s.empty())
            {
                res[i%n]=-1;
            }
            else
            {
            res[i%n]=nums[s.top()];
            }
            s.push(i%n);
        
        }
        return res;
        
    }
};
