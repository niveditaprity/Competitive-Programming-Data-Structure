class Solution {
public:
    string freqAlphabets(string s) 
    {
        
    int n=s.size();
        string str="";
        for(int i=0;i<n;i++)
        {
        if(i+2<n&&s[i+2]=='#')
        {
            int d=s[i]-'0';
            d=d*10+(s[i+1]-'0');
            str+='j'+(d-10);
            i+=2;
        }
            else
            {
                str+='a'+(s[i]-'0')-1;
            }
        }
        return str;
    }
};
