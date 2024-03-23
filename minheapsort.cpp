#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> mini;
    int n;
    cin>>n;
   while(n--)
   {
       int x;
       cin>>x;
       mini.push(x);
   }
   int m=mini.size();
   for(int i=0;i<m;i++)
   {
       cout<<mini.top()<<" ";
       mini.pop();
   }cout<<endl;
}