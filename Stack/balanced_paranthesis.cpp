#include<iostream>
#include<stack>
using namespace std;
bool balanced(string str)
{
    stack <char> s;
    char x;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(' || str[i]=='[' || str[i]=='{')
        {
            s.push(str[i]);
            continue;
        }
        if(s.empty())
        return false;
        switch(str[i])
        {
            case ')':
            x=s.top();
            s.pop();
            if(x=='{' || x=='[')
            return false;
            break;
            case '}':
            x=s.top();
            s.pop();
            if(x=='(' || x=='[')
            return false;
            break;
            case ']':
            x=s.top();
            s.pop();
            if(x=='{' || x=='(')
            return false;
            break;
        }
    }
    return (s.empty());
}
int main()
{
    string str;
    cout<<"enter the string : ";
    cin>>str;
    if(balanced(str))
    cout<<"balanced";
    else
    cout<<"Not balanced";
    return 0;
}


