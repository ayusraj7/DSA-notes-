#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;
    
    //constructor 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor 
    ~Node()
    {
        int val=this->data;
        //memory free 
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for Node with data"<<val<<endl;
    }
};
void insertathead(Node* &head,Node* &tail,int data)
{
    Node* newNode=new Node(data);
    if(head==NULL)
    {
       head=newNode;
       tail=newNode;
    }else 
    {
    newNode->next=head;
    head=newNode;
    }
}
void insertattail(Node* &head,Node* &tail,int data)
{
    Node* newNode=new Node(data);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
    }else 
    {
        tail->next=newNode;
        tail=newNode;
    }
}
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getLength(Node* head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
void insertatPosition(Node* &head,Node* &tail,int data, int position)
{
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(position==1)
    {
        insertathead(head,tail,data);
        return;
    }
    int len=getLength(head);
    if(position > len)
    {
        insertattail(head,tail,data);
    }else 
    {
        int i=1;
        Node* prev=head;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        Node* curr=prev->next;
        Node* newNode=new Node(data);
        newNode->next=curr;
        prev->next=newNode;
    }
    
}
Node* reverse(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL)
    {
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node* reverseNode(Node* prev,Node* curr)
{
    if(curr==NULL)
    {
        return prev;
    }

    
    Node* next=curr->next;
    curr->next=prev;
    return reverseNode(curr,next);
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(head,tail,5);
    insertathead(head,tail,6);
    insertathead(head,tail,7);
    insertathead(head,tail,8);
    print(head);
    cout<<endl;
    cout<<"Reverse of the linked list is "<<endl;
    //head=reverse(head);
    Node* prev=NULL;
    Node* curr=head;
    head=reverseNode(prev,curr);
    
    print(head);
}