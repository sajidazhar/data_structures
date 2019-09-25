#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int arr1[]={1,2,10};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr1)/sizeof(arr1[0]);
    int count=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr[i]==arr1[j])
            count++;
        }
    }
    if(count==n2)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}

