#include<bits/stdc++.h>
using namespace std; 
void reverse(queue<int> &q)
{
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();

    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}
void reverseRecursively(queue<int> &q)
{
    if(q.empty())
    {
        return;
    }
    int element=q.front();
    q.pop();
    reverseRecursively(q);
    q.push(element);
}


//Reverse first K elements of Queue 
void reverseKelements(queue<int> &q,int k)
{
    if(k==0 || k>q.size())
    {
        return ;
    }
    int i=0;
    int n=q.size();
    stack<int> s;
    while(i<k)
    {
        s.push(q.front());
        q.pop();
        i++;
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    i=0;
    while(i<n-k && !q.empty()){
        int element=q.front();
        q.pop();
        q.push(element);
        i++;
    }
    
}

queue<int>interleave(queue<int> q)
{
    int n=q.size();
    queue<int> q1;
    queue<int> q2;
    queue<int> ans;
    int i=0;
    while(i<n/2)
    {
        q1.push(q.front());
        q.pop();
        i++;
    }
    while(i<n)
    {
        q2.push(q.front());
        q.pop();
        i++;
    }

   

    while(!q1.empty() && !q2.empty())
    {
        ans.push(q1.front());
        q1.pop();
        ans.push(q2.front());
        q2.pop();
    }

    if(!q2.empty())
    {
        ans.push(q2.front());
        q2.pop();
    }
    
    return ans;
}


void interleaving(queue<int> &q)
{
    queue<int> q2;
    int n=q.size();
    int i=0;
    while(i<n/2){
        q2.push(q.front());
        q.pop();
        i++;
    }
    
    while(!q2.empty() && !q.empty())
    {
        q.push(q2.front());
        q2.pop();
        int element=q.front();
        q.pop();
        q.push(element);
    }
   
    if(n&1)
    {
        int element=q.front();
        q.pop();
        q.push(element);
    }

    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
}   

void print(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(15);
    q.push(30);
    q.push(45);
    //reverse the queue 
    //reverse(q);
    reverseRecursively(q);
    print(q);


    cout<<"Reverse first K elments in a queue "<<endl;
    reverseKelements(q,5);
    print(q);
    
    cout<<endl;
    cout<<"Interleaving the queue "<<endl;
    queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.push(60);
    que.push(70);
    // que.push(80);




    interleaving(que);
    print(que);
   


    // queue<int> ans=interleave(que);
    // cout<<"interleaving "<<endl;
    // while(!ans.empty())
    // {
    //     cout<<ans.front()<<" ";
    //     ans.pop();
    // }



}