#include<bits/stdc++.h>
using namespace std; 
class Graph{
    public:
    unordered_map<int,list<int>> adjList;
    void addEdge(int u, int v, int direction )
    {
        adjList[u].push_back(v);
        if(direction==0)
        {
            adjList[v].push_back(u);
        }
    }
    void print()
    {
        for(auto neighbors:adjList)
        {
            cout<<neighbors.first<<"->";
            for(auto i:neighbors.second)
            {
                cout<<i<<",";
            }cout<<endl;
        }
    }
   

    //Directed graphs 
    bool detectCycleDfs(int src,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsVisited)
    {
        visited[src]=true;
        dfsVisited[src]=true;
        for(auto neighbors:adjList[src])
        {
            if(!visited[neighbors])
            {
                bool ans=detectCycleDfs(neighbors,visited,dfsVisited);
                if(ans=true)
                {
                    return true;
                }
            }
            if(dfsVisited[neighbors]==true && visited[neighbors]==true)
            {
                return true;
            }
        }
        dfsVisited[src]=false;
        return false;
    }

};
int main()
{
    cout<<"Enter the no of nodes "<<endl;
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(2,4,1);

    g.print();
   
    bool ans=false;
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsVisited;
    int parent=-1;
    for(int i=0;i<5;i++)
    {
        if(!visited[i]){
            ans=g.detectCycleDfs(i,visited,dfsVisited);
            if(ans==true)
            break;
        }
    }
    cout<<"answer not com"<<ans<<" ";
    if(ans==true)
    {
        cout<<"Cycle is Present "<<endl;
    }else 
    {
        cout<<"Cycle Absent "<<endl;
    }
    
}