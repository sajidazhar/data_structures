#include<iostream>
#include<stdlib.h>

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
Node* construct_binary_tree(int arr[],Node* root,int i,int n)
{
    if(i<n)
    {
        Node* temp=new Node(arr[i]);
        root=temp;
        if(arr[2*i+1]!=-1)
        root->next[0]=construct_binary_tree(arr,root->next[0],2*i+1,n);
        if(arr[2*i+2]!=-1)
        root->next[1]=construct_binary_tree(arr,root->next[1],2*i+2,n);
    }
    return root;
}

int height(Node* root)
{
    if(root==NULL)
    return 0;
    int x=height(root->next[0]);
    int y=height(root->next[1]);
    if(x>y)
    {
        return 1+x;
    }
    else
    {
        return 1+y;
    }
}
void level_order(Node* root,int level)
{
    if(root==NULL)
    return;
    if(level==1)
    cout<<root->data<<" ";
    else if(level>1)
    {
        level_order(root->next[0],level-1);
        level_order(root->next[1],level-1);
    }
}
void print(Node* root)
{
    int i;
    int h=height(root);
    for(i=h;i>=1;i--)
    level_order(root,i);
}
int main(int argc,const char* argv[]){
	int n = argc-1;
	int arr[n];
	int j=0;
	for(int i=0;i<argc;i++)
	{
		if(i==0)continue;
		arr[j++]=atoi(argv[i]);	
	} 
	Node* root = construct_binary_tree(arr,root,0,n);
	print(root);
	return 0;
}




