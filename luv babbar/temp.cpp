#include<iostream>
using namespace std; 
class Stack{
    private:
    int *arr;
    int top;
    int size;
    public:
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int data)
    {
        if(top==size)
        {
            cout<<"Stack is full "<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is underflow"<<endl;
            return;
        }
        top--;
    }
    int getTop()
    {
        return arr[top];
    }
    int getSize()
    {
        return top+1;
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }else{
            return false;
        }
    }
};
int main()
{
    Stack s(5);
    s.push(5);
    s.push(7);
    s.push(4);
    cout<<s.getTop()<<endl;
    s.pop();
    cout<<s.getTop()<<endl;
    cout<<s.getSize()<<endl;
    if(s.isEmpty() )
    {
        cout<<"Stack is empty "<<endl;
    }else 
    {
        cout<<"Stack is not empty "<<endl;
    }
    
}
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int d){
//         this->data=d;
//         this->next=NULL;
//     }
// };
// void insertAtHead(Node* &head,Node* &tail,int data){
//     Node* temp=new Node(data);
//     if(head==NULL)
//     {
//         head=temp;
//         tail=temp;
//     }else{
//         temp->next=head;
//         head=temp;
//     }
// }
// void insertAtTail(Node* &head,Node* &tail,int data)
// {
//     Node* temp=new Node(data);
//     if(head==NULL)
//     {
//         head=temp;
//         tail=temp;
//     }else{
//         tail->next=temp;
//         tail=temp;
//     }
// }
// void insertatPosition(Node* &head,Node* &tail,int position,int data)
// {
//     if(position==1)
//     {
//         insertAtHead(head,tail,data);
//         return;
//     }
//     Node* temp=head;
//     int count=1;
//     while(count<position-1)
//     {
//         temp=temp->next;
//         count++;
//     }
    
//     if(temp->next==NULL)
//     {
//         insertAtTail(head,tail,data);
//     }else{
//         Node* newNode=new Node(data);
//         newNode->next=temp->next;
//         temp->next=newNode;
//     }
// }
// void deleteNode(Node* &head,Node* &tail,int position)
// {
//     Node* temp=head;
//     if(position==1)
//     {
        
//         head=temp->next;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     int count=1;
//     Node* prev=NULL;
//     while(temp!=NULL && count<position)
//     {
        
//         prev=temp;
//         temp=temp->next;
//         count++;
//     }
    
//     if(temp->next==NULL)
//     {
//         prev->next=NULL;
//         tail=prev;
//         temp->next=NULL;
//         delete temp;
//     }else{
//         prev->next=temp->next;
//         temp->next=NULL;
//         delete temp;
//     }

// }
// Node* reverse(Node* &head)
// {
//     Node* curr=head;
//     Node* prev=NULL;
//     while(curr!=NULL)
//     {
//         Node* forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }
// Node* reverseRecursion(Node* &curr,Node* &prev)
// {
//     if(curr==NULL)
//     {
//         return prev;
//     }
//     Node* forward=curr->next;
//     curr->next=prev;
//     prev=curr;
//     return reverseRecursion(forward,prev);
// }
// void print(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }cout<<endl;
// }
// int length(Node* head)
// {
//     int count=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }


// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;
//     Node(int d){
//         this->data=d;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
//  void insertAtHead(Node* &head,Node* &tail,int data){
//     Node* temp=new Node(data);
//     if(head==NULL)
//     {
//         head=temp;
//         tail=temp;
//     }else{
//         temp->next=head;
//         head->prev=temp;
//         head=temp;
//     }
// }
// void insertAtTail(Node* &head,Node* &tail,int data)
// {
//     Node* temp=new Node(data);
//     if(head==NULL)
//     {
//         head=temp;
//         tail=temp;
//     }else{
//         tail->next=temp;
//         temp->prev=tail;
//         tail=temp;
//     }
// }
// void insertAtPosition(Node* &head,Node* &tail,int position,int data)
// {
//     if(position==1){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     Node* temp=head;
//     int count=1;
//     while(temp!=NULL && count<position-1)
//     {
//         temp=temp->next;
//         count++;
//     }
//     cout<<temp->data<<endl;
//     if(temp->next==NULL)
//     {
//         insertAtTail(head,tail,data);
//         return;
//     }else{
//        Node* newNode=new Node(data);
//        newNode->next=temp->next;
//        temp->next->prev=newNode;
//        temp->next=newNode;
//        newNode->prev=temp;
//     }
// }
// void deleteNode(Node* &head,Node* &tail,int position)
// {
//     if(position==1)
//     {
//         Node* temp=head;
//         head=head->next;
//         head->prev=NULL;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     int count=1;
//     Node* curr=head;
//     Node* prev=NULL;
//     while(curr!=NULL && count<=position-1)
//     {
//         prev=curr;
//         curr=curr->next;
//         count++;
//     }
   
//     if(curr->next==NULL)
//     {
//         tail=curr->prev;
//         tail->next=NULL;
//         curr->prev=NULL;
//         delete curr;
//     }else{
//         prev->next=curr->next;
//         curr->next->prev=prev;
//         curr->next=NULL;
//         curr->prev=NULL;
//         delete curr;
        
//     }
// }
// void print(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }cout<<endl;
// }
// int main()
// {
//      Node *head=NULL;
//     Node* tail=NULL;
//     insertAtHead(head,tail,5);
//     insertAtHead(head,tail,6);
//     insertAtHead(head,tail,3);
//     insertAtTail(head,tail,9);
//     insertAtPosition(head,tail,3,15);
//     insertAtPosition(head,tail,1,20);
//     insertAtPosition(head,tail,7,34);
//     print(head);
//     deleteNode(head,tail,1);
//     print(head);
//     deleteNode(head,tail,3);
//     print(head);
//     deleteNode(head,tail,5);
//     print(head);
// }

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int d){
//         this->data=d;
//         this->next=NULL;
//     }
// };
// void insertAtHead(Node* &head,Node* &tail,int data){
//     Node* temp=new Node(data);
//     if(head==NULL)
//     {
//         head=temp;
//         tail=temp;
//     }else{
//         temp->next=head;
//         head=temp;
//     }
// }
// void insertAtTail(Node* &head,Node* &tail,int data)
// {
//     Node* temp=new Node(data);
//     if(head==NULL)
//     {
//         head=temp;
//         tail=temp;
//     }else{
//         tail->next=temp;
//         tail=temp;
//     }
// }
// void insertatPosition(Node* &head,Node* &tail,int position,int data)
// {
//     if(position==1)
//     {
//         insertAtHead(head,tail,data);
//         return;
//     }
//     Node* temp=head;
//     int count=1;
//     while(count<position-1)
//     {
//         temp=temp->next;
//         count++;
//     }
    
//     if(temp->next==NULL)
//     {
//         insertAtTail(head,tail,data);
//     }else{
//         Node* newNode=new Node(data);
//         newNode->next=temp->next;
//         temp->next=newNode;
//     }
// }
// void deleteNode(Node* &head,Node* &tail,int position)
// {
//     Node* temp=head;
//     if(position==1)
//     {
        
//         head=temp->next;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     int count=1;
//     Node* prev=NULL;
//     while(temp!=NULL && count<position)
//     {
        
//         prev=temp;
//         temp=temp->next;
//         count++;
//     }
    
//     if(temp->next==NULL)
//     {
//         prev->next=NULL;
//         tail=prev;
//         temp->next=NULL;
//         delete temp;
//     }else{
//         prev->next=temp->next;
//         temp->next=NULL;
//         delete temp;
//     }

// }
// Node* reverse(Node* &head)
// {
//     Node* curr=head;
//     Node* prev=NULL;
//     while(curr!=NULL)
//     {
//         Node* forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }
// Node* reverseRecursion(Node* &curr,Node* &prev)
// {
//     if(curr==NULL)
//     {
//         return prev;
//     }
//     Node* forward=curr->next;
//     curr->next=prev;
//     prev=curr;
//     return reverseRecursion(forward,prev);
// }
// void print(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }cout<<endl;
// }
// Node* middleNode(Node* head)
// {
//     Node* slow=head;
//     Node* fast=head->next;
//     while(fast!=NULL && slow!=NULL)
//     {
//         fast=fast->next;
//         if(fast!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next;
//         }

//     }
//     return slow;
// }

// Node* cycle(Node* head)
// {
//     // map<Node*,bool> cycleVisited;
//     // Node* temp=head;
//     // while(temp!=NULL)
//     // {
//     //     if(cycleVisited[temp])
//     //     {
//     //         return true;
//     //     }else{
//     //         cycleVisited[temp]=true;
//     //     }
//     // }
//     // return false;
//     Node* slow=head;
//     Node* fast=head;
//     while(fast!=NULL)
//     {
//         fast=fast->next;
//         if(fast!=NULL)
//         {
//             fast=fast->next;
//         }
//         slow=slow->next;
//         if(fast==slow)
//         {
//             return slow;
//         }
//     }
//     return NULL;

// }
// Node* findCycleNode(Node* head)
// {
//     Node* slow=cycle(head);
//     Node* fast=head;
    
//     while(slow!=fast)
//     {
//         slow=slow->next;
//         fast=fast->next;
//     }
//     return slow;
// }


// int main(){
//     Node *head=NULL;
//     Node* tail=NULL;
//     insertAtHead(head,tail,5);
//     insertAtHead(head,tail,6);
//     insertAtHead(head,tail,3);
//     insertAtTail(head,tail,9);
//     insertatPosition(head,tail,1,31);
//     insertatPosition(head,tail,6,35);
//     insertatPosition(head,tail,3,19);
//     print(head);
//     deleteNode(head,tail,5);
//     print(head);
//     deleteNode(head,tail,1);
    
//     print(head);
//     deleteNode(head,tail,5);
//     print(head);
//     Node* temp=NULL;
//     head=reverseRecursion(head,temp);
//     print(head);
//     print(head);
//     tail->next=head;
//     cout<<tail->next->data<<endl;
//     cout<<"Cycle detected or not "<<cycle(head)->data<<endl;
//     cout<<"Node from where cycle is started "<<findCycleNode(head)->data<<endl;

//     cout<<length(head)<<endl;
//     cout<<middleNode(head)->data<<endl;
//     Node* head=NULL;
//     Node* tail=NULL;
//     insertAtHead(head,tail,5);
//     insertAtHead(head,tail,2);
//     insertAtHead(head,tail,9);
//     insertAtTail(head,tail,2);
//     insertAtTail(head,tail,4);
//     insertAtTail(head,tail,9);
//     insertAtTail(head,tail,3);
    
// }
