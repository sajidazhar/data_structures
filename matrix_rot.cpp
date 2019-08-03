#include <stdio.h>
#include<iostream>
using namespace std;
void printSpiral(int arr[][3], int r, int c)
{
  int count=0,st1=0,en1=c,st2=0,en2=r,i,j,tot=r*c,temp,temp2;
    while(st1<=en1)
    {
        if(st1+1<=en1-1)
            temp=arr[st1+1][st2];
        else
            break;
        for(i=st1;i<en1;++i)
        {
            if(count!=tot)
            {
                  temp2=arr[st2][i];
                  arr[st2][i]=temp;
                  temp=temp2;
                  ++count;
            }
        }
        for(i=st2+1;i<en2;++i)
        {
          if(count!=tot)
          {
            temp2=arr[i][en1-1];
                arr[i][en1-1]=temp;
                temp=temp2;
                ++count;
          }
        }
        for(i=en1-2;i>=st2;--i)
        {
          if(count!=tot)
          {
            temp2=arr[en2-1][i];
                arr[en2-1][i]=temp;
                temp=temp2;
            ++count;
          }
        }
        for(i=en2-2;i>=st2+1;--i)
        {
          if(count!=tot)
          {
            temp2=arr[i][st1];
                arr[i][st1]=temp;
                temp=temp2;
            ++count;
          }
        }
        ++st1;
        ++st2;
        --en1;
        --en2;
    }
}
int main()
{
    
    int arr[3][3]={1,2,3,4,5,6,7,8,9},i,j;
    printSpiral(arr,3,3);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}



