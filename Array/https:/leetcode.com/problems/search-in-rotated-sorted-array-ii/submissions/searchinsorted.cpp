class Solution {
public:
    bool search(vector<int>& nums, int target) {
        vector<int>::iterator it=find(nums.begin(),nums.end(),target);
        int i;
        if(it!=nums.end())
        {
            int index=distance(nums.begin(),it);
            i=index;
        }
        else
        {
            i=-1;
        }
        if(i==-1)
        {
            return false;
        }
        else
        {
            return true;
        }
        
        
    }
};
