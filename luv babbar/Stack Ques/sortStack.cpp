#include<bits/stdc++.h>
using namespace std; 
void insertSorted(stack<int> &st,int target)
{
    if(st.empty())
    {
        st.push(target);
        return;
    }
    if(st.top()>=target)
    {
        st.push(target);
        return;
    }
    int element=st.top();
    st.pop();
    insertSorted(st,target);
    st.push(element);
}

void sortStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }

    int element=st.top();
    st.pop();

    sortStack(st);

    insertSorted(st,element);

}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(1);
    st.push(6);
    st.push(7);
    st.push(2);

    sortStack(st);

    while(!st.empty())
    {
       cout<<st.top()<<" ";
       st.pop();
    }
}