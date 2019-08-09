#include <bits/stdc++.h> 
using namespace std; 
  
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
  
void bubblesort(int arr[], int n)  
{  
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
    }
    
}  
  
int main()
{  
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubblesort(arr, n);  
    cout << "Sorted array: \n";  
     for(int i=0;i<n;i++)
     {
         cout<<" "<<arr[i];
     }
    return 0;  
}  

