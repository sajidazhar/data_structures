#include<iostream>
using namespace std;
//to move binary tree max element to root element 
//complexity =(nlogn)
void heapify(int arr[],int n,int i)
{
    int root=i; //node at index i
    int l=2*i+1;  //left child
    int r=2*i+2; //right child
    if(l<n && arr[l]>arr[root])
    root=l;
    if(r<n && arr[r]>arr[root])
    root=r;
    if(root!=i)
    {
        swap(arr[i],arr[root]);
        heapify(arr,n,root);
    }
}
// to sort the element
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main()
{
    int arr[]={12,11,13,5,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    cout<<"sorted heap is : \n";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}

