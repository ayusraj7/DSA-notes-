#include<iostream>
using namespace std; 
int add(int a, int b)
{
  return a+b;  
}
void printcount(int n)
{
   for(int i=1;i<=n;i++)
   {
       cout<<i<<" ";
   }
   cout<<endl;
}
char grade(int marks)
{
    switch(marks/10)
    {
        case 10:
        case 9: return'A';break;
        case 8:return 'B';break;
        case 7:return 'C';break;
        case 6:return 'D';break;
        default:return 'B';break;
    }
}
int sumnumber(int n)
{
     int sum=0;
    for(int i=1;i<=n;i++)
    {
       
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int findmax(int num1,int num2,int num3)
{
    if(num1>num2 && num1>num3)
    {
        return num1;
    }else if(num2>num1 && num2>num3)
    {
        return num2;
    }else {
        return num3;
    }
}
void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}
int getEvenSum(int n)
{
    int sum=0;
    for(int i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
  int a=5;
  int b=6;
  cout<<add(a,b)<<endl;
  //or 
  int sum=add(a,b);
  cout<<sum<<endl;
  printcount(4);
  cout<<grade(100)<<endl;
  cout<<sumnumber(6)<<endl;
  cout<<"Find three maximum number ";
  int x,y,z;
  cin>>x>>y>>z;
  int maxnumber=findmax(x,y,z);
  cout<<maxnumber<<endl;
  print(5);
  cout<<"Get even sum "<<endl;
  cout<<getEvenSum(10);
}