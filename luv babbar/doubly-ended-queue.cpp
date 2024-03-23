#include<bits/stdc++.h>
using namespace std;
class Dequeue{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    Dequeue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push_rear(int data)
    {
        if(front==-1 && rear==size-1 || rear==front-1)
        {
            cout<<"Queue is full "<<endl;
            return;
        }else if(front==-1)
        {
            front=rear=0;
        }else if(rear==size-1 && front!=0)
        {
            rear=0;
        }else
        {
            rear++;
        }
        arr[rear]=data;
    }
    void push_front(int data)
    {
        if(front == 0 && rear==size-1 || rear==front-1)
        {
            cout<<"Queue is full "<<endl;
            return;
        }else if(front==-1)
        {
            front=rear=0;
        }else if(front==0 && rear!=size-1)
        {
            front=size-1;
        }else 
        {
            front--;
        }
        arr[front]=data;
    }

    //poping front 
    void pop_front()
    {
        if(front==-1){
            cout<<"Queue is empty "<<endl;
            return;
        }else if(front==rear)
        {
            arr[front]=-1;
            front=rear=-1;
        }else if(front==size-1){
            arr[front]=-1;
            front=0;
        }else {
            arr[front]=-1;
            front++;
        }
        
    }

    //popping rear 
    void pop_rear()
    {
        if(front==-1){
            cout<<"Queue is empty "<<endl;
            return;
        }else if(front==rear)
        {
            arr[rear]=-1;
            front=rear=-1;
        }else if(rear==0)
        {
            arr[rear]=-1;
            rear=size-1;
        }else {
            arr[rear]=-1;
            rear--;
        }
    }
    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
int main()
{
    Dequeue dq(10);
    // dq.push_front(14);
    // //dq.push_rear(10);
    // dq.push_front(20);
    // dq.push_front(22);
    // dq.push_front(29);
    // //dq.push_rear(16);
    // //dq.push_rear(41);
    // //dq.push_rear(22);
    // //dq.push_rear(35);
    dq.push_rear(10);
    dq.push_rear(20);
    dq.push_rear(30);
    dq.push_rear(40);
    dq.push_rear(50);
    dq.push_rear(60);
    dq.push_rear(70);
    dq.push_rear(80);
    dq.print();
    dq.pop_front();
    dq.print();
    
    dq.pop_rear();
    dq.print();
    dq.push_front(15);
    dq.print();
    dq.push_rear(20);
    dq.print();
    dq.push_front(15);
    dq.print();
    dq.pop_front();
    dq.print();
    dq.pop_front();
    dq.print();
    dq.push_rear(23);
    dq.print();
    dq.push_rear(50);
    dq.print();
    dq.push_rear(70);
    dq.print();
    dq.push_rear(50);
    dq.print();

}