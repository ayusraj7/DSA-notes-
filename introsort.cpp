//introsort=Insertion sort+Heap sort + Quick sort 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin()+2,a.end());O(nlogn)
    for(int i:a)
    {
      cout<<i<<" ";
    }
}