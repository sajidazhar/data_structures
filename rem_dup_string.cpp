#include<iostream>
using namespace std;
int main()
{
    string str="nanital";
    int i,j,k;
    int len=str.length();
		for(i=0;i<len;i++)
		{
			for(j=i+1;j<len;j++)
			{
				if(str[i]==str[j])
				{
					for(k=j;k<len-1;++k)
					{
						str[k]=str[k+1];
					}
					--len;
					--j;
				}
			}
		}
		cout<<"after deleting duplicate element : ";
		for(i=0;i<len;i++)
		{
	         cout<<str[i];
		}
}

