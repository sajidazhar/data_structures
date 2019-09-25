#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,13,21,33};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        int next=-1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                next=arr[j];
                break;
            }
        }
        cout<<next<<" ";
    }
    return 0;
}

