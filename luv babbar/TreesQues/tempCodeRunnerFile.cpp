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
Node* insertIntoBST(Node* root,int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }
    if(data>root->data)
    {
        root->right=insertIntoBST(root->right,data);
    }else 
    {
        root->left=insertIntoBST(root->left,data);
    }
    return root;
}
void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insertIntoBST(root,data);
        cin>>data;
    }

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
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node* root=NULL;
    cout<<"Enter data for node "<<endl;
    takeInput(root);

    cout<<root->data<<" ";
    cout<<"Printing the tree"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"InOrder of the Tree "<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"preOrder of the Tree "<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"postOrder of the Tree "<<endl;
    postOrder(root);

}