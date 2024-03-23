#include<iostream>//map has two things keys and value and all the keys are unique // they work on tree  
#include<map>
using namespace std;
int main()
{
    map<int, string> m;//declaration of map //in ordered map key output is in sorted way 
    m[1]="abc";// and in map memory allocation takes places randomly anywhere it is linked with each other it's memory location is not like vector 
    m[5]="cdc";//O(logn)
    m[3]="acd";
    m.insert({4,"afg"});
    map<int,string>::iterator it;
    cout<<m.size()<<endl;
    for(auto it=m.begin();it!=m.end();it++)//O(nlogn)
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;//O(logn) in map
    }
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}