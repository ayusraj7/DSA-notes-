#include<bits/stdc++.h>
using namespace std; 
// int factorial(int n)
// {
//     cout<<"Function is called for n:"<<n<<endl;
//     int ans=n*factorial(n-1);
//     return ans;
// }
int factorial(int n)
{
    //base case 
    if(n==1)
    {
        return 1;
    }
    int chotiproblem=factorial(n-1);
    int badiproblem=n*chotiproblem;
    return badiproblem;
}

void printCounting(int n)
{
    //base case 
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";//tail recursion 
    printCounting(n-1);
}
int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"Answer is "<<ans<<endl;
    printCounting(n);
    cout<<endl;
    cout<<"Enter the no for fibonacci series "<<endl;
    int x;
    cin>>x;
    cout<<fib(x)<<endl;
    return 0;
}