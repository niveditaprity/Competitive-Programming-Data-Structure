/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>v;
        if(root==NULL)
        {
            return v;
        }
        stack<Node*>s;
        s.push(root);
        while(!s.empty())
        {
            Node*cur=s.top();
            v.push_back(cur->val);
            s.pop();
            for(auto it=cur->children.rbegin();it!=cur->children.rend();it++)
            {
                s.push(*it);
            }
        }
        return v;
        
        
    }
};
