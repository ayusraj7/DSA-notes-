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
bool detectloop(Node* head)
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
            if(fast==slow)
            {
                return true;
                cout<<slow->data<<endl;
            }

        }
    }
    return false;
}
bool detectLoop(Node* head)
{
    map<Node*,bool> Nodes;
    Node* temp=head;
    Nodes[temp]=true;
    while(temp!=NULL)
    {
        if(Nodes[temp])
        {
            return true;
        }else 
        {
            Nodes[temp]=true;
        }
    }
    return false;
}

Node* findStart(Node* head)
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
        }
        if(slow==fast)
        {
            break;
        }
    }
    slow=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

void removeLoop(Node* head)
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
        }
        if(slow==fast)
        {
            break;
        }
    }
    Node* prev=fast;
    slow=head;
    while(slow!=fast)
    {
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=NULL;
}


int main()
{
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);
  Node* seventh = new Node(70);
  Node* eighth = new Node(80);
  Node* ninth = new Node(90);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth -> next = seventh;
  seventh -> next = eighth;
  eighth -> next = ninth;
  ninth -> next = fourth;
    //print(head);
    cout<<"Loop detected or not "<<detectloop(head)<<endl;
    cout<<"Loop detected or not "<<detectLoop(head)<<endl;
    cout<<"Starting of the loop "<<findStart(head)->data<<endl;
    cout<<"After removing the loop "<<endl;
    removeLoop(head);
    print(head);

}