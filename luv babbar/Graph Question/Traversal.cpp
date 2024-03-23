#include<bits/stdc++.h>
using namespace std; 
 
//2nd way adjacency list 
class Graph{
    public:
    unordered_map<int,list<int>> adjList;
    void addEdge(int u,int v,int direction)
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
    void printAdjList(){
        for(auto node:adjList)
        {
            cout<<node.first<<"->";
            for(auto neighbors:node.second)
            {
                cout<<neighbors<<",";
            }cout<<endl;
        }
    }
    void bfs(int src,unordered_map<int,bool> &visited)
    {
        queue<int> q;
        q.push(src);
        
        visited[src]=true;
        while(!q.empty())
        {
            int frontNode=q.front();
            cout<<frontNode<<" ";
            q.pop();
            for(auto neighbors:adjList[frontNode])
            {
                if(!visited[neighbors])
                {
                    q.push(neighbors);
                    visited[neighbors]=true;
                }
            }
        }
    }

    void dfs(int src,unordered_map<int,bool> &visited)
    {
        cout<<src<<" ";
        visited[src]=true;
        for(auto neighbors:adjList[src])
        {
            if(!visited[neighbors])
            {
                dfs(neighbors,visited);
            }
        }
    }
};
int main()
{
    //cout<<"First method of implementation of graph "<<"ADJACENCY MATRIX"<<endl;
    // int n;
    // cout<<"Enter the no of nodes "<<endl;
    // cin>>n;

    // int e;
    // cout<<"Enter the no of edges "<<endl;
    // cin>>e;

    // vector<vector<int> > node(n,vector<int>(n,0));
    // cout<<"print the list "<<endl;
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
    cout<<"Second method of implementation of graph "<<"ADJACENCY LIST "<<endl;
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(0,2,0);
    g.addEdge(2,4,0);
    cout<<endl;
    g.printAdjList();
    unordered_map<int,bool> visited;
    for(int i=0;i<5;i++){
        if(!visited[i])
        {
            g.bfs(i,visited);
        }
    }
    cout<<"DFS Traversal "<<endl;
    unordered_map<int,bool> visited2;
    for(int i=0;i<5;i++){
        if(!visited2[i])
        {
            g.dfs(i,visited2);
        }
    }
    
}