#include<iostream>
using namespace std;
int main()
{
 int arr[]={6,2,5,4,5,1,6};
 int acarea=0,area=0,pos=0;
 for(int k=0;k<7;k++)
 {
     int min=arr[0];
    for(int i=0;i<7;i++)
    {
         if(arr[i]<=min&&arr[i]>=0)
        {
             pos=i;
            min=arr[i];
        }
    }
    for(int j=0;j<7;j++)
    {
         if(arr[j]>=min)
        {
             area=area+min;
        }
         else
         {
            if(acarea <= area) 
            {
                acarea=area;
            }
            area=0;
         }
     
    }
    if(acarea<=area)
    {
        acarea=area;  
    }
    area=0;
    arr[pos]*=-1;
 }
 cout<<acarea;
 return 0;
}

