#include<bits/stdc++.h>
using namespace std; 
int fibo(int n,vector<int> &dp)
{
    int prev1=0;
    int prev2=1;
    int curr=0;
    for(int i=2;i<=n;i++)
    {
        curr=prev1+prev2;
        prev1=prev2;
        prev2=curr;
    }
    return prev2;
}

int coinchange(int amount,vector<int> coins)
{
    vector<int> dp(amount+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=amount;i++)
    {
        int mini=INT_MAX;
        for(int j=0;j<coins.size();j++)
        {
            if(i-coins[j]>=0)   
            {
                int ans=dp[i-coins[j]];
                if(ans!=INT_MAX)
                {
                    mini=min(mini,ans+1);
                }
            }
        }
        dp[i]=mini;
    }
    cout<<dp[2]<<endl;
    return dp[amount];
}
int robhouse(int n,vector<int> &rob)
{
    if(n==0)
    {
        return rob[0];
    }
    if(n<0)
    {
        return 0;
    }
    int exclude=rob[n]+robhouse(n-2,rob);
    int include=0+robhouse(n-1,rob);
    return max(include,exclude);
    
}


int main()
{
    int n;
    cout<<"Enter the upto which no you want fibonacci number "<<endl;
    cin>>n;
    vector<int> v(n+1,INT_MAX);
    cout<<"Fibonacci no for this is "<<fibo(n,v)<<endl;
    vector<int> coins={1,2,5};
    int amount=3;
   
    cout<<"Minium no of coins is "<<coinchange(amount,coins)<<endl;
    vector<int> rob={5,4,13,2,9};
    vector<int> dp(rob.size(),)
    cout<<"maximum amount "<<robhouse(rob.size()-1,rob)<<endl;

}