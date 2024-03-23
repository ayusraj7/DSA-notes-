/*
Given N strings and Q queries , 
in each query you are given a string print yes if string is persent 
else print no. 

N <=10^6
|S| <=100
Q <= 10^6
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string> st;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        string s;
        cin>>s;
        st.insert(s);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        if(st.find(s)==st.end())
        {
            cout<<"No "<<endl;
        }else
        {
            cout<<"Yes"<<endl;
        }
    }

}