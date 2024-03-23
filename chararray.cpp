#include<bits/stdc++.h>
using namespace std; 
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
char lowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }else 
    {
        return ch+32;
    }
}
string validString(string s)
{
  string str;
  int n= s.size();
   for(int i=0 ;i<n;i++)
      {
          if( s[i] >= 'a' && s[i] <='z'
             || s[i] >= 'A'&& s[i]<='Z'
             || s[i]>='0' &&   s[i]<='9')
          {
          str.push_back(s[i]);
          }
      }
      return str;
}
bool ispalindrome(string s)
{
    int n=s.size();
    string z=validString(s);
    for(int i=0;i<n;i++)
    {
        if(lowercase(z[i])!=lowercase(z[n-1-i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;

    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"Length :"<<getlength(name)<<endl;
    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;
    if(ispalindrome(s))
    {
        cout<<"It is a palindrome"<<endl;
    }else 
    {
        cout<<"It is not a palindrome "<<endl;
    }

    cout<<lowercase('b')<<endl;
    cout<<lowercase('A')<<endl;
   
}