#include<iostream>
using namespace std;
int s[5],top=-1;
void push()
{
    if(top==4)
    {
        cout<<"Stack is overflow"<<endl;
    }else
    {
        cout<<"Enter an element "<<endl;
        top++;
        cin>>s[top];
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack is underflow "<<endl;
    }
    else
    {
        top--;
        cout<<"Popped element is "<<s[top]<<endl;
    }
}
void display()
{
    int t=top;
    if(t==-1)
    {
        cout<<"Stack empty "<<endl;
    }else
    {
        for(int i=0;i<=t;i++)
        {
            cout<<s[i]<<endl;
        }
    }
}
void palindrome()
{
    int t=top;
    int arr[t];
    for(int i=0;i<=t;i++)
    {
        arr[i]=s[i];
    }
    for(int i=0;i<=t;i++)
    {
       if(arr[i]!=s[t-i])
       {
           cout<<"No it is not pallindrome "<<endl;
           break;
       }else
       {
           cout<<"It is a pallindrome "<<endl;
       }
    }
}
int main()
{
    int ch;
    do
    {
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Palindrome"<<endl;
    cout<<"4.Display"<<endl;
    cout<<"5.Exit"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        palindrome();
        break;
        case 4:
        display();
        break;
        case 5:
        exit(0);
        default:
        cout<<"Anda hai kya laude"<<endl;
        break;
    }
     /* code */
    } while(ch!=5);
}