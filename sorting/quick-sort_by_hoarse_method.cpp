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
        int pivot=arr[low];
        int i=low-1;
        int j=high+1;
        while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[i]>pivot);
        if(i>=j)
        return j;
        swap(arr[i],arr[j]);
       }
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
        quicksort(arr,0,n);
        cout<<"sorted array in\n ";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        
        }
    }


