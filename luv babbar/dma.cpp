#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int *ptr= new int;
    cout<<ptr<<endl;
    *ptr=5;
    cout<<*ptr<<endl;
    int *arr=new int[5];
    for(int i=0;i<5;i++)
    {
        arr[i]=0;
    }
    cout<<arr[1]<<endl;

    //2d array creation using heap memory 
    int row=5;
    int col=3;

    int **array = new int*[5];

    for(int i=0;i<row;i++)
    {
        array[i]=new int[col];
    }

    //printing 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }

    //de-allocate 
    for(int i=0;i<row;i++)
    {
        delete []array[i];
    }   

    delete []arr;
}
