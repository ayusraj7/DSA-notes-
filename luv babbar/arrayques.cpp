#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    //swap function using xor 
    int x=5;
    int y=6;
    x=x^y;
    y=x^y;
    x=x^y;
    cout<<"Now the Swapped Values will be:"<<x<<" "<<y<<endl;
    //extreme print 
    int arr[7]={3,5,1,11,9,4,0};
    int start=0;
    int end=6;
    while(start<=end)
    {
        if(start==end)
        {
            cout<<arr[start];
        }else 
        {
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }cout<<endl;
    sort(arr,arr+7);
    for(int i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;
}