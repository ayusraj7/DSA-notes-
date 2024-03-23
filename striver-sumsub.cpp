#include<bits/stdc++.h>
using namespace std;
bool flag=false;
void sumsub(int arr[],int n,int ind,vector<int> &ds, int s, int sum)
{   
    if(ind==n)
    {
        if(s==sum && flag==false)
        { 
            flag=true;
            for(auto i:ds)
            {
                cout<<i<<" ";
            }cout<<endl;
        }
        return;
    }
    
    ds.push_back(arr[ind]);
    s+=arr[ind];
    sumsub(arr,n,ind+1,ds,s,sum);
    s-=arr[ind];
    ds.pop_back();

    // not take 
    sumsub(arr,n,ind+1,ds,s,sum);
}
bool onlyonesub(int ind,vector<int> ds,int s, int sum,int arr[], int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            for(auto it:ds) 
            cout<<it<<" ";
            cout<<endl;
            return true;
        }
        //condition not satisfied 
        else return false;
    }
        //take 
        ds.push_back(arr[ind]);
        s += arr[ind];
        if(onlyonesub(ind+1,ds,s,sum,arr,n) == true){
            return true;
        }
        s -=arr[ind];
        ds.pop_back();
        //not pick 
        if(onlyonesub(ind+1,ds,s,sum,arr,n) == true) return true;
        return false;
}
 
 // count the subsequence with sum=k 
 int countsub(int ind,int s, int sum,int arr[], int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            return 1;
        }
        //condition not satisfied 
        else return 0;
    }
        //take 
       
        s += arr[ind];
        int l=countsub(ind+1,s,sum,arr,n);
           
        s -=arr[ind];
        
        //not pick 
       int r=countsub(ind+1,s,sum,arr,n);
       return l+r;
}
 
int main()
{
    int arr[]={1,2,1};
    int n=3;
    vector<int> ds;
    int sum=2;
    sumsub(arr,n,0,ds,0,sum);

    cout<<endl;
    onlyonesub(0,ds,0,2,arr,n);
    cout<<"count"<<endl;
    cout<<countsub(0,0,2,arr,n);
}