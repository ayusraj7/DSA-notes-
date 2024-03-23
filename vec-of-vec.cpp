#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
          cout<<v[i]<<" ";
    }cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int> > v;// in this we don't declare n as a size 
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector<int> temp;
        for(int i=0;i<x;i++)
        {
            int y;
            cin>>y;
            temp.push_back(y);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        printvec(v[i]);
    }
    
}