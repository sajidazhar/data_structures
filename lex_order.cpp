#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the length : ";
    cin>>n;
    string str[n];
    for(i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
              string temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    cout<<"String in  lexiographic order is : ";
    for(i=0;i<n;i++)
    cout<<str[i]<<endl;
    
}
