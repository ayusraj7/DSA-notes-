#include <iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> firstNegative(vector<int> v,int k)
{
  int n=v.size();
  vector<int> ans;
  for(int i=0;i<=n-k;i++)
  {
    bool flag=false;
    for(int j=i;j<i+k;j++)
    {
      if(v[j]<0)
      {
        ans.push_back(v[j]);
        flag=true;
        break;
      }
    }
    if(!flag)
    {
      ans.push_back(0);
    }
  }
  return ans;
}
vector<int> negativeFirst(vector<int> arr,int k)
{
    queue<int> q;
    vector<int> ans;
    int n=arr.size();
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
            q.push(i);
        }
    }
    for(int i=k;i<n;i++)
    {
        if(q.empty())
        {
            ans.push_back(0);
        }else 
        {
            ans.push_back(arr[q.front()]);
        }
        while(!q.empty() && (i-q.front()>=k))
        {
            q.pop();
        }
        if(arr[i]<0)
        {
            q.push(i);
        }
    }
    if(q.empty())
    {
        ans.push_back(0);
    }else 
    {
        ans.push_back(arr[q.front()]);
    }
    return ans;
}
int main() {
  int k=3;
  vector<int> v{10,-3,5,-6,9,10,11,-3};
  vector<int> ans=negativeFirst(v,k);
  for(int i:ans)
  {
    cout<<i<<" ";
  }
  return 0;
}