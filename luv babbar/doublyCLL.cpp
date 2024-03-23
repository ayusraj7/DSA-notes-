#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertatNode(Node* &head,int data, int prevdata){
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        head->prev=head;
        head->next=head;
    }else 
    {
        Node* temp=head;
        while(temp->data!=prevdata)
        {
            temp=temp->next;
        }
        Node* newNode=new Node(data);
        newNode->next=temp->next;
        temp->next->prev=newNode;
        temp->next=newNode;
        newNode->prev=temp;
    }
}
void deleteNode(Node* &head,int data)
{
    if(head==NULL)
    {
        cout<<"Nothing to delete "<<endl;
        return;
    }


    Node* prev=head;
    Node* curr=prev->next;
     if(prev==curr)
    {
        head=NULL;
        return;
    }
    while(curr->data!=data)
    {
       
        prev=curr;
        curr=curr->next;
        
    }
    if(curr==head)
    {
        head=curr->next;
        curr->prev->next=head;
        curr->next->prev=curr->prev;
    }else 
    {
    prev->next=curr->next;
    curr->next->prev=prev;
    }
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
}
void print(Node* head)
{
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp->data!=head->data);
}
int main()
{
   Node* head=NULL;
   insertatNode(head,50,30);
   insertatNode(head,20,50);
   insertatNode(head,13,20);
   insertatNode(head,45,20);
   print(head);
   cout<<endl<<"After deleting the nodes "<<endl;
   //deleteNode(head,50);
   deleteNode(head,45);
   deleteNode(head,20);
   deleteNode(head,13l);
     
   print(head);
}