// In set all the elements are unique like if we put 5 time 3 then it has only one three 
// you cannot modify it after insertion you can only delete it or insert in it output came in a sorted way 
// erase(),find(),count(),insert() they all have time complexity O(log n) here 
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);// time complexity of insert() is O(log n)
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(1);
    
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;
    set<int>::iterator it=s.begin();//we can also use iterator it will point to next value of begin() becuase of it++ and we can also do simply also 
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"5 is present or not "<<s.count(5)<<endl;// it checks whether the no 5 is there or not 

    set<int>::iterator itr=s.find(5);//it returns the iterator from value of 5 
    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
}