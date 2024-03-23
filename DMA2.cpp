//creating 2d array using heap memory 
#include<bits/stdc++.h>  
using namespace std;
int main()
{
 
    int rows;
    cout<<"Enter the no of rows "<<endl;
    cin>>rows;

    int col;
    cout<<"Enter the no of columns "<<endl;
    cin>>col;

    // int *ptr=new int[m][n];//this will not happen because of bad practice that it will crash
     int **arr=new int*[rows];
     
     for(int i=0;i<rows;i++)
     {
         arr[i]=new int[col];
     }
     //taking input 
     for(int i=0;i<rows;i++)
     {
         for(int j=0;j<col;j++)
         {
             cin>>arr[i][j];
         }
     }cout<<endl;
     //taking output 
     for(int i=0;i<rows;i++)
     {
         for(int j=0;j<col;j++)
         {
             cout<<arr[i][j]<<" ";
         }cout<<endl;
     }cout<<endl;
     //releasing memory 
     for(int i=0;i<=rows;i++)
     {
         delete[] arr[];
     }
     delete []arr;
}