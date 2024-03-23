#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,4,5,6};
    for(int value:v)// it works for all the containers in c++ //it is range based loop
    {
        cout<<value<<" ";
    }cout<<endl;
    for(int &value:v)// by passing the & operator it passes the real value of v not a copy 
    {
        value++;
    }
    for(int value:v)
    {
        cout<<value<<" ";
    }cout<<endl;
    vector<pair<int,int>> vp={{1,2},{2,3},{3,4}};
    for(pair<int,int> &value :vp)// for pair 
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    auto a=1;//auto datatype determine the datatype of a what type it is 
    cout<<a<<endl;
    for(auto &value:vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

}