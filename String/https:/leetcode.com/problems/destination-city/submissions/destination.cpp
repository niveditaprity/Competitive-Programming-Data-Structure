class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
   map<string,string> m;
        for(auto path:paths) {
            m[path[0]] = path[1];
        }
        
        string s = paths[0][1];
        while(1) {
            if(m.find(s) == m.end()) {
                return s;
            }
            
            else {
                s = m[s];
            }
        }
        

    }
};
