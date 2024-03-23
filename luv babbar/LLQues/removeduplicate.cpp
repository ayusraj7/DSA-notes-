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

void removeDuplicates(Node* head)
{
    Node* curr=head;
    while(curr!=NULL)
    {
        if((curr->next!=NULL) && (curr->data == curr->next->data))
        {
            Node* temp=curr->next;
            curr->next=curr->next->next;

            temp->next=NULL;
            delete temp;
        }else 
        {
            curr=curr->next;
        }
    }
}

//for unsorted linked list duplicate removal 
void removeDuplicates2(Node* &head) {
        if( head == NULL) {
                cout << "LL is empty" << endl;
                return;
        }
        if(head -> next == NULL) {
                cout << "Single Node in LL" << endl;
                return ;
        }

        // >1 node in LL
        Node* curr = head;
        while(curr!=NULL)
        {
          Node* temp=curr->next;
          Node* prev=curr;
          while(temp!=NULL)
          {
            
            if(curr->data == temp->data)
            {
              prev->next=temp->next;
              temp=temp->next;
            }else 
            {
              prev=temp;
              temp=temp->next;
            }
          }
          curr=curr->next;
        }
}


int main()
{
 Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(30);
  Node* fifth = new Node(50);
  Node* sixth = new Node(50);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  print(head);
  cout<<"After removing duplicate"<<endl;
  removeDuplicates2(head);
     print(head);
 
}