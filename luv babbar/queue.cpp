#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    
    Queue(int size)
    {
        this->size=size;
        arr=new int[size];
        rear=0;
        front=0;
    }
    void push(int data)
    {
        if(rear==size)
        {
            cout<<"Queue is full "<<endl;
            return;
        }else 
        {
            arr[rear]=data;
            rear++;
        }
    }
    void pop()
    {
        if(front==rear)
        {
            cout<<"Queue is empty "<<endl;
            return;
        }else 
        {
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=rear=0;
            }
        }
    }
    int getfront()
    {
        if(front==rear){
            cout<<"Queue is empty "<<endl;
            return -1;
        }else 
        {
            return arr[front];
        }
    }
    bool isempty()
    {
        if(front==rear)
        return true;
        else 
        return false;
    }
    int getSize(){
        return rear-front;
    }
};
int main()
{
    cout<<"Hello Ayush"<<endl;
    Queue q(6);
    q.push(6);
    q.push(3);
    q.push(9);
    q.push(10);
    cout<<"Size of queue "<<q.getSize()<<endl;
    cout<<"Front of the queue "<<q.getfront()<<endl;
    q.pop();
    cout<<"Size of queue "<<q.getSize()<<endl;
    cout<<"Front of the queue "<<q.getfront()<<endl;

    if(q.isempty())
    {
        cout<<"Queue is empty "<<endl;
    }else 
    {
        cout<<"Queue is not empty "<<endl;
    }
}