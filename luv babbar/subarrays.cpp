#include<bits/stdc++.h>
using namespace std; 
void printarrays(vector<int> v,int start,int end)
{
    if(end==v.size())
    {
        return;
    }
    for(int i=start;i<=end;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    printarrays(v,start,end+1);
}
void printSubarray(vector<int> v)
{
    for(int i=0;i<v.size();i++){
        int end=i;
        printarrays(v,i,end);
    }cout<<endl;
}
int main()
{
    vector<int> v{1,2,3,4,5};
    printSubarray(v);
}