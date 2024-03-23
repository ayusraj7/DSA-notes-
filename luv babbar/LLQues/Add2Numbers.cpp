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
Node* reverse(Node* head)
{
    Node* prev=NULL;
    Node* curr=head;
    
    while(curr!=NULL)
    {
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
Node* addNumbers(Node* head1,Node* head2)
{
    Node* temp1=reverse(head1);
    Node* temp2=reverse(head2);
    int carry=0;
    Node* head=NULL;
    Node* tail=NULL;
    while(temp1!=NULL && temp2!=NULL)
    {
        int sum=temp1->data+temp2->data+carry;
        int carry=sum/10;
        int ans=sum%10;

        temp1=temp1->next;
        temp2=temp2->next;

        Node* temp=new Node(ans);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }else 
        {
            tail->next=temp;
            tail=temp;
        }
    }
    while(temp1!=NULL)
    {
        int sum=temp1->data+carry;
        int carry=sum/10;
        int ans=sum%10;

        temp1=temp1->next;

        Node* temp=new Node(ans);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }else 
        {
            tail->next=temp;
            tail=temp;
        }
    }

     while(temp2!=NULL)
    {
        int sum=temp2->data+carry;
        int carry=sum/10;
        int ans=sum%10;

        temp2=temp2->next;

        Node* temp=new Node(ans);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }else 
        {
            tail->next=temp;
            tail=temp;
        }
    }

     while(carry!=0)
    {
        int sum=temp2->data+carry;
        int carry=sum/10;
        int ans=sum%10;
       
        
        
        Node* temp=new Node(ans);
        
            tail->next=temp;
            tail=temp;
    }

    return head;

}
int main()
{
  Node* head1= new Node(1);
  Node* second = new Node(1);
  Node* third = new Node(1);
  
  head1-> next = second;
  second -> next = third;
  Node* head2=new Node(2);
  Node* second2=new Node(5);
  Node* third2=new Node(3);
  
  head2->next=second2;
  second2->next=third2;

  Node* head3=reverse(addNumbers(head1,head2));
  
  print(head3);
}