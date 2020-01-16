#include<iostream>
#include<stdlib.h>
using namespace std;
void findpair(int arr[],int n,int sum)
{
    int i,j,found=0,a,b;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                found=1;
                a=arr[i];
                b=arr[j];
                break;
            }
        }
        
    }
    if(found==1) {
        cout<<a<<"_"<<b;
    }
    else {
        cout<<"0_0";
    }
}
int main(int argc,const char* argv[]){
    int sum=atoi(argv[1]);
	int n = argc-1;
	int arr[n];
	int j=0;
	for(int i=2;i<argc;i++)
	{
		arr[j++]=atoi(argv[i]);	
	} 
	findpair(arr,n,sum);
}

