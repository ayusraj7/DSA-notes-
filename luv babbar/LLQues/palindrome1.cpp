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

Node* reverse(Node* prev,Node* curr)
{
    if(curr==NULL)
    {
        return prev;
    }
    Node* forward=curr->next;
    curr->next=prev;
    return reverse(curr,forward);
}
Node* mid(Node* head)
{
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
bool palindrome(Node* head)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->next==NULL)
    {
        return true;
    }
    Node* middleNode=mid(head)->next;
    
    Node* temp2=reverse(NULL,middleNode);
    Node* temp1=head;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data!=temp2->data)
        {
            return false;
        }else 
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;
}
int main()
{
    Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);
  Node* seventh = new Node(30);
  Node* eighth = new Node(20);
  Node* ninth = new Node(10);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth -> next = seventh;
  seventh -> next = eighth;
  eighth -> next = ninth;
  ninth -> next = NULL;
  print(head);
  
  cout<<"Palindrome or not "<<palindrome(head)<<endl;

}