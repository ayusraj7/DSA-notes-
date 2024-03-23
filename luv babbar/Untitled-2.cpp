#include<bits/stdc++.h>
using namespace std; 
class Graph{
    public:
    unordered_map<int,list<int>> adjList;
    void add(int u,int v,int direction)
    {
        //direction = 0 -> undirected graph 
        //direction = 1 -> directed graph
        adjList[u].push_back(v);
        if(direction==0)
        {
            //undirected edge 
            adjList[v].push_back(u);
        }
    }
    unordered_map<int,list<pair<int,int>>> wadjList; 
    void addWeight(int u,int v, int weight,int direction)
    {
        wadjList[u].push_back({v,weight});
        if(direction==0)
        {
            wadjList[v].push_back({u,weight});
        }
    }
    void printWeight()
    {
        for(auto i:wadjList)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<"{"<<j.first<<","<<j.second<<"}";
            }cout<<endl;
        }
    }
    void print()
    {
        for(auto i:adjList)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<j<<" ";
            }cout<<endl;
        }
    }
};
int main()
{
    Graph g;
    g.add(0,1,1);
    g.add(1,2,1);
    g.add(2,3,1);
    g.add(1,3,1);
    g.add(0,3,1);

    g.print();
    g.addWeight(0,1,5,1);
    g.addWeight(1,2,3,1);
    g.addWeight(2,3,2,1);
    g.addWeight(1,3,6,1);
    g.addWeight(0,3,8,1);
    g.printWeight();
    // int e;
    // cout<<"Enter the number of edges "<<endl;
    // cin>>e;
    // int n;
    // cout<<"Enter the number of nodes "<<endl;
    // cin>>n;
    // vector<vector<int>> node(n,vector<int>(n,0));
    // for(int i=0;i<e;i++)
    // {
    //     int u,v;
    //     cin>>u>>v;
    //     node[u][v]=1;
    // }
    // cout<<"Printing the matrix "<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<node[i][j]<<" ";
            
    //     }cout<<endl;
    // }
}