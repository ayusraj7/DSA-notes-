#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v[n];//array of vector 
    for(int i=0;i<n;i++)// it behaves like a 2d array but rows are fixed and coloumns are not fixed 
    {
        int x;
        cin>>x;
        for(int j=0;j<x;j++)
        {
            int y;
            cin>>y;
            v[i].push_back(y);
        }
    }
    for(int i=0;i<n;i++)
    {
        printvec(v[i]);
    }
    cout<<v[0][0];

}