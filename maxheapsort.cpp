#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> p;
    int n;
    cout<<"No of elements "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.push(x);
    }
    int m=p.size();
    for(int i=0;i<m;i++)
    {
        cout<<p.top()<<" ";
        p.pop();
    }
}