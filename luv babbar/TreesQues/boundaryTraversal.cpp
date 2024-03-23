#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildtree(int data)
{
    if(data==-1)
    {
        return NULL;
    }
    
    Node* root=new Node(data);
    cout<<"Enter the data in the left of the "<<data<<endl;
    int leftdata;
    cin>>leftdata;
    root->left=buildtree(leftdata);
    cout<<"Enter the data in the right of the "<<data<<endl;
    int rightdata;
    cin>>rightdata;
    root->right=buildtree(rightdata);
    return root;
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }else 
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void leftView(Node* root)
{
     if(root==NULL)
     {
         return ;
     }
     if(root->left==NULL && root->right==NULL)
     {
         return;
     }
     cout<<root->data<<" ";
     if(root->left)
     leftView(root->left);
     else 
     leftView(root->right);
}

void rightView(Node* root)
{
     if(root==NULL)
     {
         return ;
     }
     if(root->left==NULL && root->right==NULL)
     {
         return;
     }
     if(root->right)
     rightView(root->right);
     else
     rightView(root->left);
     cout<<root->data<<" ";
}

void leafView(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
    }
    leafView(root->left);
    leafView(root->right);
}

void boundaryTraversal(Node* root)
{
    cout<<root->data<<" ";
    leftView(root->left);
    
    leafView(root);
    
    rightView(root->right);
    
}

int main()
{
   
    cout<<"Enter the data for root "<<endl;
    int data;
    cin>>data;
    cout<<"level order traversal "<<endl;
    
    Node* root=buildtree(data);
    levelOrderTraversal(root);
    cout<<"Boundary Traversal "<<endl;
    boundaryTraversal(root);

}