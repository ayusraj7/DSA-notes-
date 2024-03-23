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

pair<bool,int> isHeap(Node* root)
{
    if(root==NULL)
    {
        pair<bool,int> p=make_pair(true,INT_MIN);
        return p;
    }
    if(root->left==NULL && root->right==NULL)
    {
        pair<bool,int> p=make_pair(true,root->data);
        return p;
    }

    pair<bool,int> leftans=isHeap(root->left);
    pair<bool,int> rightans=isHeap(root->right);

    pair<bool,int> ans;
    if(root->data> leftans.second && root->data > rightans.second && leftans.first && rightans.first)
    {
        ans.first=true;
        ans.second=root->data;
    }else 
    {
        ans.first=false;
        ans.second=root->data;
    }

    return ans;
}
void inOrder(Node* root,vector<int> &in)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left,in);
    in.push_back(root->data);
    inOrder(root->right,in);
}
void convertHeap(Node* root,vector<int> in,int &i)
{
    if(root==NULL)
    {
        return;
    }
    convertHeap(root->left,in,i);
    convertHeap(root->right,in,i);
    root->data=in[i++];
}

bool isCBT(Node* root, int i,int totalNodes)
{
    if(root==NULL)
    {
        return true;
    }
    if(i>totalNodes)
    {
        return false;
    }
    bool leftans=isCBT(root->left,2*i,totalNodes);
    bool rightans=isCBT(root->right,2*i+1,totalNodes);

    return leftans&&rightans;
}
int main()
{
    //note: tree is already a complete binary tree 
    int data;
    cout<<"Enter the data for the root node "<<endl;
    cin>>data;
    Node* root=buildtree(data);
    cout<<"Printing the tree"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
   // cout<<"Is Binary tree is a heap or not "<<isHeap(root).first<<endl;
    cout<<"Converting binary Search tree into Max-Heap"<<endl;
    vector<int> in;
    inOrder(root,in);
    int i=0;
    convertHeap(root,in,i);
    levelOrderTraversal(root);

    cout<<"Checking whether the tree is cbt or not "<<endl;
    i=1;
    int totalNodes=in.size();
    if(isCBT(root,i,totalNodes))
    {
        cout<<"Complete binary tree "<<endl;
    }else 
    {
        cout<<"Not a complete binary tree "<<endl;
    }


}