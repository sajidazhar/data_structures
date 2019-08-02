#include<iostream>
using namespace std;
string move_uppercase(string str)
{
    
    string l="",u="";
    char ch;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        ch=str[i];
        if(ch >='A' && ch <='Z')
        {
            u+= ch;
        }
        else
        {
            l+= ch;
        }
    }
    return l+u;
}
int main()
{
    string str="makeMYtripTOBIhar";
    cout<<"After moving uppercase at the end position : "<<move_uppercase(str)<<endl;
    return 0;
}

