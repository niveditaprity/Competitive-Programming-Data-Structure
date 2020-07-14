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
    int maxDepth(Node* root) 
    {
        int height=0;
        if(root==NULL)
        {
            return 0;
        }
        queue<Node*>q;     
        q.push(root);
        q.push(NULL);
        height++;
        while(!q.empty())
        {
            Node*temp=q.front();
            q.pop();
            if(temp==NULL&&q.empty())
            {
                break;
            }
            if(temp==NULL)
            {
                q.push(NULL);
                height++;
                continue;
            }
       for(int i =0;i<temp->children.size(); i++)
            {
                if(temp->children[i]);
        {
          q.push(temp->children[i]);  
        }
        }
        }
        return height;
       
    }
};
