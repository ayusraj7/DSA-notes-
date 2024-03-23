#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    void insertathead(Node* &head,Node* &tail,int data)
    {
        if(head==NULL)
        {
           Node* temp=new Node(data);
           head=temp;
           tail=temp;
        }
        else 
        {
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
        }
    }
    void insertattail(Node* &head,Node* &tail,int data)
    {
        if(tail==NULL)
        {
            Node* temp=new Node(data);
            head=temp;
            tail=temp;
        }else 
        {
        Node* temp=new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        }
    }
    void insertatPosition(Node* &tail,Node* &head,int position,int data)
    {
        if(position==1)
        {
            insertathead(head,tail,data);
            return;
        }
        int cnt=1;
        Node* temp=head;
        while(cnt<position-1)
        {
            temp=temp->next;
            cnt++;
        }
        if(temp==NULL)
        {
            insertattail(head,tail,data);
        }else 
        {
        Node* newnode=new Node(data);
        newnode->next=temp->next;
        temp->next=newnode;
        }
    }
    void deleteNode(Node* &head,Node* &tail,int position)
    {
        if(position==1)
        {
            Node* temp=head;
            head=head->next;
            delete temp;
        }
        else 
        {
            int cnt=1;
            Node* prev=NULL;
            Node* curr=head;
            while(cnt<=position-1)
            {
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            if(curr->next!=NULL)
            {
             curr->next->prev=prev;
            }
            prev->next=curr->next;
            if(curr->next==NULL)
            {
             tail=prev;
            }
            curr->next=NULL;
            
            delete curr;
        }
    }
    void print(Node* head)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
    int length(Node* head)
    {
        int len=0;
        Node* temp=head;
        if(temp==NULL)
        {
            cout<<"list is empty "<<endl;
        }else 
        {
            while(temp!=NULL)
            {
                temp=temp->next;
                len++;
            }
            return len;
        }
    }
    bool iscircular(Node* head)
    {
        if(head==NULL && head->next!=NULL && head->prev==head)
        {
            return true;
        }
        else 
        {
            Node* temp=head;
            while(temp!=NULL)
            {
                temp=temp->next;
            }
            if(temp==head && head->prev==temp)
             return true;
             else 
             return false;
        }
    }
    
};
 int main()
 {
   // Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node* head=NULL;
    Node* tail=NULL;
    head->insertathead(head,tail,5);
    head->insertathead(head,tail,8);
    head->insertathead(head,tail,9);
    head->print(head);
    head->insertattail(head,tail,13);    
    head->insertattail(head,tail,11);    
    head->insertattail(head,tail,19);
    tail->print(head);   
    cout<<tail->length(head)<<endl; 
    head->insertatPosition(tail,head,3,25);
    head->insertatPosition(tail,head,1,20);
    head->insertatPosition(tail,head,10,22);
    head->print(head);
    head->deleteNode(head,tail,1);
    head->deleteNode(head,tail,8);
    head->print(head);
    head->insertattail(head,tail,34);
    head->print(head);
    cout<<tail->data<<endl;
    if(head->iscircular(head))
    cout<<"It is a circular linked list "<<endl;
    else 
    cout<<"It is not a circular linked list "<<endl;

   
 }