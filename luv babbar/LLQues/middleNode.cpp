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

int length(Node* head)
{
    Node* temp=head;
    int len=1;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
Node* middleNode(Node* head)
{
    int len=length(head);
    int mid=0;
    if(len%2==0)
    {
       mid=len/2;
    }else 
    {
         mid=len/2+1;
    }

    Node* temp=head;
    int i=1;
    while(i<mid)
    {
        temp=temp->next;
        i++;
    }
    return temp;
}

//2nd way 
Node* middle(Node* head)
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
    }
    
    return slow;
}
int main()
{
    Node* head=new Node(10);
    Node* first=new Node(12);
    Node* second=new Node(15);
    Node* third=new Node(20);
    Node* fourth=new Node(30);
    Node* fifth=new Node(35);
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    print(head);
    cout<<"Middle Node of LL is  "<<middleNode(head)->data<<endl;
    cout<<"Midde Node by Two pointers is "<<middle(head)->data<<endl;
    
}