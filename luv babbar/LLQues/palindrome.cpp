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

int length(Node* head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

bool palindrome(int arr[],int len)
{
    int i=0;
    int j=len-1;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
            return false;
        }else 
        {
           i++;
           j--;
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
  Node* sixth = new Node(40);
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
  int len=length(head);
  int *arr=new int[len];
  Node* temp=head;
  int i=0;
  while(temp!=NULL && i<len)
  {
      arr[i]=temp->data;
      temp=temp->next;
      i++;
  }

  cout<<"Linked list is palindrome or not "<<palindrome(arr,len);
  
}