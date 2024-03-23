
#include<bits/stdc++.h>
using namespace std; 
bool issafe(int maze[][3],vector<vector<bool>> &visited,int i,int j,int row,int col)
{
    if((i>=0 && i<row) && (j>=0 && j<col) && (visited[i][j]==false) && (maze[i][j]==1))
    {
        return true;
    }else  
    {
        return false;
    }
}
void solve(int maze[][3],vector<vector<bool>> &visited,vector<string> &path,int i,int j,int row,int col,string output)
{
    if(i==row-1 && j==col-1){
        path.push_back(output);
        return;
    }
    
    //Down i+1,j
    if(issafe(maze,visited,i+1,j,row,col)){
        visited[i+1][j]=true;
        solve(maze,visited,path,i+1,j,row,col,output+'D');
        visited[i+1][j]=false;
      
    }

    //Left i,j-1
    if(issafe(maze,visited,i,j-1,row,col)){
        visited[i][j-1]=true;
        
        solve(maze,visited,path,i,j-1,row,col,output+'L');
        visited[i][j-1]=false;
    }

    //right i,j+1
     if(issafe(maze,visited,i,j+1,row,col)){
        visited[i][j+1]=true;
        solve(maze,visited,path,i,j+1,row,col,output+'R');
        visited[i][j+1]=false;
    }

    //upper i-1,j
     if(issafe(maze,visited,i-1,j,row,col)){
        visited[i-1][j]=true;
        solve(maze,visited,path,i-1,j,row,col,output+'U');
        visited[i-1][j]=false;
    }
    
}
int main()
{
    int maze[3][3]={{1,0,0},
                    {1,1,0},
                    {1,1,1}};
    int row=3;
    int col=3;
    if(maze[0][0]==0)
    {
        cout<<"rat is not not there ";
    }
    vector<string> path;
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    visited[0][0]=true;
    string output="";
    solve(maze,visited,path,0,0,row,col,output);
    cout<<"Answer is "<<endl;
    if(path.size()==0)
    {
        cout<<"NO path for rat is there "<<endl;
    }
    for(auto i:path){
        cout<<i<<" ";
    }
    
}