#include<iostream>
#include<stdlib.h>
using namespace std;
void beginsert(int);
struct node
{
    int data;
    struct node *next;
}*head;
void createlist(int n);
void deleteatbeg();
void display();
int main()
{
    int n,data;
    cout<<"enter total number of nodes \n ";
    cin>>n;
    createlist(n);
    cout<<"\n data in the list : "<<endl;
    display();
    cout<<"\n select 1  to delete first  : \n ";
    cin>>data;
    if(data==1)
    deleteatbeg();
    cout<<"\n data in the list is : "<<endl;
    display();
    return 0;
}
void createlist(int n)
{
    struct node *new_node,*temp;
    int data,i;
    head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        cout<<"unable to allocate memory :";
    }
    else
    {
        cout<<"Enter element at  node 1 \n ";
        cin>>data;
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=2;i<=n;i++)
        {
            new_node=(struct node *)malloc(sizeof(struct node));
            if(new_node==NULL)
            {
                cout<<"unable to allocate memory ";
                break;
            }
            else
            {
                cout<<"enter nodes of list : "<<i<<endl;
                cin>>data;
                new_node->data=data;
                new_node->next=NULL;
                temp->next=new_node;
                temp=temp->next;
            }
        }
        cout<<"link list created successfully \n ";
    }
}
void deleteatbeg()
{
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node *));
    if(new_node==NULL)
    cout<<"unable to allocate memory ";
    else
    {
       new_node=head;
       head=head->next;
       cout<<"\n data deleted : "<<new_node->data<<endl;
       delete(new_node);
        cout<<"\n data successfully deleted \n ";
    }
}
void display()
{
    struct node *temp;
    if(head==NULL)
    cout<<"list is empty \n";
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}


