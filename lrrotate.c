#include<stdio.h>
void leftRotate(int arr[],int a,int b,int c)
{
	for(int i=1;i<=c;++i)
	{
		int temp=arr[a];
		for(int j=a+1;j<=b;++j)
		{
			arr[j-1]=arr[j];
		}
		arr[b]=temp;
	}
}
void rightRotate(int arr[],int a,int b,int c)
{
	for(int i=1;i<=c;++i)
	{
		int temp=arr[b];
		for(int j=b;j>=a+1;--j)
		{
			arr[j]=arr[j-1];
		}
		arr[a]=temp;
	}
}
int main()
{
	int n,c,mid;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;++i)
		scanf("%d",&arr[i]);
	printf("Enter number of rotations to perform: ");
	scanf("%d",&c);
	mid=(n-1)/2;
	leftRotate(arr,0,mid,c);
	rightRotate(arr,mid+1,n-1,c);
	for(int i=0;i<n;++i)
		printf("%d ",arr[i]);
	return 0;
}


