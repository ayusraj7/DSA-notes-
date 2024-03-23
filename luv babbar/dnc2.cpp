#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s, int e)
{
    int pivotIndex=s;
    int pivotElement=arr[s];

    //setting the right index 
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivotElement)
        {
            count++;
        }
    }
    int rightIndex=s+count;
    swap(arr[rightIndex],arr[pivotIndex]);
    pivotIndex=s+count;

    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivotElement)
        {
            i++;
        }
        while(arr[j]>pivotElement)
        {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i],arr[j]);
        }
    }

    return pivotIndex;


} 
void quickSort(int arr[],int s, int e)
{
    if(s>=e)
    {
        return;
    }
    //paritition logic 
    int pivot=partition(arr,s,e);

    //left call 
    quickSort(arr,s,pivot-1);

    //right call 
    quickSort(arr,pivot+1,e);
}

//Quick sort 
// void quickSort(int arr[],int start,int end)
// {
//     if(start>=end)
//     {
//         return;
//     }

//     int pivot=end;
//     int i=start-1;
//     int j=start;
//     while(j<pivot)
//     {
//         if(arr[j]<arr[pivot])
//         {
//             i++;
//             swap(arr[i],arr[j]);
//         }
//         j++;
//     }
//     i++;
//     swap(arr[i],arr[pivot]);

//     quickSort(arr,start,i-1);
//     quickSort(arr,i+1,end);

// }


int main()
{
    int  arr[]={2,4,1,9,3,5};
    int s=0;
    int e=5;
    quickSort(arr,s,e);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}