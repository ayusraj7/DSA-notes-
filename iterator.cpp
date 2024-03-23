 #include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,5,6,7};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it=v.begin();
    cout<<*it+1<<endl;
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<" ";
    }cout<<endl;
    vector<pair<int,int> > vp={{1,2},{2,3},{3,4}};
    vector<pair<int,int> >:: iterator itr;
    for(itr=vp.begin();itr!=vp.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    for(itr=vp.begin();itr!=vp.end();itr++)
    {
        cout<<(itr->first)<<" "<<(itr->second)<<endl;
    }
    //(*it).first=(it->first)
}