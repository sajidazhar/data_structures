#include<iostream>
#include<stdlib.h>
using namespace std;
#define CAPACITY 1000
class Mystack
{
    int top;
    public:
    char arr[CAPACITY];
    Mystack()
    {
        top=-1;
    }
    bool push(char new_element)
    {
        if(top+1 >= CAPACITY) return false;
        arr[++top]=new_element;
        return true;
    }
    char pop()
    {
        if(top==-1) return '$';
        char stack_top_ele=arr[top];
        return stack_top_ele;
    }
    bool is_empty()
    {
        if(top==-1) return true;
        return false;
    }
    char peek()
    {
        if(top==-1) return '$';
        return arr[top];
    }
    void printstack()
    {
        for(int i=0;i<=3;i++)
        {
            cout<<arr[i];
        }
    }
};
int main(int argc,const char* argv[])
{
    Mystack s;
    s.push('a');
    s.push('b');
    s.push('c');
   s.printstack();
   return 0;
}
