#include<bits/stdc++.h>
using namespace std; 
class Graph{
    public:
    unordered_map<int,list<pair<int,int>>>adjList;
    void addEdge(int u,int v, int weight,bool direction)
    {
        adjList[u].push_back({v,weight});
        //if 0 then undirected 
        if(direction==0)
        {
            adjList[v].push_back({u,weight});
        }
    }

    void topoSort(int src,unordered_map<int,bool> &visited,stack<int> &ans)
        {
            visited[src]=true;
            for(auto nbr:adjList[src])
            {
                if(!visited[nbr.first])
                {
                topoSort(nbr.first,visited,ans);
                }
            }
            ans.push(src);
        }

    void shortestDistBfs(int src,int dest)
    {    
        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;
        queue<int> q;
        q.push(src);
        parent[src]=-1;
        visited[src]=true;
        while(!q.empty())
        {
            int frontnode=q.front();
            q.pop();
            for(auto nbr:adjList[frontnode])
            {
                if(!visited[nbr.first])
                {
                    q.push(nbr.first);
                    visited[nbr.first]=true;
                    parent[nbr.first]=frontnode;
                }
            }
        }

        vector<int> ans;
        int node=dest;
        while(node != -1)
        {
            ans.push_back(node);
            node=parent[node];
            
        }
        reverse(ans.begin(),ans.end());

        cout<<"printing ans :"<<endl;
        for(auto i:ans)
        {
            cout<<i<<" ";
        }cout<<endl;
        
    }

    vector<int>  shortestDistDfs(stack<int> topoOrder,int n)
    {
        vector<int> dist(n,INT_MAX);
        int src=topoOrder.top();
        topoOrder.pop();
        dist[src]=0;
        for(auto nbr:adjList[src])
        {
            if(dist[src]+nbr.second < dist[nbr.first])
            {
                dist[nbr.first]=dist[src]+nbr.second;
            }
        }

        while(!topoOrder.empty())
        {
            int topElement=topoOrder.top();
            topoOrder.pop();
            for(auto nbr:adjList[topElement])
            {
               if(dist[topElement]+nbr.second < dist[nbr.first])
               {
                dist[nbr.first]=dist[topElement]+nbr.second;
               }
            }
        }
        for(auto i:dist)
        {
            cout<<i<<" ";
        }
        return dist;
    }
    void print(){
        for(auto i:adjList)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<"("<<j.first<<" ,"<<j.second<<"),";
            }cout<<endl;
        }
    }
};
int main()
{
    Graph g;
    // g.addEdge(0,1,1,0);
    // g.addEdge(0,6,1,0);
    // g.addEdge(0,5,1,0);
    // g.addEdge(1,2,1,0);
    // g.addEdge(6,3,1,0);
    // g.addEdge(5,4,1,0);
    // g.addEdge(2,3,1,0);
    // g.addEdge(4,3,1,0);
    
    int src=0;
    int dest=3;
    g.shortestDistBfs(src,dest); 

    
    g.addEdge(0,1,5,1);
    g.addEdge(0,2,3,1);
    g.addEdge(1,3,3,1);
    g.addEdge(2,1,2,1);
    g.addEdge(2,4,6,1);
    g.addEdge(4,3,1,1);
    g.addEdge(2,3,5,1);
   
    int n=5;
    g.print();
    
    unordered_map<int,bool> visited;
    stack<int> topoOrder;
    g.topoSort(src,visited,topoOrder);
    vector<int> dist=g.shortestDistDfs(topoOrder,n);
    cout<<"shortest path is "<<dist[dest];

    
}