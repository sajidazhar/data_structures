#include<iostream>
using namespace std;
#define n 4
void rotation90(int arr[n][n])
{
    for(int i=0;i<n/2;i++)
    {
        for(int j=i;j<n-i-1;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[n-1-j][i];
            arr[n-1-j][i]=arr[n-1-i][n-1-j];
            arr[n-1-i][n-1-j]=arr[j][n-1-i];
            arr[j][n-1-i]=temp;
        }
    }
}
int main()
{
    int arr[n][n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotation90(arr);
    cout<<"matrix after 90 degree rotation : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
