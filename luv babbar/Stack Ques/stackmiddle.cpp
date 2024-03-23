#include<bits/stdc++.h>
using namespace std; 

void printMiddle(stack<int> s,int mid)
{
    if(s.size()==mid)
    {
        cout<<s.top()<<endl;
        return;
    }

    int element=s.top();
    s.pop();

    printMiddle(s,mid);

    s.push(element);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(50);
    s.push(40);
    s.push(60);

    int size=s.size();
    int mid=0;
    if(size%2==0)
    {
         mid=size/2;
    }else 
    {
         mid=size/2 + 1;
    }

    printMiddle(s,mid);



}