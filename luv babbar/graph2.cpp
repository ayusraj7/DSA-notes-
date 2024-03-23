#include<bits/stdc++.h>
using namespace std; 
template <typename t>

//2nd way adjacency list 
class Graph{
    public:
    
    unordered_map<t,list<pair<t,t>>> adjList;
    void addEdge(t u,t v,t weight,bool direction)
    {
        //direction = 0 -> undirected graph 
        //direction = 1 -> directed graph
        adjList[u].push_back({v,weight});
        if(direction==0)
        {
            //undirected edge 
            adjList[v].push_back({u,weight});
        }
    }
    void printAdjList(){
        for(auto node:adjList)
        {
            cout<<node.first<<"->";
            for(auto neighbors:node.second)
            {
                cout<<"("<<neighbors.first<<","<<neighbors.second<<")"<<",";
            }cout<<endl;
        }
    }
};
int main()
{
 
    cout<<"Second method of implementation of graph with weights "<<"ADJACENCY LIST "<<endl;
    Graph<int> g;
    g.addEdge(0,1,5,0);
    g.addEdge(1,2,3,0);
    g.addEdge(0,2,4,0);
    cout<<endl;
    g.printAdjList();
}