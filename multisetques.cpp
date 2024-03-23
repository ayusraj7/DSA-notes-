//multiset vs set // monk question of hackerrank 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    // we cannot use unorederd sets in it because we need the sorted no of candies which has more no of candies 
    // we also can't use set because if some has same no of candies then set will take both as one so we use mutliset here 
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<long long > bags;
        for(int i=0;i<n;i++)
        {
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies =0;
        for(int i=0;i<k;i++)
        {
            auto it=(--bags.end());
            long long candy_ct=*it;
            total_candies +=candy_ct;
            bags.erase(it);// when we provide iterator then it's complexity is O(1)
            bags.insert(candy_ct/2);

        }
        cout<<total_candies<<endl;
    }
    
}