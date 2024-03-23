#include<bits/stdc++.h>
using namespace std;
class CQueue{
    public:
    int size;
    int front;
    int rear;
    int *arr;
    CQueue(int size)
    {
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }

    void push(int data)
    {
        if(rear==size-1 && front==-1)
        {
            cout<<"Queue is full "<<endl;
        }else if(front==-1)
        {
            front++;
            rear++;
            arr[rear]=data;
        }else if(rear==size-1 && front!=0)
        {
            rear=0;
            arr[rear]=data;
        }else if(rear==front-1)
        {
            cout<<"Queue is full "<<endl;
            return;
        }
        else
        {
            rear++;
            arr[rear]=data;
        }
    }

    //popping 
    void pop()
    {
        if(front==-1)
        {
            cout<<"Queue is empty "<<endl;
        }else if(rear==front)
        {
            arr[front]=-1;
            rear=front=-1;
        }else if(front==size-1)
        {
            arr[front]=-1;
            front=0;
        }else 
        {
            arr[front]=-1;
            front++;
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
    
};
int main()
{
    CQueue q(8);
    q.push(15);
    q.push(10);
    q.push(18);
    q.push(20);
    q.push(18);
    q.push(28);
    q.push(30);
    q.push(22);
    cout<<"Front element is "<<q.getfront()<<endl;
    q.pop();
    cout<<"Front Element is "<<q.getfront()<<endl;
    
}