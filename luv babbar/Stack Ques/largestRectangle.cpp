#include<bits/stdc++.h>
using namespace std; 
vector<int> nextSmaller(vector<int> ans)
{
    vector<int> res(ans.size());
    stack<int> st;
    st.push(-1);
    for(int i=ans.size()-1;i>=0;i--)
    {
       
         while(st.top()>=0 && ans[st.top()]>=ans[i])
        {
            st.pop();
        }
        res[i]=st.top();
        st.push(i);
    }
    return res;
}


vector<int> prevSmaller(vector<int> ans)
{
    vector<int> res(ans.size());
    stack<int> st;
    st.push(-1);
    for(int i=0;i<ans.size();i++)
    {  
        while(st.top()>=0 && ans[st.top()]>=ans[i])
        {
            st.pop();
        }
        res[i]=st.top();
        st.push(i);
    }
    return res;
}

int maxArea(vector<int> ans)
{
    int area=0;
    vector<int> prev=prevSmaller(ans);
    vector<int> next=nextSmaller(ans);

    for(int i=0;i<ans.size();i++)
    {
        if(next[i]==-1)
        {
            next[i]=ans.size();
        }
        int w=next[i]-prev[i]-1;
        area=max(area,w*ans[i]);
    }
    return area;
}
int main(){
    vector<int> ans={5,1,1,1,1,1,1,1};
    int area=maxArea(ans);
    cout<<"Max area is "<<area<<endl;
    
     
}