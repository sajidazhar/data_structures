#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,n,len,flag=0;
    char str[100];
    cout<<"enter the string : ";
    cin>>str;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<str<<" is not a pallindrome.";
    }
    else
    {
        cout<<str<<" is a pallindrome.";
    }
}
