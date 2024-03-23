#include<bits/stdc++.h>
using namespace std; 
//coin change problem 
int solve(vector<int> v,int target)
{
    if(target==0)
    {
       return 0;
    }
    if(target <0)
    {
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        int ans=solve(v,target-v[i]);
        if(ans!=INT_MAX)
        {
           mini=min(mini,ans+1); 
        }
    }
    return mini;
}
int solve1(vector<int> v,int sum,int target)
{
    if(sum==target)
    {
        return 0;
    }
    if(sum>target)
    {
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
       int ans=solve1(v,sum+v[i],target);
       if(ans!=INT_MAX)
       {
           mini=min(mini,ans+1);
       }
    }
    return mini;
}
int main()
{
    vector<int> v{3,5,1,2,6};
    int target=11;
    cout<<"minimum no of coins required is "<<solve(v,target)<<endl;
    cout<<"minimum no of coins required is "<<solve1(v,0,target)<<endl;
}