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
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}

int diameter(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=diameter(root->left);
    int right=diameter(root->right);
    int all=height(root->left)+height(root->right)+1;
    int ans=max(all,max(left,right));
    return ans;
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
   cout<<"Height of Tree"<<height(root)<<endl;
   cout<<"Diameter of Tree "<<diameter(root)<<endl;
   return 0;
}