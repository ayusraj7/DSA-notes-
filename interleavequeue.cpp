#include<bits/stdc++.h>
using namespace std; 
/*void interleave(queue<int> &q)
{
    stack<int> s;
    int n=q.size()/2;
    for(int i=0;i<n;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
       q.push(s.top());
       s.pop();
    }
    for(int i=0;i<n;i++)
    {
        int num=q.front();
        q.pop();
        q.push(num);
    }
    for(int i=0;i<n;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!q.empty()&&!s.empty())
    {
        int val=q.front();
        q.pop();
        q.push(s.top());
        s.pop();
        q.push(val);
    }
}*/
// by using two queues 
void usequeue(queue<int> &q)
{
    queue<int> q1;
    queue<int> q2;
    int n=q.size()/2;
    for(int i=0;i<n;i++)
    {
        q1.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++)
    {
        q2.push(q.front());
        q.pop();
    }
    while(q.size()!=n*2)
    {
        int num=q1.front();
        q.push(num);
        q1.pop();
        int val=q2.front();
        q.push(val);
        q2.pop();
    }
}
int main()
{
    cout<<"Ayush "<<endl;
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    //interleave(q);
    usequeue(q);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}