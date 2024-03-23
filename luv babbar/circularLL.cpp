#include<bits/stdc++.h>
using namespace std; 
class Node
{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* tail)
{
    if(tail==NULL)
    {
        return;
    }
    Node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
}



 void insertNode(Node* &tail, int data,int element)
    {
        if(tail==NULL)
        {
            Node* temp=new Node(data);
             tail=temp;
            temp->next=tail;
        }else 
        {
            Node* curr=tail;
            while(curr->data!=element)
            {
                curr=curr->next;
            }
            Node* temp=new Node(data);
            temp->next=curr->next;
            curr->next=temp;
        }
    }
    void deleteNode(Node* &tail,int value)
    {
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        cout<<prev->data<<endl;
        if(prev==curr)
        {
            tail=NULL;
        }else if(curr==tail)
        {
           tail=prev;
           cout<<"now tail is "<<tail->data<<endl;
        }
        
        curr->next=NULL;
        delete curr;
    }

int main()
{
    Node* tail=NULL;
    insertNode(tail,15,34);
    insertNode(tail,30,15);
    insertNode(tail,50,30);
    insertNode(tail,95,30);
    print(tail);
    cout<<endl;
    cout<<tail->data<<endl;
    cout<<endl<<"After deleting the node "<<endl;
    deleteNode(tail,15);
    cout<<tail->data<<endl;
     print(tail);
}