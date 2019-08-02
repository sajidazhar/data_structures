#include<iostream>
using namespace std;
void compare(string str1,string str2)
{
    int x=str1.compare(str2);
    if(x==0)
    cout<<"string is equal .";
    else
    cout<<"string in not eqaul";
}
int main()
{
    string str1="sajid";
    string str2="sajid";
    compare(str1,str2);
    return 0;
}
