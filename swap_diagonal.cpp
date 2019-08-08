#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int temp=arr[i][i];
            arr[i][i]=arr[i][3-i-1];
            arr[i][3-i-1]=temp;
        }
    }
    cout<<"the matrix after changing diagonals : \n ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

