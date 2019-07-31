#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length : ";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the element of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a2=0,a1=arr[0],i1=0,i2=0,x=0;
    for(int i=0;i<n;i++)
    {
        a2+=arr[i];
        if(a2>a1)
        {
            a1=a2;
            i1=x;
            i2=i;
        }
        if(a2<0)
        {
            a2=0;
            x=i+1;
        }
    }
    cout<<" starting index "<<i1<<endl<<"ending index "<<i2<<endl;
    for(int i=i1;i<=i2;i++)
    {
        cout<<"  "<<arr[i];
    }
}
