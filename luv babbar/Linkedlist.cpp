#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;
    
    //constructor 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor 
    ~Node()
    {
        int val=this->data;
        //memory free 
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for Node with data"<<val<<endl;
    }
};
void insertathead(Node* &head,Node* &tail,int data)
{
    Node* newNode=new Node(data);
    if(head==NULL)
    {
       head=newNode;
       tail=newNode;
    }else 
    {
    newNode->next=head;
    head=newNode;
    }
}
void insertattail(Node* &head,Node* &tail,int data)
{
    Node* newNode=new Node(data);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
    }else 
    {
        tail->next=newNode;
        tail=newNode;
    }
}
void print(Node* head)
{
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
void insertatPosition(Node* &head,Node* &tail,int data, int position)
{
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(position==1)
    {
        insertathead(head,tail,data);
        return;
    }
    int len=getLength(head);
    if(position > len)
    {
        insertattail(head,tail,data);
    }else 
    {
        int i=1;
        Node* prev=head;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        Node* curr=prev->next;
        Node* newNode=new Node(data);
        newNode->next=curr;
        prev->next=newNode;
    }
    
}

//without curr pointer 
// void insertatPosition(Node* &head,Node* &tail,int data,int position)
// {
//     if(position==1)
//     {
//         insertathead(head,tail,data);
//         return;
//     }else 
//     {
//         Node* prev=head;
//         int i=1;
//         while(i<position-1)
//         {
//             prev=prev->next;
//             i++;
//         }
//         if(prev->next==NULL)
//         {
//             Node* newNode=new Node(data);
//             prev->next=newNode;
//             tail=newNode;
//         }else 
//         {
//             Node* newNode=new Node(data);
//             newNode->next=prev->next;
//             prev->next=newNode;
//         }
//     }
// }

void deleteNode(Node* &head,Node* &tail,int position)
{
    if(head==NULL)
    {
        cout<<"Nothing to delete "<<endl;
        return;
    }
    

    //delete Node 
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else 
    {
        int len=getLength(head);
        if(position==len){
            Node* prev=head;
            int i=1;
            while(i<position-1)
            {
                prev=prev->next;
                i++;
            }
            Node* temp=prev->next;
            prev->next=NULL;
            tail=prev;
            delete temp;
        }else
        {
            int i=1;
            Node* prev=head;
            while(i<position-1)
            {
                prev=prev->next;
                i++;
            }
            Node* curr=prev->next;
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }
}


//without taking getLength 
// void deleteNode(Node* &head,Node* &tail,int position)
// {
//     if(head==NULL)
//     {
//         cout<<"Nothing to delete "<<endl;
//         return;
//     }

//     //when position is 1
//     if(position==1){
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
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
//            prev->next=NULL;
//            tail=prev;
//            delete curr;
//         }else 
//         {
//             prev->next=curr->next;
//             curr->next=NULL;
//             delete curr;
//         }
//     }

// }




int main()
{
   Node *first=new Node(10);
   Node* second=new Node(20);
   Node* third=new Node(30);
   Node* fourth=new Node(40);
   Node* fifth=new Node(50);

   first->next=second;
   second->next=third;
   third->next=fourth;
   fourth->next=fifth;

   //printing 
   cout<<"Printing the linked list "<<endl;
   print(first);

      //better way of representing linked list 
      Node* head=NULL;
      Node* tail=NULL;
      insertathead(head,tail,15);
      insertathead(head,tail,25);
      insertathead(head,tail,40);
      insertattail(head,tail,30);
      insertattail(head,tail,50);
      insertatPosition(head,tail,10,1);
      insertatPosition(head,tail,100,7);
      insertatPosition(head,tail,150,3); 
      cout<<"Printing the tail "<<endl;
      cout<<tail->data<<endl;
      cout<<"Printing the nodes  "<<endl;
      print(head);
      cout<<endl;
      cout<<"After deleting nodes "<<endl;
      deleteNode(head,tail,1);
      deleteNode(head,tail,7);
      cout<<tail->data<<endl;
      deleteNode(head,tail,3);
      print(head);
   


}