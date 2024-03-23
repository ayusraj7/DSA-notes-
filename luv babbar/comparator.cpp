#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std; 
bool cmp(char first,char second)
{
    return first>second;
    //return first<second;//here first<second means first is smaller then second then return true and put first first 
}
bool compare(int a,int b)
{
    // cout<<"First number is :"<<a;
    // cout<<"Second number is:"<<b <<endl <<endl;
    return a>b;
}
int main(){

    
    string s="babbar";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    //apna custom comparator 
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
    cout<<endl<<endl;
    string str="Help Ramu Coding Question ";
    sort(str.begin(),str.end(),cmp);
    cout<<str<<endl;
    cout<<endl;

    vector<int> v{5,3,1,2,4};
    //sort in descending order 
    sort(v.begin(),v.end(),compare);
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    map<int,char> meraMap;
    meraMap[0]='a';
    meraMap[1]='b';
    meraMap[2]='c';
    cout<<"your answer is "<<meraMap[2]<<endl;

    for(auto i:v)
    {
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}