class Trie {
    
    struct Trienode
    {
        char data;
        int count;
        int endshere;
        Trienode*child[26];
    };
    Trienode*root;
    Trienode*getNode(int index)
    {
        Trienode*newnode=new Trienode;
        newnode->data='a'+index;
        newnode->count=newnode->endshere=0;
        for(int i=0;i<26;i++)
        {
            newnode->child[i]=NULL;
        }
        return newnode;
    }
    
public:
    /** Initialize your data structure here. */
    Trie() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        root=getNode('/'-'a');
        
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        
        
     Trienode*curr=root;
        int index;
        for(int i=0;word[i]!='\0';i++)
        {
            index=word[i]-'a';
            if(curr->child[index]==NULL)
            {
              curr->child[index]=getNode(index);
            }
            curr->child[index]->count+=1;
                curr=curr->child[index];
        }
        curr->endshere+=1;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
      Trienode*curr=root;
        int index;
        for(int i=0;word[i]!='\0';i++)
        {
            index=word[i]-'a';
            if(curr->child[index]==NULL)
            {
                return false;
            }
            curr=curr->child[index];
        }
        return (curr->endshere>0);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
     Trienode*curr=root;
        int index;
        for(int i=0;prefix[i]!='\0';++i)
        {
            index=prefix[i]-'a';
            if(curr->child[index]==NULL)
            {
                return false;
            }
            curr=curr->child[index];
        }
        return (curr->count>0);   
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
