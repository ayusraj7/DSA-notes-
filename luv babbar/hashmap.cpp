#include<bits/stdc++.h>
using namespace std; 
int main()
{

    //creation 
    unordered_map<string,int> m;

    //insertion 
    pair<string,int> p=make_pair("Scorpio",9);
    m.insert(p);

    pair<string,int> p2("alto",2);
    m.insert(p2);

    m["fortuner"]=10;
    m["fortuner"]=12;
    //access 
    cout<<m.at("alto")<<endl;
    cout<<m.at("Scorpio")<<endl;
    cout<<m["fortuner"]<<endl;

    //search 
    cout<<m.count("Innova")<<endl;
    if(m.find("fortuner") != m.end())
    {
        cout<<"Fortuner Found "<<endl;
    }else 
    {
        cout<<"Fortuner not found "<<endl;
    }
    cout<<"Size of map "<<m.size()<<endl;
    cout<<m["hummer"]<<endl;
    cout<<m.size()<<endl;

    cout<<"Printing all entries "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" -> " <<i.second<<endl;
    }
    return 0;
}