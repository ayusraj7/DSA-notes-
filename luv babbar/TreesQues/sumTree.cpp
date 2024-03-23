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
int sumTree(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    int left=sumTree(root->left);
    int right=sumTree(root->right);
    int ans=left+right+root->data;
    root->data=ans;
    return ans;
}
bool KAncestor(Node* root,int &k,int p)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==p)
    {
        return true;
    }
    bool leftans=KAncestor(root->left,k,p);
    bool rightans=KAncestor(root->right,k,p);
    if(leftans||rightans)
    { 
        k--;
    }
    if(k==0)
        {
        k=-1;
        cout<<root->data<<" ";
      }
    
    return leftans||rightans;
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
   //cout<<sumTree(root)<<endl;
   cout<<"SumTree"<<endl;
   //levelOrderTraversal(root);
   int value=120;
   int k=2;
   cout<<KAncestor(root,k,value);

   return 0;
}