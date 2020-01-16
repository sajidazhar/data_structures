#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
void searchsort(int arr[],int n,int key)
{
    int i;
    int found=0,a=0;
    //sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            found=1;
            a=i;
            break;
        }
    }
    if(found==1)
    cout<<a;
    else
    cout<<"-1";
}
int main(int argc,const char* argv[]){
    int key=atoi(argv[1]);
    int n = argc-1;
	int arr[n];
	int j=0;
	for(int i=2;i<argc;i++)
	{
		arr[j++]=atoi(argv[i]);	
	} 
	searchsort(arr,n,key);
}

