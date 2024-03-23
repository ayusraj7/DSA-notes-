#include<bits/stdc++.h>
using namespace std; 
unordered_map<int,bool> rowCheck;
unordered_map<int,bool> upperLeftDiagonalCheck;
unordered_map<int,bool> lowerLeftDiagonalCheck;
void printSolution(vector<vector<char>> &board)
{
    cout<<"Answer is "<<endl;
    int n=board.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }cout<<endl<<endl;
    }
}

// bool isSafe(int row,int col,vector<vector<char>> &board,int n)
// {
//     int i=row;
//     int j=col;
//     while(j>=0)
//     {
//        if(board[i][j]=='Q')
//        {
//            return false;
//        }
//        j--;
//     }
//     i=row;
//     j=col;
//     while(i>=0 && j>=0)
//     {
//         if(board[i][j]=='Q')
//         {
//             return false;
//         }
//         i--;
//         j--;
//     }
//     i=row;
//     j=col;
//     while(i<n && j>=0)
//     {
//         if(board[i][j]=='Q')
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }

//     return true;

// }
bool isSafe(int row,int col,vector<vector<char>> &board,int n)
{
    if(rowCheck[row]==true)
    {
        return false;
    }
    if(upperLeftDiagonalCheck[n-1+col-row]==true)
    {
        return false;
    }
    if(lowerLeftDiagonalCheck[row+col]==true)
    {
        return false;
    }
    return true;
}
void nQueen(vector<vector<char>> &board,int col,int n)
{
      //base case
    if(col >= n) {
        printSolution(board);
        return ;
    }

    //1 case solve karna h , baaki recursion sambhal lega

    for(int row = 0; row <n; row++) {
        if(isSafe(row, col, board, n)) {
        //rakh do

        board[row][col] = 'Q';
        //map modification 
        rowCheck[row]=true;
        upperLeftDiagonalCheck[n-1+col-row]=true;
        lowerLeftDiagonalCheck[row+col]=true;
        //recursion solution laega
        nQueen(board, col+1, n);
        //backtracking
        board[row][col]='-';
        rowCheck[row]=false;
        upperLeftDiagonalCheck[n-1+col-row]=false;
        lowerLeftDiagonalCheck[row+col]=false;
        
        }

    }
}
int main()
{
    cout<<"Enter the no of queens "<<endl;
    int n;
    cin>>n;
    vector<vector<char>> board(n,vector<char>(n,'-'));
    int col=0;
    nQueen(board,col,n);
}