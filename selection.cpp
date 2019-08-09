#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionsort(int arr[],int n)
{
    int i,j,min_element;
    for(i=0;i<n-1;i++)
    {
        min_element=i;
        for(j=i+1;j<n;j++)
        
            if(arr[j]<arr[min_element])
            
                min_element=j;
            
            swap(arr[min_element],arr[i]);
        
    }
}

int main()
{
    int arr[]={64,11,25,22,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    cout<<" sorted array is \n ";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}

