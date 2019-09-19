#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
   void swap(int* a,int* b)
   {
       int temp=*a;
       *a=*b;
       *b=temp;
   }
    
    int partition(int arr[],int low,int high)
    {
        //int pivot_index=(rand()%(high-low+1)+low);
        int pivot_index=high;
        int pivot=arr[pivot_index];
        int i=low-1;
        for(int j=low;j<=high;j++)
        {
            if(j==pivot_index)
            
                continue;
            
            
            if(arr[j]<=pivot)
            {
                i++;
                swap(&arr[i],&arr[j]);
            }
        }
        swap(&arr[i+1],&arr[pivot_index]);
        return i+1;
    }
    void quicksort(int arr[],int start,int end)
    {
        if(start>=end)
        return ;
        int pi=partition(arr,start,end);
        quicksort(arr,start,pi-1);
        quicksort(arr,pi+1,end);
    }
    int main()
    {
        int arr[]={6,4,2,7,3,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        quicksort(arr,0,n-1);
        cout<<"sorted array in\n ";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        
        }
    }


