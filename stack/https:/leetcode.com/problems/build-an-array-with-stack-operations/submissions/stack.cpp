vector<string> buildArray(vector<int>& target, int n) {
        vector<string>s;
        int i=0;
        int count=1;
        while(i<target.size())
        {
            if(count==target[i])
            {
                s.push_back("Push");
                i++;
            }
            else
            {
                s.push_back("Push");
                s.push_back("Pop");
            
            }
                count++;
        }
        return s;
    }
