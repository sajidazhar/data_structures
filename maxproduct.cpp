#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,8,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    reverse(arr,arr+n);
    cout<<"pair with max product \n";
    cout<<"{"<<arr[0]<<" , "<<arr[1]<<"}";
    return 0;
}

