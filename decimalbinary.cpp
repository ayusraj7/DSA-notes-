#include<iostream>
#include<math.h>
using namespace std;
int power(int n, int m)
{
    if(m==0)
    {
        return 1;
    }
    else 
    {
        int pro=1; 
        for(int i=1;i<=m;i++)
        {
            pro=10*pro;
        }
        return pro;
    }
}
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit= n & 1;
        ans=(bit * power(10,i)) +ans;
        n=n >> 1;
        i++;
    }
    cout<<"Answer is "<<ans<<endl;
}