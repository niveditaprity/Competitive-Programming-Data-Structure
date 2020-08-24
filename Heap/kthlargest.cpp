class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int,vector<int>,greater<int>>minheap;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            minheap.push(nums[i]);
            if(k<minheap.size())
            {
                minheap.pop();
            }
        }
        return minheap.top();
    }
};
