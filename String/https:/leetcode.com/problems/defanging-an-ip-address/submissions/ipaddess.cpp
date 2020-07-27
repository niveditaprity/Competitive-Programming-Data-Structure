class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        s.push_back(address[0]);
        for(int i=1;i<address.size();i++)
        {
            if(address[i]=='.')
            {
                s.push_back('[');
                s.push_back(address[i]);
                s.push_back(']');
            }
            else{
                s.push_back(address[i]);
            }
        }
        return s;
        
    }
};
