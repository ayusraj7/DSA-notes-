#include<bits/stdc++.h>// Balanced parenthesis 
using namespace std;
unordered_map<char,int> symbols ={{'[',-1},{'{',-2},{'(',-3},{'}}
string isBalanced(string s)
{
    stack<char> st;
    
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       cout<<isBalanced(s)<<endl;
   }
}