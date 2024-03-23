#include<bits/stdc++.h>
using namespace std; 
int main()
{
    stack<int> st;

    //insertion 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"Top of the stack is:"<<st.top()<<endl;
    cout<<"After popping "<<endl;
    st.pop();

    cout<<"Top of the stack is:"<<st.top()<<endl;

    //check element on top 
    cout<<"Element on top is :"<<st.top()<<endl;

    //size 
    cout<<"size of stack is:"<<st.size()<<endl;

    cout<<"Printing the stack "<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<endl;
    //question 1: reverse a string using stack 
    string name="love";
    stack<char> s;
    for(int i=0;i<name.size();i++)
    {
        s.push(name[i]);
    }
    string ans="";
    while(!s.empty())
    {
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"Reverse string is "<<ans<<endl;


}