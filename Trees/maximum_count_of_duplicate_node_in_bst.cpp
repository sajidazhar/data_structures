#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node* next[2];
    Node(){}
    Node(int data)
    {
        this->data=data;
        next[0]=NULL;
        next[1]=NULL;
    }
};
int c1=1,c2=0,val=0;
Node* last=NULL;
void countfreq(Node* root)
{
    if(root==NULL)
    return;
    countfreq(root->next[0]);
    if(last!=NULL)
    {
        if(last->data==root->data)
            c1++;
        else
            c1=1;
    }
        if(c2<c1)
        {
            c2=c1;
            val=root->data;
        }
        if(c2==c1)
        {
            if(val>root->data)
            {
                val=root->data;
            }
        }
            last=root;
            countfreq(root->next[1]);
}
Node* consrtruct_binary_tree(int arr[],Node* root,int i,int n)
{
    if(i<n)
    {
        Node* temp=new Node(arr[i]);
        root=temp;
        if(arr[2*i+1]!=-1)
        root->next[0]=consrtruct_binary_tree(arr,root->next[0],2*i+1,n);
        if(arr[2*i+2]!=-1)
        root->next[1]=consrtruct_binary_tree(arr,root->next[1],2*i+2,n);
    }
    return root;
}
int main(int argc,const char* argv[])
{
    int n=argc-1;
    int arr[n];
    int j=0;
    for(int i=0;i<argc;i++)
    {
        if(i==0)
        continue;
        arr[j++]=atoi(argv[i]);
    }
    Node* root=consrtruct_binary_tree(arr,root,0,n);
    countfreq(root);
    cout<<"value is "<<val;
}
