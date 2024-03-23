#include<bits/stdc++.h>
using namespace std; 
class Graph{
    public:
    unordered_map<int,list<pair<int,int> > >adjList;
    void addEdge(int u, int v, int weight , bool direction )
    {
        adjList[u].push_back({v,weight});
        //if direciton =0 then undirected 
        if(direction==0)
        {
            adjList[v].push_back({u,weight});
        }
    }

    void print()
    {
        for(auto i:adjList)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<"("<<j.first<<","<<j.second<<")"<<",";
            }cout<<endl;
        }
    }

    void shortestDistDijkstra(int src,int n)
    {
        vector<int> dist(n,INT_MAX);
        set<pair<int,int>> st;

        dist[src]=0;
        st.insert(make_pair(0,src));
        while(!st.empty())
        {
            auto topElement=*(st.begin());
            int nodeDistance=topElement.first;
            int node=topElement.second;

            //pop from set 
            st.erase(st.begin());
            for(auto nbr:adjList[node])
            {
                if(nodeDistance+nbr.second < dist[nbr.first])
                {
                    //mujhe distance update karna h 
                    auto result=st.find(make_pair(dist[nbr.first],nbr.first));
                    

                    //if found, then remove 
                    if(result != st.end())
                    {
                        st.erase(result);
                    }

                    dist[nbr.first]=nodeDistance+nbr.second;
                    st.insert(make_pair(dist[nbr.first],nbr.first));
                }
            }
        }

        cout<<"Printing the ans "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<dist[i]<<" ";
        }cout<<endl;
    }

    void bellmanForAlgo(int n,int src)
    {
        //assuming directed weighted graph 
        vector<int> dist(n,INT_MAX);
        dist[src]=0;
        //n-1 relaxations step 
        for(int i=0;i<n-1;i++)
        {
            //for all edges 
            for(auto t:adjList)
            {
                for( auto nbr:t.second)
                {
                    int u=t.first;
                    int v=nbr.first;
                    int wt=nbr.second;
                    if(dist[u] != INT_MAX && dist[u] + wt <dist[v]){
                        dist[v]=dist[u]+wt;
                    }
                }
            }
        }
        cout<<"printing dist array ";
        for(auto i:dist)
        {
            cout<<i<<" ";
        }

        //to check for -ve cycle 
        bool negativeCycle=false;
        for(auto t:adjList)
        {
            for(auto nbr:t.second)
            {
                int u=t.first;
                int v=nbr.first;
                int wt=nbr.second;
                if(dist[u] != INT_MAX && dist[u]+wt < dist[v]){
                    negativeCycle=true;
                    break;
                }
            }
        }
        if(negativeCycle==true){
            cout<<"-ve cycle present";
        }else 
        {
            cout<<"-ve cycle absent";
        }
    }


};
int main()
{
    Graph g;
    // g.addEdge(6,3,2,0);
    // g.addEdge(6,1,14,0);
    // g.addEdge(6,5,9,0);
    // g.addEdge(3,1,9,0);
    // g.addEdge(3,2,10,0);
    // g.addEdge(3,4,11,0);
    // g.addEdge(5,4,6,0);
    // g.addEdge(1,2,7,0);
    // g.addEdge(2,4,15,0);
    // int n=7;
    // g.print();
    // int src=6;
    // int dest=4;
    // g.shortestDistDijkstra(src,n);

    //bellman ford 
    g.addEdge(0,1,-1,1);
    g.addEdge(0,2,4,1);
    g.addEdge(1,2,3,1);
    g.addEdge(1,3,2,1);
    g.addEdge(1,4,2,1);
    g.addEdge(3,1,1,1);
    g.addEdge(3,2,5,1);
    g.addEdge(4,3,-3,1);

    g.print();
    g.bellmanForAlgo(5,0);
}