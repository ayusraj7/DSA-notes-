#include<iostream>
using namespace std;
int getsum(int *arr,int n)
{
  int sum;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  return sum;
}
int main()
{
    int n;
    cin>>n;
    //variable size array 
    int *arr=new int[n];

    //taking input in array 
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int ans=getsum(arr,n);
    cout<<"answer is "<<ans<<endl;
    /*
    while(1)//bohot bhaynak in dynamic //here the stack value of pointer got released but new int heap memory will not get released and in this memory gets full and program crashes . in this we have to free memory manually 
    {
      int *ptr=new int;
    }
    while(1)//in stack memory get released after one iteration in this memory get automatically released. 
    {
      int *ptr=&arr;
    }
    */
   // memory get released by using delete keyword 
   delete[]arr;

}