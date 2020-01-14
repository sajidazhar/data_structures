#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;
void postfix_eval(string str)
{
    stack<int> stk;
    for(int i=0;i<str.size();i++)
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
    postfix_eval(str);
    return 0;
    
}
