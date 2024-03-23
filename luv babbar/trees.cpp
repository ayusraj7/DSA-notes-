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

int main()
{
   Node* root;
   int data;
   cout<<"Enter the data for the root node "<<endl;
   cin>>data;
   root=buildtree(data);
   levelOrderTraversal(root);
   return 0;
}