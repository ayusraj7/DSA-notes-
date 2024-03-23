#include<bits/stdc++.h>
using namespace std;  
void reachhome(int src,int dest)
{
    cout<<"source"<< src <<"destination "<<dest<<endl;
   if(src==dest)
   {
       cout<<"pahuch gya "<<endl;
       return ;
   }
   //processing ek step aage badh jao 
   src++;

   //recursive call 
   reachhome(src,dest);
}
//2nd ques 
int fibbo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int ans=fibbo(n-1)+fibbo(n-2);
    return ans;
}
// count ways for n Stairs 
 int cstair(int n)
 {
      if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    int ans=cstair(n-1)+cstair(n-2);
    return ans;
 }
 //say digit 
 void saydigit(string arr[],int n)
 {
     if(n==0)
     {
         return ;
     }

     int digit=n%10;
     n=n/10; 
     //recursive call 
     saydigit(arr,n);
      cout<<arr[digit]<<" ";
 }
int main()
{
    int dest=10;
    int src=1;
    cout<<endl;
    reachhome(src,dest);
    //for fibbonacci series 
    int x;
    cout<<"Enter the no for fibbonacci series ";
    cin>>x;
    cout<<fibbo(x);
    //count way for n stairs 
    int n;
    cout<<"enter the no of stairs "<<endl;
    cin>>n;
    cout<<cstair(n);
    //For digits 
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    saydigit(arr,123);

}