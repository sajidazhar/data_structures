#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp,k,flag=-1;
    cout<<"enter the length of an array : ";
    cin>>n;
    int *arr=new int[n];
    int *brr=new int[n];
    cout<<"enter the array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        brr[n-1-i]=arr[i];
    }
    cout<<"reverse array is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"  "<<brr[i]<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"sorted array is : "<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0&&flag==-1) 
            flag=i;
        cout<<"  "<<arr[i];
    }
    i=0;
    j=0;
    k=flag;
    while(k<n)
    {
        if(arr[k]==0)
        {
            brr[j++]=0;
            k++;
        }
        else
            break;
    }
    while(j<n)
    {
        if(i<flag)
            brr[j++]=arr[i++];
        if(k<n)
            brr[j++]=arr[k++];
    }
    cout<<endl;
    cout<<"alteration of an array: \n ";
    for(i=0;i<n;i++)
    {
        cout<<"  "<<brr[i];
    }
    return 0;
}


