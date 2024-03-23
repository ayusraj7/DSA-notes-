#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int getLength(Node* head)
{
    Node* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
        
    }
    return len;
}
Node* reverseNode(Node* &head,int k)
{
    if(head==NULL)
    {
        return head;
    }
    //invalid case 
    int len=getLength(head);
    cout<<"Length "<<len<<endl;
    if(k>len)
    {
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward;
    int i=0;
    while(i<k)
    {
        
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        i++;
    }
    
    //if(forward!=NULL)
    head->next=reverseNode(forward,k);
    return prev;
}

int main()
{
    cout<<"ayush"<<endl;
    Node* head=new Node(10);
    Node* first=new Node(20);
    Node* second=new Node(30);
    Node* third=new Node(40);
    Node* fourth=new Node(50);
    Node* fifth=new Node(60);
   
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    
    int k=3;
     print(head);
     Node* ans=reverseNode(head,k);
    
    
    print(ans);
    delete head;
}