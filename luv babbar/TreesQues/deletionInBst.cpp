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
int maxVal(Node* root)
{
    Node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp->data;
}
Node* findinBst(Node* root, int target)
{
    if(root->data==target)
    {
        return root;
    }else if(root->data<target)
    {
        return findinBst(root->right,target);
    }else 
    {
        return findinBst(root->left,target);
    }
    return root;
}
Node* deleteinBST(Node* root,int target)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->data==target)
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }else if(root->left!=NULL && root->right==NULL)
        {
            Node* child=root->left;
            delete root;
            return child;
        }else if(root->right!=NULL && root->left==NULL)
        {
            Node* child=root->right;
            delete root;
            return child;
        }else if(root->left!=NULL && root->right)
        {
            int predecessor=maxVal(root->left);
            root->data=predecessor;
            root->left=deleteinBST(root->left,predecessor);
            return root;
        }
    }else if(root->data>target)
    {
        root->left= deleteinBST(root->left,target);
    }else
    {
        root->right= deleteinBST(root->right,target);
    }
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
    Node* ans=deleteinBST(root,50);
    cout<<"After deleting the node "<<endl;
    levelOrderTraversal(ans);
}