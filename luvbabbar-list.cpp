// list : all the function used have time complexity O(1) rather than erase function  
// we cannot directly access like vector or deque 
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);//using this the stack changes like when we do pushback then the first value is 1 but in it first value is 2 because it is getting add in front 
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of list "<<l.size()<<endl;
    list<int> v(5,100);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}