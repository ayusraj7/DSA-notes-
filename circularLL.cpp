#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    void insertatnode(Node* &tail, int element , int data)
    {
        if(tail==NULL)
        {
            Node* temp=new Node(data);
             tail=temp;
            temp->next=tail;
        }else 
        {
            Node* curr=tail;
            while(curr->data!=element)
            {
                curr=curr->next;
            }
            Node* temp=new Node(data);
            temp->next=curr->next;
            curr->next=temp;
        }
    }
    void deleteNode(Node* &tail,int value)
    {
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        cout<<prev->data<<endl;
        if(prev==curr)
        {
            tail=NULL;
        }else if(curr==tail)
        {
           tail=prev;
           cout<<"now tail is "<<tail->data<<endl;
        }
        
        curr->next=NULL;
        delete curr;
    }
    void print(Node* tail)
    {
        Node* temp=tail;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=tail);
        cout<<endl;
    }
    bool iscircular(Node* head)
    {
       if(head==NULL && head->next==head)
       {
           return true;
       }
       Node* temp=head;
       while(temp!=head)
       {
           temp=temp->next;
       }
       if(temp==head)
       {
           return true;
       }else 
       {
           return false;
       }
    }
};
int main()
{
     Node* tail=NULL;
     tail->insertatnode(tail,5,3);
     tail->insertatnode(tail,3,6);
     tail->insertatnode(tail,6,9);
     tail->insertatnode(tail,9,16);
     tail->print(tail);
    // tail->deleteNode(tail,3);
     tail->deleteNode(tail,6);
     tail->print(tail);
     if(tail->iscircular(tail))
     cout<<"It is a circular linked list "<<endl;
     else 
     cout<<"It is not a circular linked list "<<endl;
    
}