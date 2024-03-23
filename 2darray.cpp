#include<bits/stdc++.h>
using namespace std; 
bool istarget(int arr[][4],int target,int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}
void printsum(int arr[][4],int row, int col)
{
    cout<<"Printing Sum -> "<<endl;
    for(int i=0;i<row;i++)
    {
        int sum=0;
         for(int j=0;j<col;j++)
         {
             sum+=arr[i][j]; 
         }
         cout<<sum<<endl;
        
    }
}  
int largestrowsum(int arr[][4],int row, int col)
{
    int maxi=INT_MIN;
    int row_no;
    for(int i=0;i<row;i++)
    {
        int sum=0;
         for(int j=0;j<col;j++)
         {
             sum+=arr[i][j]; 
         }  
         if(sum>maxi)
         {
             maxi=sum;
             row_no=i;
         }
    }
    cout<<"The row no is "<<row_no<<endl;
    return maxi;
}
int main()
{
   
    int arr[3][4];
    cout<<"Enter the element of array "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Array is "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    int target;
    cout<<"Enter the target "<<endl;
    cin>>target;
    if(istarget(arr,target,3,4))
    {
        cout<<"Target is found "<<endl;
    }else 
    {
        cout<<"Target is not found "<<endl;
    } 
    cout<<endl;
    printsum(arr,3,4);
    cout<<largestrowsum(arr,3,4)<<endl;

}
