#include<iostream>
#include<stdlib.h>
#include<vector>
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

void nodeToLeaf(Node *root,int arr[],int index)
{
    if(root->next[0]==NULL&&root->next[1]==NULL)
    {
        for(int i=0;i<index;++i)
            cout<<arr[i]<<" ";
        cout<<root->data;
        cout<<endl;
    }
    else
    {
        arr[index]=root->data;
        if(root->next[0]!=NULL)
            nodeToLeaf(root->next[0],arr,index+1);
        if(root->next[1]!=NULL)
            nodeToLeaf(root->next[1],arr,index+1);
    }
}
void node_to_leaf(Node* root)
{
    int arr[100];
    nodeToLeaf(root,arr,0);
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
	node_to_leaf(root);
	return 0;
}




