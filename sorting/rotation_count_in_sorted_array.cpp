#include<iostream>
#include<stdlib.h>
using namespace std;
int count(int arr[], int n) 
{ 
    int count=0;
    int min = arr[0], index; 
    for (int i=0; i<n; i++) 
    { 
        if(min>arr[i]) {
            break;
        }
      count++;  
    } 
    if(count==n)
        return 0;
    return count; 
    
} 
int main(int argc,const char* argv[]){
    int n = argc-1;
	int arr[n];
	int j=0;
	for(int i=1;i<argc;i++)
	{
		arr[j++]=atoi(argv[i]);	
	} 
	cout<<count(arr,n);
}

