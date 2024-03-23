#include<bits/stdc++.h>
using namespace std; 
vector<bool> Seive(int n)
{
    vector<bool> Seive(n+1,true);
    Seive[0]=Seive[1]=false;
    for(int i=0;i<sqrt(n);i++)
    {
        if(Seive[i])
        {
            int j=i*i;
            while(j<n)
            {
                Seive[j]=false;
                j+=i;
            }
        }
    }
    return Seive;
}

vector<bool> segSeive(int L,int R)
{
    vector<bool> seive=Seive(sqrt(R));

    vector<int> basePrimes;

    for(int i=0;i<seive.size();i++)
    {
        if(seive[i])
        {
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSeive(R-L+1,true);
    //base condition 

    if(L==1 || L==0)
    {
        segSeive[L]=false;
    }


    //step-3 
    for(auto prime:basePrimes)
    {
        int first_mul=(L/prime)*prime;
        if(first_mul <L)
        {
            first_mul+=prime;
        }

        int j=max(first_mul,prime*prime);
        while(j<=R)
        {
            segSeive[j-L]=false;
            j+=prime;
        }
    }
    return segSeive;
}
int main()
{
    int n;
    cout<<"Enter the no "<<endl;
    cin>>n;
    vector<bool>ans=Seive(n);
    cout<<"Answer is "<<endl;
    for(int i=0;i<n;i++)
    {
        if(ans[i])
        {
            cout<<i<<" ";
        }
    }
    cout<<endl<<"Now do for segmented Seive "<<endl;
    cout<<"Enter the lower limit and higher limit "<<endl;
    int L=110,R=130;
    vector<bool> answer=segSeive(L,R);
    for(int i=0;i<answer.size();i++)
    {
        if(answer[i])
        {
            cout<<i+L<<" ";
        }
    }


}