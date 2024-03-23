#include<bits/stdc++.h>
using namespace std; 
void solve(int *p)
{
    *p=*p+10;
}
void update(int *a,int *b)
{
    *a=100;
    *b=200;
}
int main()
{
    int a=5;
    int *ptr=&a;
    solve(ptr);
    cout<<a<<endl;
    int arr[4]={10,20,30,40};
    int *p=&arr[1];
    int *q=&arr[2];
    update(p,q);
    for(auto i:arr)
    {
        cout<<i<<" ";        
    }
}