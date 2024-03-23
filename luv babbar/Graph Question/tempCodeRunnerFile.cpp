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

        vector<int> dijkstrapath(int src,int n)
        {
            set<pair<int,int>> st;
            vector<int> dist(n,INT_MAX);
            dist[src]=0;
            st.insert({0,src});
            while(!st.empty())
            {
                pair<int,int> frontnode=*(st.begin());
                int nodeDistance=frontnode.first;
                int node=frontnode.second;
                st.erase(st.begin());
                for(auto nbr:adjList[node])
                {
                    if(nodeDistance+nbr.second < dist[nbr.first])
                    {
                        auto result=st.find({dist[nbr.first],nbr.first});
                        if(result != st.end())
                        {
                            st.erase(result);

                        }

                        dist[nbr.first]=nodeDistance+nbr.second;
                        st.insert({dist[nbr.first],nbr.first});
                    }
                }

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
int main(){
    Graph g;
    int n=5;
    g.addEdge(0,1,5,1);
    g.addEdge(1,3,3,1);
    g.addEdge(4,3,1,1);
    g.addEdge(2,4,6,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,1,2,1);
    g.addEdge(2,3,5,1);
    g.print();
    int src=0;
    int dest=3;
    vector<int> dist=g.dijkstrapath(src,n);
    cout<<"Shortest Path is "<<dist[dest]<<" ";



}