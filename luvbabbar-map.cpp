// map : it runs along with a key and every key has unique value 
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="babbar";
    m[13]="kumar";
    m[2]="love";
    m.insert({5,"bheem"});
    cout<<"Before erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13:"<<m.count(13)<<endl;
    m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(5);
    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
    return 0;
}