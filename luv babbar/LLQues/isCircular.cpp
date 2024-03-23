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

bool isCircular(Node* head)
{
   
    Node* temp=head->next;
    while(temp!=head && temp!=NULL)
    {
        temp=temp->next;
        
    }
    if(temp==head)
    {
        return true;
    }
    return false;
}

bool circular(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
            if(fast==slow)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    Node* head=new Node(10);
    // Node* first=new Node(12);
    // Node* second=new Node(15);
    // Node* third=new Node(20);
    // Node* fourth=new Node(30);
    // Node* fifth=new Node(35);
    head->next=NULL;
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    //fifth->next=head;
    //print(head);
    cout<<"circular or not "<<isCircular(head)<<endl;
    cout<<"Circular or not "<<circular(head);
    
}