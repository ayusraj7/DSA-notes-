#include<iostream>
using namespace std; 

class Heap{
    public:
    int arr[101];
    int size;

    Heap()
    {
        size=0;
        arr[size]=-1;
    }

    void insert(int value)
    {
        //value insert karo end mein 
        size = size+1;
        int index=size;
        arr[size]=value;

        while(index>1)
        {
            int parentIndex= index/2;

            if(arr[index] > arr[parentIndex])
            {
                swap(arr[index],arr[parentIndex]);
                index=parentIndex;
            }else 
            {
                break;
            }
        }
    }

    void deleteHeap()
    {
        int i=1;
        arr[1]=arr[size];
        size--;
       
        while(i<size)
        {
             int leftIndex=2*i;
             int rightIndex=2*i+1;
             int largest=i;
             if(arr[leftIndex]>arr[largest] && leftIndex<size)
             {
                 largest=leftIndex;
             }
             if(arr[rightIndex]>arr[largest] && rightIndex<size)
             {
                 largest=rightIndex;
             }

             if(largest==i)
             {
                 //value is at correct position 
                 return;
             }else 
             {
                 swap(arr[i],arr[largest]);
             }
        }
    }
};

void heapify(int arr[],int n,int i)
{
    int leftIndex=2*i;
    int rightIndex=2*i+1;

    int largest=i;
    if(arr[leftIndex]>arr[largest] && leftIndex<n)
    {
        largest=leftIndex;
    }
    if(arr[rightIndex]>arr[largest] && rightIndex<n)
    {
        largest=rightIndex;
    }

    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        i=largest;
        heapify(arr,n,i);
    }
}

void buildHeap(int arr[],int n)
{
    for(int i=n/2; i>0 ; i--)
    {
        heapify(arr,n,i);
    }
}

void heapSort(int arr[],int n)
{
    //build heap 
    for(int i=n/2;i>0; i--)
    {
        heapify(arr,n,i);
    }
    while(n != 1)
    {
        swap(arr[1],arr[n]);
        n--;

        heapify(arr,n,1);
    }
}

int main()
{
    Heap h;
    // h.arr[0]=-1;
    // h.arr[1]=100;
    // h.arr[2]=50;
    // h.arr[3]=60;
    // h.arr[4]=40;
    // h.arr[5]=45;
    // h.size=5;
    // cout<<"printing the heap "<<endl;
    // for(int i=0;i<=h.size;i++)
    // {
    //     cout<<h.arr[i]<<" ";
    // }
    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(40);
    h.insert(80);
    h.insert(100);
    cout<<endl<<"printing the loop "<<endl;
    for(int i=0;i<=h.size;i++)
    {
        cout<<h.arr[i]<<" ";
    }cout<<endl;
    h.deleteHeap();
    cout<<"After deleting "<<endl;
    for(int i=0;i<=h.size;i++)
    {
        cout<<h.arr[i]<<" ";
    }cout<<endl;


    cout<<"Building heap using heapify "<<endl;
    int arr[]={-1,12,15,13,11,14};
    int n=5;
    buildHeap(arr,n);
    cout<<"Printing the heap "<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;


    cout<<"doing heap sort "<<endl;
    int arr2[]={-1,13,10,6,1,9,8,5,2};
    int size=8 ;
    heapSort(arr2,size);
    for(int i=1;i<=size;i++)
    {
        cout<<arr2[i]<<" ";
    }
    
}