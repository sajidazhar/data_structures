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
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
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
int diameter(Node* root)
{
    if(root==NULL)
    return 0;
    int lheight=height(root->next[0]);
    int rheight=height(root->next[1]);
    int ldiameter=diameter(root->next[0]);
    int rdiameter=diameter(root->next[1]);
    int fd=max(lheight+rheight+1,max(ldiameter,rdiameter));
    return fd;
}

int main(int argc,const char* argv[]){
	int n = argc-1;
	int arr[n];
	int j=0;
	int h=0;
	for(int i=0;i<argc;i++)
	{
		if(i==0)continue;
		arr[j++]=atoi(argv[i]);	
	} 
	Node* root = construct_binary_tree(arr,root,0,n);
    cout<<"The diameter of a given binary tree is : "<<diameter(root);
	return 0;
}


