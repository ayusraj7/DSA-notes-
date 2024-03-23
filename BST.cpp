#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void levelordertraversal(Node* root)
{
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while(!q.empty())
  {
      Node* temp=q.front();
      q.pop();
      if(temp==NULL){
          cout<<endl;
          if(!q.empty())
          {
              q.push(NULL);
          }
      }
      else 
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
Node* insertIntoBST(Node* &root,int d){
    // base case 
    if(root==NULL)
    {
        root=new Node(d);
        return root;
    }
    if(d>root->data)
    {
        root->right=insertIntoBST(root->right,d);
    }else 
    {
        root->left=insertIntoBST(root->left,d);
    }
    return root;
}
void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!= -1)
    {
        root=insertIntoBST(root,data);
        cin>>data;
    }
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

// Min value 
Node* min(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
Node* max(Node* root)
{
    Node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}
Node* deletefromBST(Node* root,int val)
{
    if(root->data==val)
    {
        // if 0 child is there 
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        // if 1 child is here 
        // left child is not null and right is null 
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL && root->left==NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        // if 2 child is there 
        if(root->right!=NULL && root->left!=NULL)
        {
            int mini=min(root->right)->data;
            root->data=mini;
            root->right=deletefromBST(root->right,mini);
            return root;
        }

    }
    if(val>root->data)
    {
        root->right=deletefromBST(root->right,val);
    }else 
    {
        root->left=deletefromBST(root->left,val);
    }
    //return root;
}
int main()
{
    Node* root=NULL;
    cout<<"Enter data to create BST "<<endl;
    takeInput(root);

    cout<<"Printing the tree " <<endl;
    levelordertraversal(root);
    cout<<"printing inorder "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Printing preoder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Printing postorder"<<endl;
    postorder(root);
    cout<<"Min value of BST "<<min(root)->data<<endl;
    cout<<"Max value of BST "<<max(root)->data<<endl;
    cout<<"Delete from BST "<<deletefromBST(root,6)->data<<endl;
    levelordertraversal(root);
    return 0;
}