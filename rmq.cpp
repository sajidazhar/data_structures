#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,char* argv[])
{
    int arr[argc-1][argc-1];
    int arr1[argc-1];
    int n=argc-1;
    int k=0;
    for(int i=1;i<argc;i++)
    {
        arr1[k]=atoi(argv[i]);
        k++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                arr[i][j]=arr1[j];
            }
            if(i<j)
            {
                if(arr[i][j-1]<arr1[j])
                {
                    arr[i][j]=arr[i][j-1];
                }
                else
                {
                    arr[i][j]=arr1[j];
                }
            }
            if(i>j)
            {
                arr[i][j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

