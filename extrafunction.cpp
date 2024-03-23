#include<iostream>
#include<vector> 
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<5;i++)
    {
       int x;
       cin>>x;
       v.push_back(x);
    }
    cout<<"Max_size"<<v.size()<<endl;
    // Resize the vector size to 4 
    v.resize(4);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Empty or not "<<v.empty()<<endl;
    v.shrink_to_fit();
    cout<<"Vector elements are "<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
}