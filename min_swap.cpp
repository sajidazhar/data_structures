#include<iostream>
using namespace std;
void min_swap(int arr[],int n)
{
    int max=-1,min=arr[0],r=0,l=0;//l=index of lagest element,r=index of smallest element
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)//leftmost
        {
           max=arr[i];
           l=i;
        }
        if(arr[i]<=min)//rightmost
        {
            min=arr[i];
            r=i;
        }
    }
        if(r<l)
        {
            cout<<l+(n-r-2);//one swap is already done so -2
        }
        else
        {
            cout<<l+(n-r-1);
        }
    
}
int main()
{
    int arr[]={5,6,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    min_swap(arr,n);
    return 0;
}

