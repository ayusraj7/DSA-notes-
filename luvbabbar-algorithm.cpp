#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<"Finding 6 :"<<binary_search(v.begin(),v.end(),6)<<endl;//answer one means it is true 
   // cout<<"lower bound "<<lower_bound(v.begin(),v.end(),6)<<endl;
   // cout<<"upper bound  "<<upper_bound(v.begin(),v.end(),6)<<endl;   
    int a=3;
    int b=5;
    cout<<"Maximum no b/w a and b"<<max(a,b);
    cout<<"Minimum no b/w a and b"<<min(a,b);
    swap(a,b);// we can use swap() in containers 
    cout<<endl<<"a-->"<<a<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());// it didn't work with cout statement what i have tried till now that i can tell 
    cout<<"String:"<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    sort(v.begin(),v.end());//it is made up of intro sort which is a combination of three sorts insertion,quick sort,deep sort 
    for(int i:v)
    {
        cout<<i<<" ";
    } 
    return 0;
}