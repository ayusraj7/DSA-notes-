#include<bits/stdc++.h>
using namespace std;
bool redundant(string s)
{
    stack<char> st;
        for(int i=0;i<s.size();i++)
    {
        if(s[i]==')')
        {
            bool flag=true;
            while(st.top()!='(' && !s.empty())
            {
                if(st.top()=='+' || st.top()=='-' || st.top()=='/' || st.top()=='*')
                {
                    flag=false;
                    st.pop();
                }
               
            }
            if(flag==true)
            {
                return true;
            } 
        }else if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*') 
        {
            st.push(s[i]);
        }
    }
    return false;
} 
int main()
{
    
    string s="(a+(b)/c)";
    cout<<redundant(s)<<endl;
}