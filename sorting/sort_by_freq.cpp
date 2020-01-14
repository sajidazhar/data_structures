#include<iostream>
#include<algorithm>
using namespace std;
class freq{
    public:
    int num;
    int count;
    freq()
    {
        count=0;
    }
};
int comparator(const void *p,const void *q)
{
    return (*(freq *)q).count-(*(freq *)p).count;
}
int main()
{
    int i,c=0,j;
    int arr[]={11,1,4,7,8,7,4,5,3,3,3,3,11,1,11,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    freq freq[n];
    sort(arr,arr+n);
    for(i=0;i<n;++i)
    {
        if(i==0)
        {
            freq[c].num=arr[i];
            freq[c].count+=1;
        }
        else
        {
            if(arr[i]==arr[i-1])
                freq[c].count+=1;
            else
            {
                c++;
                freq[c].num=arr[i];
                freq[c].count+=1;
            }
        }
    }
    qsort(freq,c+1,sizeof(freq[0]),comparator);
    int arr1[n],k=0;
    for(i=0;i<=c;++i)
    {
        for(j=freq[i].count;j>0;--j)
        {
            arr1[k++]=freq[i].num;
        }
    }
    for(i=0;i<n;++i)
        cout<<arr1[i]<<" ";
    return 0;
}

