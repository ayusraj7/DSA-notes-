// Vector is a dyanmic array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
     cout<<"hello world"<<endl;
     vector<int> v;
     vector<int> a(5,1);// for vector like array in the second parameter it display the same value like 1 1 1 1 1 and first parameter how many element 
     for(int i:a)
     {
         cout<<i<<" ";
     }cout<<endl;
     vector<int> last(a);// to copy a vector 
     cout<<"Print last "<<endl;
     for(int i:last)
     {
         cout<<i<<" ";
     }cout<<endl;
     cout<<"Capacity--> "<<v.capacity()<<endl;
     v.push_back(1);
     cout<<"Capacity-->"<<v.capacity()<<endl;
     v.push_back(2);
     cout<<"Capacity-->"<<v.capacity()<<endl;
     v.push_back(3);
     cout<<"Capacity-->"<<v.capacity()<<endl;// it doubles the its capacity // capacity tell us how much space is there for element 
     cout<<"Size-->"<<v.size()<<endl;// size tells how many elements are there 
     cout<<"Element at 2nd index"<<v.at(2)<<endl;
     cout<<"Front element of vector"<<v.front()<<endl;// it is the first element which is gone in array 
     cout<<"Back element of vector"<<v.back()<<endl;// this is the last element which is gone in array 
     cout<<"Before pop"<<endl;
     for(int i:v)
     {
         cout<<i<<" ";
     }cout<<endl;
     v.pop_back();
     cout<<"After pop"<<endl;
     fflush(stdin);
     for(int i:v)//int i:v used to run the loop till the last element of vector 
     {
         cout<<i<<" ";
     }cout<<endl;
     // to clear the vector 
     cout<<"before clear size "<<v.size()<<endl;
     v.clear();
     cout<<"after clear size "<<v.size()<<endl;
     // iterator like end() or begin()

     return 0;
}