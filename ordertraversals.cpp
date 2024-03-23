#include<bits/stdc++.h>
using namespace std; 
class node{
    public:
    int data;
    node* left;
    node* right;
    public:
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root){
cout<<"Enter the data "<<endl;
int data;
cin>>data;
root=new node(data);
if(data==-1)
{
    return NULL;
}
cout<<"Enter the left of the "<<root->data<<endl;
root->left=buildtree(root->left);
cout<<"Enter the right of the "<<root->data<<endl;
root->right=buildtree(root->right);
return root;
}
void levelordertraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
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
void inorder(node* root)
{
    stack<node*> s;
    node* curr=root;
    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        cout<<curr->data<<" ";
        s.pop();
        if(curr!=NULL)
        {
        curr=curr->right;
        }
    }
}
void preorder(node* root)
{
    stack<node*> s;
    node* curr=root;
    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            cout<<curr->data<<" ";
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        curr=curr->right;
    }
}
void postorder(node* root)
{
  stack<node *> s1, s2;
 
    // push root to first stack
    s1.push(root);
   
 
    // Run while first stack is not empty
    while (!s1.empty()) {
        // Pop an item from s1 and push it to s2
        node* temp = s1.top();
        s1.pop();
        s2.push(temp);
 
        // Push left and right children
        // of removed item to s1
        if (temp->left)
            s1.push(temp->left);
        if (temp->right)
            s1.push(temp->right);
    }
 
    // Print all elements of second stack
    while (!s2.empty()) {
        node* temp = s2.top();
        s2.pop();
        cout << temp->data << " ";
    }
}
int main()
{
   node* root=NULL;
   root=buildtree(root);
   levelordertraversal(root);
   cout<<"Inorder traversal"<<endl;
   inorder(root);
   cout<<"Preorder traversal"<<endl;
   preorder(root);
   cout<<"PostOrder traversal"<<endl;
   postorder(root);

}