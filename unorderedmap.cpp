// unordered map // unordered map uses the hashing technique and its complexity is O(1) and all implementation here are O(1)
// it just don't saw the output in ordered sequence becuase it uses the hash table 
#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    // 1. inbuilt implementation 
    // 2. Time complexity 
    // 3. valid keys datatype
    unordered_map<int,string> m;
    m[1]="abc";//O(1)
    m[5]="cdc";
    m[3]="acd";
    m[6]="a";
    m[5]="cde";
    auto it=m.find(7);//O(1)
    if(it!=m.end())
    {
        m.erase(it); //O(1)
    }
    print(m);
//  unordered_map<pair<int,int>, string > m;// it will give error for complex things because for complex data structure like pair,map,set it don't have 
//inbuild hash table 

}