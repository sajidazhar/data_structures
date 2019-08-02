#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the length : ";
    cin>>n;
    string str[n];
    string str1[n];
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(i=0;i<n;i++)
    {
        str1[n-1-i]=str[i];
    }
    cout<<"reverse is : ";
    for(i=0;i<n;i++)
    {
        cout<<str1[i];
    }
    return 0;
    
    
}
