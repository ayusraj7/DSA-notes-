#include<iostream>
#include<stack>
using namespace std;
int main()
{
  string str="ayush";
  stack<char> s;
  for(int i=0;i<str.length();i++)
  {
    char ch=str[i];
    s.push(ch);
  }
  string ans="";
  while(!s.empty()){
   ans.push_back(s.top());
   s.pop();
  }
  cout<<ans<<endl;
}