#include<bits/stdc++.h>
using namespace std; 
class node{
    public:
    int data;
    node* next;
    public:
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    void insertathead(node* &head,node* &tail,int data)
    {
        if(head==NULL)
        {
            node* temp=new node(data);
            head=temp;
            tail=temp;
        }else 
        {
        node* temp=new node(data);
        temp->next=head;
        head=temp;
        }
    }
    void insertattail(node* &head,node* &tail,int data)
    {
        if(tail==NULL)
        {
            node* temp=new node(data);
            head=temp;
            tail=temp;
        }else 
        {
            node* temp=new node(data);
            tail->next=temp;
            tail=temp;
        }
        
    }
    void insertatposition(node* &head,node* &tail,int position,int data)
    {
        if(position==1)
        {
            insertathead(head,tail,data);
            return;
        }
        node* temp=head;
        int cnt=1;
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
        node* curr=new node(data);
        curr->next=temp->next;
        temp->next=curr;
        }
    }
    void print(node* head)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
    int length(node* head)
    {
        node* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
             cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    void deletenode(node* &head,node* &tail,int position)
    {
        if(position==1)
        {
            node* temp=head;
            head=temp->next;
            delete temp;
        }
        int count=1;
        node* prev=NULL;
        node* curr=head;
        while(count<=position-1)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(curr->next==NULL)
        {
           prev->next=NULL;
           delete curr;
           tail=prev;
        }else 
        {
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }
    // Linked through Recurrsion 
    void printrecc(node* head)
    {
        if(head==NULL)
        {
            return;
        }
        cout<<head->data<<" ";
        print(head->next);
    }
    
    void printnode(node* head,int k)
    {
        if(head==NULL)
        {
            return;
        }
        printnode(head->next,k-1);
        if(k==0)
        {
            cout<<head->data<<" ";
        }
    }
    void reverseprint(node* head)
    {
        if(head==NULL)
        {
            return;
        }
        reverseprint(head->next);
        cout<<head->data<<" ";
    }
};
node* reverse(node* head)
{
    if(head==NULL && head->next==NULL)
    {
        return head;
    }
    node* chotahead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotahead;
}
int main()
{
    node* node1=NULL;
    node* head=node1;
    node* tail=node1;
    head->insertathead(head,tail,99);
    head->insertathead(head,tail,3);
    head->insertathead(head,tail,2);
    head->insertathead(head,tail,1);
    head->insertathead(head,tail,7);
    head->insertattail(head,tail,6);
    head->insertattail(head,tail,5);
    head->insertatposition(head,tail,3,8);
   head->insertatposition(head,tail,6,9);
   head->insertatposition(head,tail,1,4);
   head->insertatposition(head,tail,11,0);
    head->print(head);
    cout<<"Length of linked list "<<head->length(head)<<endl;
    head->deletenode(head,tail,3);
    head->deletenode(head,tail,2);
    head->deletenode(head,tail,9);
    head->print(head);
    cout<<"Recurrsion Question "<<endl;
    head->printrecc(head);
    cout<<"Nth node from the end of linked list "<<endl;
    head->printnode(head,3);
    cout<<"Reverse of Linked list "<<endl;
    head->reverseprint(head);
    cout<<"Reverse of Linked list "<<endl;
    head=reverse(head);
    head->print(head);
    cout<<endl;
}