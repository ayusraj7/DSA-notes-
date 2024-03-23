//O(logn) it uses red black trees 
// in this element is not unique // it is mostly used in priority queue 
#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> s)
{
    for(auto value:s)
    {
        cout<<value<<endl;
    }
}
int main()
{
    multiset<string> s;
    s.insert("abc");//O(logn)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    s.insert("abc");
    s.insert("bcd");
    auto it=s.find("abc");//O(logn)
    if(it !=s.end())//O(logn)
    {
        s.erase(it);
    }
    s.erase("bcd");//by this code all the bcd got deleted whether when we use it, it dele tes the first value of it //don't use when you want to delete only element 
    print(s);
    
}