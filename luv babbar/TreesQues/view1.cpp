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
    cout<<"Enter the data in the left of the "<<data<<endl;
    int leftdata;
    cin>>leftdata;
    root->left=buildtree(leftdata);
    cout<<"Enter the data in the right of the "<<data<<endl;
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

void topViewTraversal(Node* root)
{
    map<int,Node*> topView;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int> p=q.front();
        q.pop();
        Node* temp=p.first;
        int hd=p.second;
        if(topView.find(hd)==topView.end())
        {
            topView[hd]=temp;
        }
        if(temp->left)
        {
             pair<Node*,int> p=make_pair(temp->left,hd-1);
             q.push(p);
        }
        if(temp->right)
        {
            pair<Node*,int> p=make_pair(temp->right,hd+1);
             q.push(p);
        }
    }
    cout<<"printing the leftNodeswer "<<endl;
    for(auto i:topView)
    {
        cout<<i.first<<"->"<<i.second->data<<endl;
    }

}

void BottomViewTraversal(Node* root)
{
    map<int,Node*> BottomView;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int> p=q.front();
        q.pop();
        Node* temp=p.first;
        int hd=p.second;

        //bottom view 
        BottomView[hd]=temp;
        
        if(temp->left)
        {
             pair<Node*,int> p=make_pair(temp->left,hd-1);
             q.push(p);
        }
        if(temp->right)
        {
            pair<Node*,int> p=make_pair(temp->right,hd+1);
             q.push(p);
        }
    }
    cout<<"printing the leftNodeswer "<<endl;
    for(auto i:BottomView)
    {
        cout<<i.first<<"->"<<i.second->data<<endl;
    }
}

void leftsideView(Node* root,map<int,int> &leftView,int level)
{
    if(root==NULL)
    {
        return;
    }

    if(leftView.find(level)==leftView.end())
    {
        leftView[level]=root->data;
    }

    leftsideView(root->left,leftView,level+1);
    leftsideView(root->right,leftView,level+1);
}

void leftsideView1(Node* root,vector<int> &left,int level)
{
    if(root==NULL)
    {
        return;
    }
    if(left.size()==level)
    {
        left.push_back(root->data);
    }
    leftsideView1(root->left,left,level+1);
    leftsideView1(root->right,left,level+1);
}
void rightsideView(Node* root,map<int,int> &rightView,int level)
{
    if(root==NULL)
    {
        return;
    }

    if(rightView.find(level)==rightView.end())
    {
        rightView[level]=root->data;
    }

    rightsideView(root->right,rightView,level+1);
    rightsideView(root->left,rightView,level+1);
}
void rightsideView1(Node* root,vector<int> &right,int level)
{
    if(root==NULL)
    {
        return;
    }
    if(right.size()==level)
    {
        right.push_back(root->data);
    }
    rightsideView1(root->right,right,level+1);
    rightsideView1(root->left,right,level+1);
}
void leafsideView(Node* root,vector<int> &leafNodes)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        leafNodes.push_back(root->data);
    }
    leafsideView(root->left,leafNodes);
    leafsideView(root->right,leafNodes);
}
void boundaryTraversal(vector<int> leftNodes,vector<int> rightNodes,vector<int> leafNodes)
{
    for(int i:leftNodes)
    {
        cout<<i<<" ";
    }
    for(int i:leafNodes)
    {
        cout<<i<<" ";
    }
    reverse(rightNodes.begin(),rightNodes.end());
    for(int i:rightNodes)
    {
        cout<<i<<" ";
    }
    
}

int main()
{
    int data;
    cout<<"Enter the data for root"<<endl;
    cin>>data; 

    Node* root=buildtree(data);
    levelOrderTraversal(root);

    vector<int> top;
    cout<<"TopView of the Tree"<<endl;
    topViewTraversal(root);
     
    
     cout<<"BottomView of the Tree "<<endl;
     BottomViewTraversal(root);

     cout<<"Left Side View of the Tree "<<endl;
     map<int,int> leftView;
     int level=0;
     leftsideView(root,leftView,level);
     for(auto i:leftView)
     {
         cout<<i.first <<" "<<i.second<<endl;
     }
     cout<<"left Side view without using map "<<endl;
     vector<int> leftNodes;
     leftsideView1(root,leftNodes,level);
     for(auto i:leftNodes)
     {
         cout<<i<<" ";
     }
     cout<<"Right Side View of the Tree "<<endl;
     map<int,int> rightView;
     rightsideView(root,rightView,level);
     for(auto i:rightView)
     {
         cout<<i.first<<" "<<i.second<<endl;
     }
     cout<<"right side view without using map "<<endl;
     vector<int> rightNodes;
     rightsideView1(root,rightNodes,level);
    for(auto i:rightNodes)
    {
        cout<<i<<" ";
    }
    cout<<"printing the leaf nodes "<<endl;
    vector<int> leafNodes;
    leafsideView(root,leafNodes);
    for(auto i:leafNodes)
    {
        cout<<i<<" ";
    }
    // cout<<"Boundary traversal of the tree is "<<endl;
    // boundaryTraversal(leftNodes,rightNodes,leafNodes);//wrong because of last nodes 
}