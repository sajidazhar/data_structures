#include<iostream>
#include<stack>
#include<list>
using namespace std;
#define N 8
bool arr[N][N]={{0,0,1,0},{0,0,1,0},{0,0,0,0},{0,0,1,0}};
bool knows(int a,int b)
{
    return arr[a][b];
}
int find_celebrity(int n)
{
    stack<int> s;
    int c;
    //pop top two element
    for(int i=0;i<n;i++)
    s.push(i);
    int a=s.top();
    s.pop();
    int b=s.top();
    s.pop();
    //comparing top two
    while(s.size()>1)
    {
        if(knows(a,b))
        {
            a=s.top();
            s.pop();
        }
        else
        {
            b=s.top();
            s.pop();
        }
    }
    c=s.top();
    s.pop();
    if(knows(c,b))
    c=b;
    if(knows(c,a))
    c=a;
    //to check c is actually celebrity or not
    for(int i=0;i<n;i++)
    {
        if((i!=c)&& (knows(c,i)|| !knows(i,c)))
        {
            return -1;
        }
    }
    return c;
}
int main()
{
    int n=4;
    int id=find_celebrity(n);
    if(id==-1)
    cout<<"no celebrity";
    else
    cout<<"the celebrity id is : "<<id;
    return 0;
}
