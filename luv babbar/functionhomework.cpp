#include<bits/stdc++.h>
using namespace std;
int pi=3.14;
int areaCircle(int r)
{
  return 3.14*r*r;
}
void evenOdd(int n)
{
    // if(n%2==0)
    // {
    //     cout<<"Even number "<<endl;
    // }else 
    // {
    //     cout<<"Odd number "<<endl;
    // }
    // we can do this by bitwise operator also 
    if((n&1)==0)
    {
        cout<<"Even number"<<endl;
    }else 
    {
        cout<<"Odd Number"<<endl;
    }
}
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
bool isPrime(int n){
    if(n==1)
    {
        return true;
    }
    //for reducing time complexity 
    // for(int i=2;i<=sqrt(n);i++)
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            return false;
            break; 
        }
    }
    return true;
}
void printdigits(int n)
{
    while(n!=0){
        int digit=n%10;
        cout<<digit<<" ";
        n=n/10;
    }
}
int nodigits(int arr[],int size){
    int no=0;
    for(int i=0;i<size;i++)
    {
          no=no*10+arr[i];
    }
    return no;
}
int setBits(int n)
{
    int count=0;
    while(n!=0)
    {
    if((n&1)==1)
    {
        count++;
    }
    n=n>>1;
    }
    return count;

}
float kmMiles(int n)
{
    return n/1.6;
}
int main()
{
  cout<<"Enter the radius of circle "<<endl;
  int r;
  cin>>r;
  cout<<"Area of circle "<<areaCircle(r)<<endl;
  int x;
  cout<<"Enter the no "<<endl;
  cin>>x;
  evenOdd(x);
  cout<<"Enter the no for factorial "<<endl;
  int n;
  cin>>n;
  cout<<"Factorial of no:"<<factorial(n)<<endl;
  cout<<"Enter the no to check prime or not "<<endl;
  int a;
  cin>>a;
  if(isPrime(a))
  {
      cout<<"Prime number "<<endl;
  }else 
  {
      cout<<"Not a Prime number "<<endl;
  }
  cout<<"Enter the numbers to get the prime numbers "<<endl;
  int b,c;
  cin>>b>>c;
  cout<<"Prime numbers are "<<endl;
  for(int i=b;i<=c;i++)
  {
      if(isPrime(i))
      {
          cout<<i<<" ";
      }
  }
  cout<<"Print digit of a number "<<endl;
  printdigits(623);
  cout<<"Create a no from digits "<<endl;
  int arr[4]={6,1,2,5};
  cout<<nodigits(arr,4);
  cout<<"find no of set bits enter the no "<<endl;
  int y;
  cin>>y;
  cout<<"No of set bits in number is: "<<setBits(y);
  cout<<"km to miles "<<kmMiles(4);
}