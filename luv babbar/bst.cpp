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

void inOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
}

Node* findinBst(Node* root, int target)
{
    if(root==NULL)
    {
        return NULL;
    }
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

int minVal(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
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

void store(Node* root, vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    store(root->left,ans);
    ans.push_back(root->data);
    store(root->right,ans);
}

int inOrderPredecessor(Node* root,int target,vector<int> ans)
{
    for(int i=0;i<ans.size();i++)
    {
        if(i-1>=0 && ans[i]==target)
        {
            return ans[i-1];
            break;
        }
    }
    return target;
}

int inOrderSuccessor(Node* root,int target,vector<int> ans)
{
    for(int i=0;i<ans.size();i++)
    {
        if(i+1<ans.size() && ans[i]==target)
        {
            return ans[i+1];
            break;
        }

    }
    return target;
}

Node*  buildfromInorder(int in[],int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int mid=s+(e-s)/2;
    Node* root=new Node(in[mid]);
    root->left=buildfromInorder(in,s,mid-1);
    root->right=buildfromInorder(in,mid+1,e);
    return root;
}

Node* predecessor(Node* root,int target)
{
  Node* temp=root;
  Node* ans=NULL;
  if(temp->data==target){
      
      if(temp->left!=NULL)
      {
          temp=temp->left;
      }
      while(temp->right!=NULL)
      {
          temp=temp->right;
      }

  }else if(temp->data > target)
  {
      ans=temp;
      temp=temp->left;
  }else 
  {
      temp=temp->right;
  }

  return temp;
}

Node* successor(Node* root,int target)
{
  Node* temp=root;
  Node* ans=NULL;
  if(temp->data==target){
      
      if(temp->right!=NULL)
      {
          temp=temp->right;
      }
      while(temp->left!=NULL)
      {
          temp=temp->left;
      }

  }else if(temp->data > target)
  {
      temp=temp->left;
  }else 
  {
      ans=temp;
      temp=temp->right;
  }

  return temp;
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
    cout<<"InOrder of the Tree "<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"preOrder of the Tree "<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"postOrder of the Tree "<<endl;
    postOrder(root);

    cout<<endl<<"Searched element in bst is "<<endl;
    cout<<findinBst(root,11)->data<<endl;
    cout<<"Minimum value in bst is "<<minVal(root)<<endl;
    cout<<"Maximum value in bst is "<<maxVal(root)<<endl;

    cout<<"InOrder Predecessor and Inorder Successor of bst using Extra space  "<<endl;
    vector<int> ans;
    store(root,ans);
    int target=21;
    cout<<"InOrder Predecessor is "<<inOrderPredecessor(root,target,ans)<<endl;
    cout<<"InOrder Successor is "<<inOrderSuccessor(root,target,ans)<<endl;

    cout<<"Predecessor "<<predecessor(root,target)->data<<endl;
    //cout<<"Successor "<<successor(root,target)->data<<endl;


    cout<<"Creating tree from inOrder"<<endl;
    int in[]={3,5,6,9,13,16,20};
    int s=0,e=6;
    Node* root2=buildfromInorder(in,s,e);
    levelOrderTraversal(root2);
    


}