#include<iostream>
#include<algorithm>
using namespace std;
int kth(int arr[],int n,int k)
{
    sort(arr,arr+n);
    reverse(arr,arr+n);
    return arr[k-1];
}
int main()
{
    int arr[]={1,4,3,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter the kth element: \n";
    cin>>k;
    cout<<kth(arr,n,k);
    return 0;
}

