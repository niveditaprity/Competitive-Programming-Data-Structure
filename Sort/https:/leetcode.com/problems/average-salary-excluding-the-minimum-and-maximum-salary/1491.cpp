class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum=accumulate(salary.begin(),salary.end(),0);
        sum-=(salary[0]+salary[salary.size()-1]);
        double t= sum/(salary.size()-2);
        return t;
        
    }
};
