// recursion 
#include<bits/stdc++.h>
using namespace std;
 int fact(int n)
 {
     if(n==0)
     {
         return 1;
     }
     return n*fact(n-1);
 }
 int power(int n,int m)
 {
     if(m==0)
     {
         return 1;
     }
     return n*power(n,m-1);
 }
 void print(int n)
 {
     if(n==0)
     {
        return ;
     }
     cout<<n<<endl;
     print(n-1);//tail recursion 
 }
 void print2(int n)
 {
     if(n==0)
     {
         return ;
     }
     print2(n-1);//head recursion 
     cout<<n<<endl;
 }
 int main()
 {
     int n;
     cout<<"Enter the no "<<endl;
     cin>>n;
     cout<<"Factorial "<<fact(n);
     cout<<endl;
     cout<<"Power of no "<<endl;
     int x,y;
     cout<<"Enter the no whose power you want and upto which places you want "<<endl;
     cin>>x>>y;
     cout<<"Power :"<<power(x,y)<<endl;
     cout<<"Print the values "<<endl;
     print(n);
     cout<<"Print the values by head recursion"<<endl;
     print2(6);
     return 0;
 }