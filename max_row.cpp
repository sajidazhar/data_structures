#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,sum,maxsum=0,index=-1;
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
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
            
        }
        
       if(sum>maxsum)
       {
           maxsum=sum;
           index=i;
       }
       
    }
    cout<<"The row "<<i<<" having largest sum = "<<maxsum<<endl;
    return 0;
    
}

