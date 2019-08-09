#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucket_sort(float arr[],int n )
{
    vector<float> b[n]; //ceate an empty bucket
    for(int i=0;i<n;i++)
    {
        int bi=n*arr[i];//indexing of bucket
        b[bi].push_back(arr[i]);
    }
    for(int i=0;i<n;i++)//sort individual bucket
    sort(b[i].begin(),b[i].end());
    int index=0;//concatenate all bucket element
    for(int i=0;i<n;i++)
    for(int j=0;j<b[i].size();j++)
    arr[index++]=b[i][j];
}
int main()
{
    float arr[]={0.12,0.45,0.47,0.98,0.25};
    float n=sizeof(arr)/sizeof(arr[0]);
    bucket_sort(arr,n);
    cout<<"sorted array is : \n";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}

