#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
void printlist(struct Node* n)
{
    while(n!=NULL)
    {
        printf("%d",n->data);
        n=n->next;
    }
}
int main()
{
    struct Node* n1=NULL;
    struct Node* n2=NULL;
    struct Node* n3=NULL;
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));
    n1->data=1;
    n1->next=n2;
    n2->data=2;
    n2->next=n3;
    n3->data=3;
    n3->next=NULL;
    printlist(n1);
}
