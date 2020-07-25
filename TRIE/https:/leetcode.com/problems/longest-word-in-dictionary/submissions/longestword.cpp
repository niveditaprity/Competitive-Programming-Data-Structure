class Solution {
public:
    string res="";
    class Trienode
    {
        public:
        int end;
        Trienode*child[26]={NULL};
    };
    void insert(string word,Trienode*root)
    {
      string s="";
        for(int i=0;i<word.size();i++)
        {
            if(i==word.size()-1){
                s+=word[i];
            }
            if(!root->child[word[i]-'a'])
            {
                if(i!=word.size()-1)
                {
                    break;
                }
                root->child[word[i]-'a']=new Trienode();
            }
            else
            {
                s+=word[i];
            }
            root=root->child[word[i]-'a'];
            
        }
        root->end=1;
        if(res.length()==s.length()&&s<res)
        {
            res=s;
        }
        if(s.length()>res.length())
        {
            res=s;
        }
    }
    string longestWord(vector<string>& words) {
     sort(words.begin(),words.end());
        Trienode*root=new Trienode();
        for(int i=0;i<words.size();i++)
        {
            if(i+1<words.size())
            {
                if(words[i]==words[i+1])
                {
                    continue;
                }
            }
            insert(words[i],root);
        }
        return res;
        
    }
};
