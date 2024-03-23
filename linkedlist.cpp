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
        if(head==NULL && head->next!=NULL)
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
            if(temp==head)
             return true;
             else 
             return false;
        }
    }
    bool detectloop(Node* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return false;
        }
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                if(fast!=NULL)
                {
                    fast=fast->next;
                }
                slow=slow->next;
                if(fast==slow)
                {
                    return true;
                }
            }
        }
          return false;
    }
   
};
 int main()
 {
   // Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node* node1=NULL;
    Node* head=NULL;
    Node* tail=NULL;
    head->insertathead(head,tail,5);
    head->insertathead(head,tail,6);
    head->insertathead(head,tail,7);
    head->print(head);
    head->insertattail(head,tail,8);    
    head->insertattail(head,tail,10);    
    head->insertattail(head,tail,18);
    tail->print(head);   
    cout<<tail->length(head)<<endl; 
    //head->insertatPosition(tail,head,3,21);
    //head->insertatPosition(tail,head,1,23);
    //head->insertatPosition(tail,head,10,25);
    head->print(head);
    head->deleteNode(head,tail,1);
    //head->deleteNode(head,tail,8);
    head->print(head);
    head->insertattail(head,tail,34);
    head->print(head);
    cout<<tail->data<<endl;
    if(head->iscircular(head))
    cout<<"It is a circular linked list "<<endl;
    else 
    cout<<"It is not a circular linked list "<<endl;
    tail->next=head->next;
    if(head->detectloop(head)==true)
    {
    cout<<"Loop is detected "<<endl;
    }
    else 
    {
    cout<<"Loop is not detected"<<endl;
    }
   
 }