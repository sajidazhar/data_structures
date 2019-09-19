#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        if(arr[i]<arr[i+1])
        {
            flag=0;
        }
        else
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
       cout<<"not sorted";
    else
    cout<<"sorted";
    return 0;
}

