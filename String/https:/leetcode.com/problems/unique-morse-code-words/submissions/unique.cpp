class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
        for(string &str:words)
        {
            string temp="";
                for(char &c:str)
                {
                  temp+=v[c-'a'];  
                }
            s.insert(temp);
        }
        return s.size();
        
        
    }
};
