#include<bits/stdc++.h>
using namespace std; 
class Stack{
    public:
    int size;
    int *arr;
    int top;
    
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
        
    }
    // void push(int data)
    // {
    //     if(top==size)
    //     {
    //         cout<<"Stack  overflow "<<endl;
    //         return;
    //     }
        
    //     top++;
    //     arr[top]=data;
    // }
    
    void push(int data)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=data;
        }else 
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow"<<endl;
            return;
        }

        top--;
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"There is no element in array "<<endl;
        }else 
        {
            return arr[top];
        }
    }

    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }else 
        {
            return false;
        }
    }

    int getSize()
    {
        return top+1;
    }
    void print()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Stack s(5);
    s.push(23);
    s.push(34);
    s.push(50);
    s.push(65);

    s.pop();
    cout<<"Sizes "<<s.getSize()<<endl;
    s.print();
    cout<<"top element "<<s.peek()<<endl;
    cout<<"is empty or not "<<s.isempty()<<endl;

}