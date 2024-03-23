#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next; 
    Node* prev;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL; 
    }
};
void insertathead(Node* &head,Node* &tail,int data)
{
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }else 
    {
        Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}


void insertattail(Node* &head,Node* &tail,int data)
{
    if(tail==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }else 
    {
        Node* newNode=new Node(data);
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
}


void print(Node* head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int getLength(Node* head)
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


// void insertatPosition(Node* &head,Node* &tail,int data, int position)
// {
//      if(head==NULL)
//      {
//          Node* newNode=new Node(data);
//          tail=newNode;
//          head=newNode;
//          return;
//      }

//      //if position is 1 
//      if(position==1)
//      {
//          insertathead(head,tail,data);
//          return;
//      }
     
//      int len=getLength(head);
     
//      if(position >= len)
//      {
//          insertattail(head,tail,data);
//          return;
//      }else 
//      {
//          int i=1;
//          Node* prev=head;
//          while(i<position-1)
//          {
//              prev=prev->next;
//              i++;
//          }
//          Node* curr=prev->next;
//          Node* newNode=new Node(data);
//          prev->next=newNode;
//          newNode->next=curr;
//          curr->prev=newNode;
//          newNode->prev=prev;
//      }

// }

//without current pointer 
void insertatPosition(Node* &head,Node* &tail,int data,int position)
{
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        tail=newNode;
        head=newNode;
        return;
    }

    //if position is 1
    if(position==1){
        insertathead(head,tail,data);
        return;
    }else 
    {
        int i=1;
        Node* prev=head;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }

        Node* newNode=new Node(data);
        if(prev->next==NULL)
        {
            insertattail(head,tail,data);
            return;
        }else 
        {
            newNode->next=prev->next;
            newNode->prev=prev;
            prev->next->prev=newNode;
            prev->next=newNode;
        }
    }
}

void deleteNode(Node* &head,Node* &tail,int position)
{
    if(head==NULL)
    {
        cout<<"Nothing to delete "<<endl;
        return;
    }

    if(position==1)
    {
        Node* temp=head;
        
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        return;
    }
    int len=getLength(head);
    if(position>len)
    {
        cout<<"Please enter a valid position "<<endl;
        return;
    }
    if(position==len)
    {
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
    }else 
    {
        Node* prev=head;
        int i=1;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        Node* curr=prev->next;
        prev->next=curr->next;
        curr->next->prev=prev;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
}

//without curr pointer 
// void deleteNode(Node* &head,Node* &tail,int position)
// {
//     if(head==NULL)
//     {
//         cout<<"Nothing to delete "<<endl;
//         return;
//     }

//     if(position==1)
//     {
//         Node* temp=head;
//         head=head->next;
//         head->prev=NULL;
//         temp->next=NULL;
//         return;
//     }else 
//     {
//         Node* prev=NULL;
//         Node* curr=head;
//         int i=1;
//         while(i<=position-1)
//         {
//             prev=curr;
//             curr=curr->next;
//             i++;
//         }
//         if(curr->next==NULL)
//         {
//              prev->next=NULL;
//              curr->prev=NULL;
//              tail=prev;
//              delete curr;
//         }else 
//         {
//             prev->next=curr->next;
//             curr->next->prev=prev;
//             curr->next=NULL;
//             curr->prev=NULL;
//             delete curr;
//         }
//     }
// }

 int main()
 {
    Node* head=NULL;
    Node* tail=NULL;
    insertathead(head,tail,12);
    insertathead(head,tail,24);
    insertathead(head,tail,23);
    insertattail(head,tail,40);
    insertattail(head,tail,50);
    insertatPosition(head,tail,60,1);
    insertatPosition(head,tail,90,6);
    insertatPosition(head,tail,333,4);
    print(head);
    cout<<endl;
    cout<<"After deleting Nodes "<<endl;
    deleteNode(head,tail,1);
    deleteNode(head,tail,7);
    deleteNode(head,tail,3);
    deleteNode(head,tail,10);
    print(head);
 }