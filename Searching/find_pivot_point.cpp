#include<iostream>
using namespace std;
int main()
{
    int i,j,n,r;
    cout<<"enter the length of an array : ";
    cin>>n;
    int *arr=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter number of rotations : "; 
    cin>>r;
    r=r%n;
    for(i=0;i<r;i++)
    {
        int temp=arr[n-1];
        for(j=n-1;j>0;--j)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    int temp1=arr[0];
    int index;
    for(i=1;i<n;i++)
    {
        if(temp1>arr[i])
        {
            index=i-1;
            break;
        }
        else
        {
            index=arr[i];
        }
    }
    cout<<"\n index of pivot element : "<<index<<endl;
    
}


