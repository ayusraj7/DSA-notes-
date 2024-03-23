#include<iostream>
#include<vector>
using namespace std; 
int nearlySortedSearch(vector<int> arr,int target)
{
    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid-1]==target)
        {
            return mid-1;
        }
        if(arr[mid+1]==target)
        {
            return mid+1;
        }
        if(arr[mid]==target)
        {
            return mid;
        }
        if(arr[mid]<target)
        {
            return mid+2;
        }else 
        {
            return mid-2;
        }
    }
    return -1;
}
int divide(int dividend,int divisor)
{
    int s=0;
    int e=abs(dividend-1);
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(abs(mid*divisor)==abs(dividend))
        {
            return mid;
        }
        if(abs(mid*divisor)>abs(dividend))
        {
            e=mid-1;
        }else 
        {
            ans=mid;
            s=mid+1;
        }
    }
    if(divisor<0 && dividend<0 || divisor>0 && dividend>0)
    return ans;
    else 
    return -ans;
}
int oddOccurence(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    
    while(s<=e)
    {
         int mid=s+(e-s)/2;
        if(s==e)
        {
            return s;
        }
        if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
            {
                s=mid+2;
            }
            else 
            {
                e=mid;
            }
        }else 
        {
            if(arr[mid-1]==arr[mid])
            {
                s=mid+1;
            }else 
            {
                e=mid-1;
            }
        }
        
    }
    return -1;
    
}
int main()
{
    //nearly sorted array 
    vector<int>v={10,3,40,20,50,80,70};
    int target=40;
    cout<<"Index Of nearly sorted array "<<nearlySortedSearch(v,target)<<endl;
    //divide two numbers 
    int dividend=27;
    int divisor=4;
    cout<<"Quotient of Dividend is "<<divide(dividend,divisor)<<endl;
    int ans=divide(dividend,divisor);
    double finalans=ans;
    double step=0.1;
    int precision=3;
    for(int i=0;i<precision;i++)
    {
    for(double j=finalans;j*divisor<=dividend;j=j+step)
    {
        finalans=j;
    }
    step=step/10;
    }
    cout<<"precised answer is "<<finalans<<endl;

    //Odd occuring element in an array 
    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    cout<<"Ans is "<<oddOccurence(arr);
}