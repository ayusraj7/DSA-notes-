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
    bool detectCycle(int src,unordered_map<int,bool> &visited)
    {
        unordered_map<int,int> parent;
        visited[src]=true;
        parent[src]=-1;
        queue<int> q;
        q.push(src);
        while(!q.empty())
        {
            int frontnode=q.front();
            q.pop();
            for( auto neighbors:adjList[frontnode])
            {
                if(!visited[neighbors])
                {
                    q.push(neighbors);
                    visited[neighbors]=true;
                    parent[neighbors]=frontnode;
                }else 
                {
                    if(parent[neighbors]!=frontnode && parent[frontnode]!=neighbors)
                    {
                        cout<<"Cycle detected "<<endl;
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool detectCycleDfs(int src,unordered_map<int,bool> &visited,int parent)
    {
        visited[src]=true;
        for(auto neighbors:adjList[src])
        {
            if(!visited[neighbors])
            {
                bool checkAagekaAns=detectCycleDfs(neighbors,visited,src);
                if(checkAagekaAns==true)
                {
                    return true;
                }
                
            }
            if(visited[neighbors] && neighbors != parent )
            {
                
                return true;
            }
        }
        return false;
    }
};
int main()
{
    cout<<"Enter the no of nodes "<<endl;
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);
    g.addEdge(2,6,0);
    g.addEdge(2,5,0);

    // g.addEdge(0,1,0);
    // g.addEdge(1,3,0);
    // g.addEdge(1,2,0);
    // g.addEdge(3,4,0);
    // g.addEdge(4,5,0);
    // g.addEdge(4,6,0);

    g.print();
    
    // bool ans=false;
    // unordered_map<int,bool> visited;
    // for(int i=0;i<5;i++)
    // {
    //     if(!visited[i]){
    //         ans=g.detectCycle(i,visited);
    //         if(ans==true)
    //         break;
    //     }
    // }
    // if(ans==true)
    // {
    //     cout<<"Cycle is Present "<<endl;
    // }else 
    // {
    //     cout<<"Cycle Absent "<<endl;
    // }

    bool ans2=false;
    unordered_map<int,bool> visited2;
    int parent=-1;
    for(int i=0;i<5;i++)
    {
        if(!visited2[i]){
            ans2=g.detectCycleDfs(i,visited2,parent);
            if(ans2==true)
            break;
        }
    }
    if(ans2==true)
    {
        cout<<"Cycle is Present "<<endl;
    }else 
    {
        cout<<"Cycle Absent "<<endl;
    }
    
}