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
Node* sorting(Node* head)
{
    //null Case 
    if(head==NULL)
    {
        return NULL;
    }
    //one node case 
    if(head->next==NULL)
    {
        return head;
    }

    // else 
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;
    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;
    
    Node* curr=head;
    while(curr!=NULL)
    {
        if(curr->data==0)
        {
            Node* temp=curr;
            zeroTail->next=temp;
            zeroTail=temp;
            curr=curr->next;
            temp->next=NULL;
        }else if(curr->data==1)
        {
            Node* temp=curr;
            oneTail->next=temp;
            oneTail=temp;
            curr=curr->next;
            temp=temp->next;
        }else if(curr->data==2){
            Node* temp=curr;
            twoTail->next=temp;
            twoTail=temp;
            curr=curr->next;
            temp=temp->next;
        }
    }
    // cout<<zeroTail->data<<endl;
    // cout<<oneHead->next->data<<" "<<twoHead->next->data<<endl;

    if(oneHead->next==NULL && twoHead->next!=NULL)
    {
        zeroTail->next=twoHead->next;
    }else 
    {
        if(twoHead->next!=NULL)
        {
            zeroTail->next=oneHead->next;
            oneTail->next=twoHead->next;
        }else 
        {
            zeroTail->next=oneHead->next;
        }
    }
    zeroHead=zeroHead->next;
    return zeroHead;
}
void sorting1(Node* &head)
{
    int zeroes=0;
    int ones=0;
    int twos=0;
    Node* temp=head;
    
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            
            zeroes++;
        }else if(temp->data==1)
        {
           
            ones++;
        }else if(temp->data==2)
        {
           
            twos++;
        }
        temp=temp->next;
    }
   
    temp=head;
    while(temp!=NULL)
    {
        if(zeroes!=0)
        {
            temp->data=0;
            zeroes--;
        }else if(ones!=0)
        {
            temp->data=1;
            ones--;
        }else if(twos!=0)
        {
            temp->data=2;
            twos--;
        }
        temp=temp->next;
    }
}
int main()
{
 Node* head = new Node(1);
  Node* second = new Node(1);
  Node* third = new Node(1);
  Node* fourth = new Node(1);
  Node* fifth = new Node(2);
  Node* sixth = new Node(1);
  Node* seventh = new Node(2);
  Node* eight = new Node(2);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth->next=seventh;
  seventh->next=eight;
  print(head);
  cout<<"After sorting "<<endl;
  //sorting(head);

  head=sorting(head);
  //cout<<head->data<<" ";
  print(head);

 
}