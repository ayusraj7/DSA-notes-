 #include<bits/stdc++.h>//nesting of vectors 
using namespace std;
void printvec(vector<pair<int,int>> &v)
{
    cout<<"Size of vector:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first <<" "<<v[i].second<<endl;
    }cout<<endl;
}
int main()
{
    vector<pair<int,int>> v1={{1,2},{2,3},{3,4}};//simple input 
    printvec(v1);
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)//taking from user after running the program  
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});//here we can also use make_pair() for declaring the value in vector 
    }
    printvec(v);
    return 0;
}