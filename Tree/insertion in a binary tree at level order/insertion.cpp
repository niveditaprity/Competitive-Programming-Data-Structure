#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node*left;
    Node*right;
    Node(int x)
    {
        key=x;
        right=NULL;
        left =NULL;
    }
};
void inorder(Node*temp)
{
    if(temp==NULL)
    {
        return;
    }
    inorder(temp->left);
    cout<<temp->key<<" ";
    inorder(temp->right);
}
void insert(Node*temp,int data)
{
    queue<Node*>q;
    q.push(temp);
    while(!q.empty())
    {
        Node*curr=q.front();
        q.pop();
        if(curr->right==NULL)
        {
            curr->right=new Node(data);
        }
        else
        {
            q.push(curr->right);
        }
        if(curr->left==NULL)
        {
            curr->left=new Node(data);
        }
        else
        {
            q.push(curr->left);
        }
    }
}

int main() {
    Node*root=new Node(10);
    root->left=new Node(6);
    root->right=new Node(12);
    root->left->left=new Node(5);
    cout<<"traverse before insertion"<<endl;
    inorder(root);
    insert(root,40);
    insert(root,50);
    cout<<endl;
    cout<<"after insertion"<<endl;
    inorder(root);
    
	return 0;
}
