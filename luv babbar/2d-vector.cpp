#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int row=3;
    int col=5;
    vector<vector<int>>arr(row,vector<int>(col,0));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    vector<vector<int>>brr(5,vector<int>(5,-8));
    for(int i=0;i<brr.size();i++)
    {
        for(int j=0;j<brr[i].size();j++)
        {
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }
    cout<<arr[2][3]<<endl;
    cin>>arr[3][4];
    
}