#include<bits/stdc++.h>
using namespace std; 
class Stack{
    public:
    int size;
    int *arr;
    int top1;
    int top2;
    
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top1=-1;  
        top2=size;
    }

    void push1(int data)
    {
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=data;
        }else 
        {
            cout<<"Stack overflow "<<endl;
        }
    }

    void push2(int data)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=data;
        }else 
        {
            cout<<"Stack overflow "<<endl;
        }
    }

    void pop1()
    {
        if(top1==-1)
        {
            cout<<"Stack underflow"<<endl;
        }else 
        {
            arr[top1]=0;
            top1--;
            
        }
    }
    void pop2(){
        if(top2==size)
        {
            cout<<"Stack underflow"<<endl;
        }else 
        {
            arr[top2]=0;
            top2++;
        }
    }
    void print()
    {
        cout<<"Top1:"<<top1<<endl;
        cout<<"Top2:"<<top2<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    
};
int main(){
    Stack s(10);
    s.push1(10);
    //s.print();
    s.push1(30);
    s.print();
    s.push2(50);
    s.print();
    s.push2(10);
    s.print();
    s.pop1();
    s.pop2();
    s.print();
}