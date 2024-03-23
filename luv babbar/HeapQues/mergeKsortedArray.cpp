#include<bits/stdc++.h>
using namespace std; 


class info{
    public:
    int value;
    int row;
    int col;
    info(int val,int r,int c){
        value=val;
        row=r;
        col=c;
    }
};
class compare{
    public:
    bool operator()(info* a,info* b){
        return a->value > b->value;
    }
};
 void mergeKSortedArrays(int arr[][4],int k, int n,vector<int>& ans){
    priority_queue<info*, vector<info*>, compare> minHeap;
    //vector<int> ans;
    for(int i=0;i<k;i++)
    {
        info* temp=new info(arr[i][0],i,0);
        minHeap.push(temp);
    }

    while(!minHeap.empty())
    {
        info* temp=minHeap.top();
        minHeap.pop();
       
        int element=temp->value;
        int row=temp->row;
        int col=temp->col;
        ans.push_back(element);
        if(col+1<n)
        {
            info* newInfo=new info(arr[row][col+1],row,col+1);
            minHeap.push(newInfo);
        }
    }
    //return ans;
}
int main()
{
    int arr[][4]={{2,4,6,8},{1,3,5,7},{8,9,10,11}};
    int k=3;
    int n=4;
    vector<int> ans;
    mergeKSortedArrays(arr,k,n,ans);
    for(int i:ans)
    {
        cout<<i<<" ";
    }

}