#include<bits/stdc++.h>
using namespace std;
void printvec(map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr:m)//O(logn)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<int,string> m;
    m[1]="abc"; //O(logn)
    m[2]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
   // m["abcd"]="abcd";//O(log(n)) if we do insertion like this then it the complexity will be O(s.size()*log(n)) because when we will put string then the existing string will be 
   // again compared by other string in lexiographical order and it will affect the time 
    printvec(m);
    auto it=m.find(3);// if no value is there in map like 3 then it will return to next iterator of m.end() and if 3 is present then it will return the
    // iterator at pos of 3 and O(log n)
    if(it==m.end())
    {
        cout<<"No value"<<endl;
    }else 
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    m.erase(3);//O(log(n))// we cannot give the iterator who doesn't exist 
    printvec(m);
    m.clear();
    printvec(m);
}