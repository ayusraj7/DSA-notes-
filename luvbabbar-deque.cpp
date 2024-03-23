// doubly ended queue or deck or dequeue in this we can do insertion and deletion from front or  from end it's our choice 
// it is dynamic and there are several static array are also there 
// random access is possible 
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Element at first index "<<d.at(0)<<endl;// in vector index start with 0 
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    /*
    d.pop_back();
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    */
    //if we do pop_front() then it will pop the first value  we went in vector or we pushed in first or we easily understand like if 
    // front is there then front get popped and if back is there then back value get popped 
     d.pop_front();
     for(int i:d)
     {
         cout<<i<<" ";
     }cout<<endl;
     cout<<"Empty or not "<<d.empty()<<endl;
     cout<<"Before erase "<<d.size()<<endl;
     d.erase(d.begin(),d.begin()+1);// time complexity is O(n)
     cout<<"After erase "<<d.size()<<endl;// in this size of maxsize() doesn't change size() means no of elements 
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}