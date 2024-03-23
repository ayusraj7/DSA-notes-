#include<bits/stdc++.h>
using namespace std; 
void printRowWiseSum(int arr[][3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<cols;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void columnWiseSum(int arr[][3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<cols;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}
bool findkey(int arr[][3],int rows, int cols , int key)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]==key)
            {
                return true;
            }
        }
    }
    return false;
}
int getMax(int arr[][3],int rows,int cols)
{
    int maxi=INT_MIN;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           if(maxi<arr[i][j])
           {
               maxi=arr[i][j];
           }
        }
       
    }
     return maxi;
}
int getMin(int arr[][3],int rows,int cols)
{
    int mini=INT_MAX;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           if(mini>arr[i][j])
           {
               mini=arr[i][j];
           }
        }
       
    }
     return mini;
}
void transpose(int arr[][3],int rows,int cols,int transposearr[][3])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            transposearr[j][i]=arr[i][j];
        }
    }
}
void print(int arr[][3],int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}
int main()
{
    // sum print 
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
     cout<<"Output array "<<endl;
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             cout<<arr[i][j]<<" ";
         }cout<<endl;
     }
     printRowWiseSum(arr,3,3);
     columnWiseSum(arr,3,3);
     cout<<endl;
     //key is present or not 
     int key;
     cout<<"enter the key "<<endl;
     cin>>key;
     cout<<findkey(arr,3,3,key);
    

    //maximum present or not 
    cout<<endl<<"Enter the maximum and minimum in 2-d Array "<<endl;
    cout<<getMax(arr,3,3)<<" "<<getMin(arr,3,3)<<endl;

    //transpose a matrix 
    int transposearr[3][3];
    transpose(arr,3,3,transposearr);
    print(transposearr,3,3);

}