//graph 
#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int graph[N][N];
//O(N^2) -space complexity 
// for better space complexity 
vector<pair<int,int>> graph2[N];//adjaency list 
int main()
{
    int n,m;
    cin>>n>>m;
    int graph[n+1][n+1];
    for(int i=0;i<m;++i)
    {
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        graph[v1][v2]=wt;
        graph[v2][v1]=wt; 

        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
}
// Adjacency matrix 
// O(N^2) - space complexity 
// N!= 10^5 / N <=10^3
 
// Adjacency List 
// O(N+M)