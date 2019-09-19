#include<iostream>
using namespace std;
int main()
{
    int i,x,n=5;
    int arr[n]={10,20,30,40,50};
    int pos=n;
    cout<<"enter the element to insert : ";
    cin>>x;
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]>x)
        {
            --pos;
            arr[i+1]=arr[i];
        }
        else
        {
            arr[pos]=x;
            break;
        }
    }
    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

