#include<bits/stdc++.h>
using namespace std; 
int getithBit(int n, int i)
{
    int mask=1<<i;
    int ans=n & mask;
    if(ans==0)
    {
        return 0;
    }else 
    {
        return 1;
    }
}

int setithBit(int n,int i)
{

    int mask=1<<i;
    
    int ans=n | mask;
    return ans;
}

int clearithBit(int &n,int i)
{
    int mask=1<<i;
    mask= ~mask;
    int ans=n&mask;
    return ans;
}

int updateithBit(int n,int i,int target)
{
    n=clearithBit(n,i);
    int mask=target << i;
    n= n|mask;
    cout<<"After updating "<<n<<endl;
    return n;
}

int clearLastBits(int n,int i)
{
    int mask=(-1<<i);
    cout<<"mask"<<mask<<endl;
    int ans=n&mask;
    return ans;
}
bool checkPowerOf2(int n)
{
    int ans=(n & (n-1));
    if(ans==0)
    {
        return true;
    }else 
    {
        return false;
    }
}
int setBitCount(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
int setBitCountFast(int n)
{
    int count=0;
    while(n!=0)
    {
        n=(n & (n-1));
        count++;
    }
    return count;
}

int clearBitInRange(int n,int i,int j)
{
    int mask1=(-1<<(i+1));
    int mask2=~(-1<<j);
    int mask=mask1 | mask2;
    int ans=n&mask;
    return ans;
}

int main()
{
   int ans=getithBit(8,2);
   cout<<ans<<endl;
   int setBit=setithBit(8,2);
   cout<<setBit<<" "<<endl;
   int n=10;
   int clearBit=clearithBit(n,1);
   cout<<clearBit<<" "<<endl;
   int updateBit=updateithBit(8,0,1);
   int clrlstBits=clearLastBits(15,2); 
   cout<<"After clearing the last bits "<<clrlstBits<<endl;
  
   cout<<"No of Set bits are "<<setBitCount(15)<<endl;

   cout<<"Power of 2 ans:"<<checkPowerOf2(15)<<endl;

   cout<<"After clearing bits in range "<<clearBitInRange(63,4,2);
    

}