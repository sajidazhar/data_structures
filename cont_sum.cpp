#include<iostream>
using namespace std;
int main()
{
    
        cout<<"enter the size of array: ";
        int n;
        cin>>n;
        int arr[n];
        cout<<"enter the elements : ";
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int sum1=0,sum2=arr[0];
        for(int i=0;i<n;i++)
        {
            sum1+=arr[i];
            if(sum1>sum2)
            sum2=sum1;
            if(sum1<0)
            sum1=0;
        }
        cout<<"largest sum is : "<<sum2<<"\n";
    
    return 0;
}

