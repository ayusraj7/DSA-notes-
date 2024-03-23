#include<bits/stdc++.h>
using namespace std; 
int main()
{
    //declare 2D array 
    int arr[3][3];
    //initialisation 
    int brr[3][3]={
    {1,2,3},
    {4,5,6},
    {2,4,8}};
    
    //input and output
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }
    //column-wise output 
    cout<<"Column wise "<<endl;
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }

    //memset function 
    int array[5]={15,1,0,6,9};
    memset(array,-1,sizeof(array));
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
}