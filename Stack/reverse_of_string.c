#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
int top=-1;
int item;
char stack_string[max];
void push(char item);
int is_empty();
int is_full();
char pop();
int main()
{
    char str[max];
    int i;
    printf("enter the string : \n");
    scanf("%[^\n]s",str);
    for(i=0;i<strlen(str);i++)
    push(str[i]);
    for(i=0;i<strlen(str);i++)
    str[i]=pop();
    printf("Reverse string is : %s ",str);
    return 0;
}
void push(char item)
{
    if(is_full()) 
    {
    printf("stack is full");
    return;
    }
    top=top+1;
    stack_string[top]=item;
}
char pop()
{
    if(is_empty())
    {
        printf("stack is empty");
        return 0;
    }
    item=stack_string[top];
    top=top-1;
    return item;
}
int is_empty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
int is_full()
{
    if(top==max-1)
    return 1;
    else
    return 0;
}
