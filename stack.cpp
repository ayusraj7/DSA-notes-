#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    // properties
     int *arr;
     int top;
     int size;
     //behaviour 
     Stack(int size)
     {
         this->size=size;
         arr=new int[size];
         top=-1;
     }
     void push(int element)
     {
        if(top==size-1)
        {
           cout<<"Stack overflow"<<endl;
        }else 
        {
            top++;
            arr[top]=element;
        }

     }
     void pop()
     {
        if(top==-1)
        {
            cout<<"Stack underflow "<<endl;
        }else
        {
            top--;
        }
     }
     int peek()
     {
         if(top>=0)
         {
        return arr[top];
         }else 
         {
             cout<<"Stack is empty"<<endl;
             return -1;
         }
     }
     bool isempty()
     {
         if(top==-1)
         return true;
         else 
         return false;
     }


};
int main()
{
   Stack st(5);
   st.push(22);
   st.push(14);
   st.push(44);
   st.push(45);
   st.push(47);
   st.push(48);
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;

   if(st.isempty())
   cout<<"Stack is empty "<<endl;
   else 
   cout<<"Stack is not empty"<<endl;
}