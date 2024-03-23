#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    int i = 0, j = 0;
    int k = 0;
    while( i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    //copy first array k element ko
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    //copy kardo second array k remaining element ko
    while(j<m) {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}
void movezero(int arr[],int n)
{
    int i=0;//non-zero value it shift all non-zero element to the left 
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void reverse(int arr[],int n)
{
    int s=0;
    int e=(n-1);
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void mergesort(int arr1[], int n, int arr2[], int m) {

    int k=n;
    for(int i=0;i<k;i++)
    {
        arr1[i+m]=arr2[i];
    }
    sort(arr1,arr1+n);
}

int main() {

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);
    // reverse an array 
    int a[5]={5 ,6 ,3 ,8 ,1 };
    reverse(a,5);
    print(a,5);
    // move zeroes to right side and left part is not sorted 
    int x[6]={1,0,3,0,5,0};
    movezero(x,6);
    print(x,6);
    // do merging in one array only 
    int m[6]={1,3,6,0,0,0},n[3]={2,4,5};
    mergesort(m,6,n,3);
    print(m,6);
}