#include<iostream>
using namespace std;
int odd(int arr[],int n)
{
    int i;
    int res=0;
    for(i=0;i<n;i++)
        res=res^arr[i];
    return res;
}
int main()
{
    int arr[]={1,1,2,2,3,3,3,4,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<odd(arr,n);
    return 0;
}

