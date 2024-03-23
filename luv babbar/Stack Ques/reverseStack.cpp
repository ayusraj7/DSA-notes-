#include<bits/stdc++.h>
using namespace std; 
void insertatBottom(stack<int> &s, int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }

    int element=s.top();
    s.pop();

    insertatBottom(s,target);

    s.push(element);
}
void reverse(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }

    int element=s.top();
    s.pop();

    reverse(s);

    insertatBottom(s,element);

}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(15);
    s.push(25);
    s.push(50);

    
    // if(s.empty())
    // {
    //     cout<<"Stack is empty, can't insert at bottom "<<endl;
        
    // }
    
     reverse(s);
     
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }


}