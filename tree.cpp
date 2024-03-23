#include<bits/stdc++.h>
using namespace std; 
class node{
    public:
    int data;
    node* right;
    node* left;
    public:
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root)
{
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter the data for the left of the "<<root->data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data for the right of the "<<root->data<<endl;
    root->right=buildtree(root->right);
    return root;
}
void levelOrderTraversal(node* root)
{
    queue<node* >q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL)//purana level complete traverse ho chuka hai
        {
            cout<<endl;
            if(!q.empty())//matlab abhi bhi child nodes hai isme 
            {
                q.push(NULL);
            }
        }else 
        {
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        }
    }
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
   
    preorder(root->left);
    preorder(root->right);
     cout<<root->data<<" ";
}
void buildFromLevelOrder(node* &root)
{
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    queue<node* > q;
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<"Enter the data for the left of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter the data for the right of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}
void reverseordertraversal(node* root)
{
    queue<node* > q;
    stack<node* >s;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        s.push(temp);
        if(temp==NULL)
        {
            if(!q.empty())
            {
                q.push(NULL);
            }
        }else 
        {
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        }
    }
    while(!s.empty())
    {
        node* temp=s.top();
        if(temp!=NULL)
        {
        cout<<temp->data<<" ";
        s.pop();
        }
        else 
        {
            s.pop();
            cout<<endl;
        }
    }
}
int main()
{
   node* root=NULL;
   //root=buildtree(root);
   buildFromLevelOrder(root);
   levelOrderTraversal(root);
   cout<<"Reverse lever Order Traversal "<<endl;
   reverseordertraversal(root);
   /*
   levelOrderTraversal(root);
   // 1 2 4 -1 -1 6 -1 -1 3 5 -1 -1 7 -1 -1 
   cout<<"In Order Treversal "<<endl;
   inorder(root);
   cout<<"Pre Order Treversal "<<endl;
   preorder(root);
   cout<<"Post Order Treversal "<<endl;
   postorder(root);
   */
}