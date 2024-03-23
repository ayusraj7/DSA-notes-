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
    cout<<"Enter the data for the left child of "<<data<<endl;
    int leftdata;
    cin>>leftdata;
    root->left=buildtree(leftdata);
    cout<<"Enter the data for the right child of "<<data<<endl;
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
        }else{
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

void inOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
} 
void postOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
   Node* root;
   int data;
   cout<<"Enter the data for the root node "<<endl;
   cin>>data;
   root=buildtree(data);
   cout<<"Level Order Traversal "<<endl;
   levelOrderTraversal(root);
   cout<<endl;
   cout<<"Inorder Traversal "<<endl;
   inOrder(root);
   cout<<endl;
   cout<<"PreOrder Traversal "<<endl;
   preOrder(root);
   cout<<endl;
   cout<<"PostOrder Traversal "<<endl;
   postOrder(root);

   return 0;
}