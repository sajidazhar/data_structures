#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}node;
node *reverse(node *head)
{
    node*p,*q;
    if(head==NULL)
    
        return head;
    p=head;
    q=p->next;
    if(q==NULL)
    return p;
    q=reverse(q);
    p->next->next=p;
    p->next=NULL;
    return q;
    
}
int main()
{
    int a,i,n;;
    node *p,*q,*start,*rev;
    cout<<"enter the total number of nodes : \n";
    cin>>n;
    cout<<"enter the nodes of the list : \n";
    p=(node*)malloc(sizeof(node));
    cin>>a;
    cout<<endl;
    p->data=a;
    p->next=NULL;
    start=p;
    for(i=1;i<n;i++)
    {
        q=(node*)malloc(sizeof(node));
        cin>>a;
        q->data=a;
        q->next=NULL;
        p->next=q;
        p=p->next;
    }
    cout<<"The reverse of a link list is : \n ";
    rev=reverse(start);
    while(rev!=NULL)
    {
        cout<<" "<<rev->data;
        rev=rev->next;
    }
    
    return 0;
    
}


