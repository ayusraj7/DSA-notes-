#include<bits/stdc++.h>
using namespace std; 
void util(int* p)
{
    p=p+1;
}
void solve(int *a)
{
    *a=*a*10;
}

void solve1(int* &ptr)
{
      ptr=ptr+1;

}
int main()
{
    // int a=5;
    // int *p=&a;
    // int **q=&p;
    // cout<<&a<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;

    int a=5;
    int *p =&a;
    
    cout<<"Before "<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    
    util(p);
    cout<<"After"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    //Reference variable 
    cout<<"Reference Variable "<<endl;
    int x=5;
    int &y=x;
    y++;
    cout<<x<<endl;
    cout<<y<<endl;
    solve(&x);
    cout<<x<<endl;
    int *ptr=&x;
    cout<<"Before solve1()"<<ptr<<endl;
    solve1(ptr);
    cout<<"After solve1()"<<ptr<<endl;

    return 0;
}