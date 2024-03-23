#include<bits/stdc++.h>
using namespace std; 
class Graph{
    public:
    unordered_map<int,list<int>> adjList;
    void addEdge(int u,int v,bool direction)
    {
        adjList[u].push_back(v);
        if(direction==0)
        {
            adjList[v].push_back(u);
        }
    }

    void print()
    {
        for(auto i:adjList)
        {
            cout<<i.first<<"->";
            for(auto nbr:i.second)
            {
                cout<<nbr<<",";
            }cout<<endl;
        }
    }
    void findBridges(int src,int parent, int& timer,vector<int>& tin,vector<int>& low,unordered_map<int,bool> vis)
    {
        vis[src]=true;
        tin[src]=timer;
        low[src]=timer;
        timer++;

        for(auto nbr:adjList[src])
        {
            if(nbr==parent)
            {
                continue;
            }
            if(!vis[nbr])
            {
                findBridges(nbr,src,timer,tin,low,vis);

                //low update 
                low[src] = min(low[src],low[nbr]);

                //check for bridge 
                if(low[nbr]>tin[src])
                {
                    cout<<nbr<<"--"<<src<<"is a bridge"<<endl;
                }

            }else 
            {
                //node is visited and not a parent 
                //low update 
                low[src]=min(low[src],low[nbr]);
            }
        }
    }
};
int main()
{
    Graph g;
    g.addEdge(1,2,0);
    g.addEdge(1,0,0);
    g.addEdge(0,2,0);
    g.addEdge(3,4,0);
    g.addEdge(0,3,0);

    
    //g.print();
    int n=5;
    int timer=1;
    vector<int> tin(n);
    vector<int> low(n);
    unordered_map<int,bool> visited;
    g.findBridges(0,-1,timer,tin,low,visited);
}