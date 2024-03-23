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
    void dfs1(int src, unordered_map<int,bool> &visited,stack<int> &s)
    {
        visited[src]=true;
        for(auto nbr:adjList[src])
        {
            if(!visited[nbr])
            {
                dfs1(nbr,visited,s);
            }
        }
        s.push(src);
    }
    void dfs2(int src, unordered_map<int,bool> &visited2,unordered_map<int,list<int>> &adjNew)
    {
        cout<<src<<" ";
        visited2[src]=true;
        for(auto nbr:adjNew[src])
        {
            if(!visited2[nbr])
            {
                dfs2(nbr,visited2,adjNew);
            }
        }
    }
    int countSCC(int n)
    {
        cout<<"What are you doing "<<endl;
        stack<int> s;
        unordered_map<int,bool> visited;
        for(int i=0;i<n;i++)
        {
           if(!visited[i])
           {
               dfs1(i,visited,s);
           }
        }

        unordered_map<int,list<int>> adjNew;
        //reverse the edges 
        for(auto i:adjList)
        {
            int u=i.first;
            for(auto j:i.second)
            {
                int v=j;
                adjNew[v].push_back(u);
            }
        }
        
       

        //count the connected components 
        unordered_map<int,bool> visited2;
        int count=0;
        

        while(!s.empty())
        {
            int top=s.top();
            s.pop();

            if(!visited2[top])
            {
                cout<<"Strongly connected components are "<<"->";
                dfs2(top,visited2,adjNew);
                cout<<endl;
                count++;
            }
        }
        

        return count;

    }
};
int main()
{
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,0,1);
    g.addEdge(2,4,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,7,1);
    g.addEdge(6,4,1);

    
    //g.print();

    cout<<"no of strongly connected components are "<<g.countSCC(8);
}