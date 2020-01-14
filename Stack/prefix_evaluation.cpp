#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;
void prefix_eval(string str)
{
    stack<int> stk;
    for(int i=str.size()-1;i>=0;i--)
    {
        if(isdigit(str[i]))
        {
            stk.push(str[i]-'0');
        }
        else
        {
        int s1=stk.top();
        stk.pop();
        int s2=stk.top();
        stk.pop();
        switch(str[i])
        {
            case '+':
            stk.push(s1+s2);
            break;
            case '-':
            stk.push(s1-s2);
            break;
            case '*':
            stk.push(s1*s2);
            break;
            case '/':
            stk.push(s1/s2);
            break;
        }
    }
    }
    while(!(stk.empty()))
    {
        cout<<stk.top();
        stk.pop();
    }
}
int main(int argc,const char* argv[])
{
    string str;
    str=argv[1];
    prefix_eval(str);
    return 0;
}

