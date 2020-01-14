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

int count=0;
int count_leaves(Node* root)
{
    if(root)
    {
        if(root->next[0]==NULL && root->next[1]==NULL)
        {
            count++;
        }
        else
        {
            if(root->next[0])
                count_leaves(root->next[0]);
            if(root->next[1])
                count_leaves(root->next[1]);
        }
        return count;
    }
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
	cout<<count_leaves(root);
//	cout<<"number of leaf node in binary tree is : "<<p;

	return 0;
}



