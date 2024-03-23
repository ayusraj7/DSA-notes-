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
    void topoSortDfs(int src, unordered_map<int,bool> &visited, stack<int> &s)
    {
        visited[src]=true;
         
        for(auto neighbors:adjList[src])
        {
            if(!visited[neighbors])
            {
                topoSortDfs(neighbors,visited,s);
            }
        }
        s.push(src);
       
    }
    void topoSortBfs(vector<int> &ans,int n)
    {
        unordered_map<int,int> indegree;
        queue<int> q;
        //indegree calculation 
        for(auto i:adjList){
            int src=i.first;
            for(auto nbr:i.second){
                indegree[nbr]++;
            }
        }

        //put nodes in queue having indegree=0 
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }

        //BFS logic 
        while(!q.empty())
        {
            int frontnode=q.front();
            q.pop();
            ans.push_back(frontnode);
            for(auto neighbors:adjList[frontnode])
            {
                indegree[neighbors]--;
                if(indegree[neighbors]==0)
                {
                    q.push(neighbors);
                }
            }
        }
        
    }
};
int main()
{
    cout<<"Enter the no of nodes "<<endl;
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,7,1);
    g.addEdge(3,4,1);
    g.addEdge(4,6,1);

    // g.addEdge(4,0,1);
    // g.addEdge(5,0,1);
    // g.addEdge(4,1,1);
    // g.addEdge(1,3,1);
    // g.addEdge(2,3,1);
    // g.addEdge(5,2,1);

    
    int n=8;
    g.print();
    stack<int> ans;
    unordered_map<int,bool> visited;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            g.topoSortDfs(i,visited,ans);
        }
    }
    cout<<"printing the topo sort "<<endl;
    while(!ans.empty())
    {
        cout<<ans.top()<<" ";
        ans.pop();
    }


    cout<<endl<<"printing the topo sort using bfs "<<endl;
    vector<int> v;
    //connected 
     
    g.topoSortBfs(v,n);

    if(v.size()==n)
    {
        cout<<"Topological sort is present "<<endl;
    }else 
    {
        cout<<"Cycle is present "<<endl;
    }
    cout<<v.size()<<endl;

    for(auto i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
  

    
    
}