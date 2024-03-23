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
    int leftdata;
    cout<<"Enter the data for the left of the tree "<<data<<"is"<<endl;
    cin>>leftdata;
    root->left=buildtree(leftdata);
    int rightdata;
    cout<<"Enter the data for the right of the tree "<<data<<"is"<<endl;
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
void inorder(Node* root,vector<int> &in)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
int main()
{
    int data;
    cout<<"Enter the data for node "<<endl;
    cin>>data;
    Node* root=buildtree(data);
    cout<<"Level order traversal of the tree is "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    int size=0;
    vector<int> in;
    inorder(root,in);
    //flops in many cases
    for(int i=0;i<in.size()-1;i++)
    {
        int temp=1;
        for(int j=i;j<in.size();j++)
        {
            if(in[j]<in[j+1] && j+1 <in.size())
            {
                if(in[j+1]<in[j+2] && j+2<in.size())
                {
                temp++;
                }
            }else 
            {
                break;
            }
        }
        size=max(size,temp);
    }
    cout<<"Size of largest bst is "<<size<<endl;
}