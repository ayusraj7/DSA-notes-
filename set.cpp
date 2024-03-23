//sets// in sets only value is present not key and it's complexity is O(logn)
// Internal implementation of sets is by the red black trees 
//set print in sorted order 
#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    for(string value:s)
    {
        cout<<value<<endl;
    }
    /*for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<endl;
    }
    */

}

int main()
{
    cout<<"Maps"<<endl;
    set<string> s;
    s.insert("abc");//log(n)
    s.insert("zsdf");
    s.insert("bcd");
    auto it= s.find("abc");//O(logn)
    if(it!=s.end())
    {
        cout<<(*it)<<endl;
        s.erase(it);// erase can directly take value also 
    }cout<<endl;
    print(s);

}