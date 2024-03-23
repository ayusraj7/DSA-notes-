#include<bits/stdc++.h>
using namespace std;
int secondlarge(int arr[],int n)
{
    int largest=0;
    int secondlargest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
 
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=largest)
        {
            if(arr[i]>secondlargest)
            {
                secondlargest=arr[i];
            }
        }
    }
    return secondlargest;
}
int majority(int arr[],int n)
{
    
   for(int i=0;i<n-1;i++)
   {
       int count=1;
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               count++;
           }
       }
       if(count>n/2)
       {
           return count;
       }
   }
}
// roatate by one 
void rotate(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    
}
int main()
{
    cout<<"Ayush "<<endl;
    int n=6;
    int arr[n]={1,6,2,9,4,3};
    cout<<secondlarge(arr,n);
    int arr1[7]={1,3,3,5,2,3,3};
    cout<<endl;
    cout<<majority(arr1,7)<<endl;
    rotate(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
