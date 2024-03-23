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
int inOrderPos(int inOrder[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(inOrder[i]==element)
        {
            return i;
        }
    }
    return -1;
}
Node* buildfromInPreOrder(int inOrder[],int preOrder[],int size,int &preIndex,int inStart,int inEnd)
{
    if(preIndex>=size || inStart>inEnd)
    {
        return NULL;
    }

    int element=preOrder[preIndex++];
    Node* root=new Node(element);
    //cout<<root->data<<" ";
    int pos=inOrderPos(inOrder,size,element);
    root->left=buildfromInPreOrder(inOrder,preOrder,size,preIndex,inStart,pos-1);
    root->right=buildfromInPreOrder(inOrder,preOrder,size,preIndex,pos+1,inEnd);
    return root;
}
Node* buildfromInPostOrder(int inOrder[],int postOrder[],int size,int &postIndex,int inStart,int inEnd,map<int,int> &mapping)
{
    if(postIndex<0 || inStart>inEnd)
    {
        return NULL;
    }

    int element=postOrder[postIndex--];
    Node* root=new Node(element);
    //cout<<root->data<<" ";
    int pos=mapping[element];
   
    root->right=buildfromInPostOrder(inOrder,postOrder,size,postIndex,pos+1,inEnd,mapping);
    root->left=buildfromInPostOrder(inOrder,postOrder,size,postIndex,inStart,pos-1,mapping);
    return root;
}
void createMapping(map<int,int> &mapping,int inOrder[],int size)
{
    for(int i=0;i<size;i++)
    {
        int element=inOrder[i];
        mapping[element]=i;
    }
}
int main()
{
    int inOrder[]={40,20,50,10,60,30,70};
    int preOrder[]={10,20,40,50,30,60,70};
    int size=7;
    int inEnd=size-1;
    int inStart=0;
    int preIndex=0;
    map<int,int> mapping;
    createMapping(mapping,inOrder,size);
    cout<<"Building tree"<<endl;
    Node* root=buildfromInPreOrder(inOrder,preOrder,size,preIndex,inStart,inEnd);
    cout<<"Printing level Order Traversal "<<endl;
    levelOrderTraversal(root);
    cout<<"Building tree of post index and pre index "<<endl;
    int postOrder[]={40,50,20,60,70,30,10};
    int postIndex=size-1;
    Node* root2=buildfromInPostOrder(inOrder,postOrder,size,postIndex,inStart,inEnd,mapping);
    cout<<"Printing level order traversal for post order "<<endl;
    levelOrderTraversal(root2);
}