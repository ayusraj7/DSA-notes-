#include<bits/stdc++.h>
using namespace std; 
int solve(int target,int x,int y,int z)
{
    if(target==0)
    {
        return 0;
    }
    if(target<0)
    {
        return INT_MIN;
    }
    int ans1=solve(target-x,x,y,z)+1;
    int ans2=solve(target-y,x,y,z)+1;
    int ans3=solve(target-z,x,y,z)+1;
    int maxi=INT_MIN;
    maxi=max(ans1,max(ans2,ans3));
    return maxi;
}
void sum(vector<int> &v,int &maxi,int output,int i)
{
    if(i>=v.size())
    {
        maxi=max(maxi,output);
        return;
    }

    //include 
    sum(v,maxi,output+v[i],i+2);

    //exclude 
    sum(v,maxi,output,i+1);
}
int main()
{
    int target=5;
    int x=3,y=2,z=2;
    int ans=solve(target,x,y,z);
    if(ans<0)
    {
        ans=0;
    }
    cout<<"Maximum no of rod is "<<ans<<endl;


    //maximum sum of adjacent elements 
    vector<int> v{9,5,8,8,2};
    int maxi=INT_MIN;
    sum(v,maxi,0,0);
    cout<<"Maximum of adjacent element is "<<maxi<<endl;


}