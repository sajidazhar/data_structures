#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
int find_length(node *start)
{
    int count=0;
    node *p;
    p=start;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
int main()
{
    int a,i,n,l;
    node *p,*q,*start;
    printf("enter the total number of nodes : \n");
    scanf("%d",&n);
    printf("enter the nodes of the list : \n");
    p=(node*)malloc(sizeof(node));
    scanf("\n %d",&a);
    p->data=a;
    p->next=NULL;
    start=p;
    for(i=1;i<n;i++)
    {
        q=(node*)malloc(sizeof(node));
        scanf("%d",&a);
        q->next=NULL;
        p->next=q;
        p=p->next;
    }
    l=find_length(start);
    printf("The length of the list is : %d  ",l);
    return 0;
    
}
