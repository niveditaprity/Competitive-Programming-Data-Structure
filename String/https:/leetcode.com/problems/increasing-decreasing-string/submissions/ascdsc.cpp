class Solution {
public:
    string sortString(string s) {
      string res = "", dum="";
        map<char,int>mp;
        for(char c:s)mp[c]++;
        int cnt = mp.size(),i=0;
        
        while(true){
            bool ber_ho = true;
            for(auto it:mp){
                if(mp[it.first] > 0){
                    dum += it.first;
                    mp[it.first]--;
                    ber_ho = false;
                }
            }
            if(ber_ho)break;
            if(i % 2 ) reverse(dum.begin(),dum.end());
            res += dum;
            dum="";
            i++;
        }
        return res;  
    }
};
