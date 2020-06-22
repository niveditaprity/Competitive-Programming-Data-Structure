class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        stack<int>s;
        int sum=0;
        for(int i=0;i<n;i++)
        {
             if(ops[i]=="+")
             {
                 int ans=s.top();
                 s.pop();
                 int r=ans+s.top();
                 s.push(ans);
                 s.push(r);
             }
            else if(ops[i]=="D")
             {
                 s.push(2*s.top());
             }
            else if(ops[i]=="C")
             {
                 s.pop();
             }
            else
            {
                s.push(stoi(ops[i])); 
            }
        }
             while(!s.empty())
             {
              sum+=s.top();
                 s.pop();
             }
             return sum;
        
    }
};
