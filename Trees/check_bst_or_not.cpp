#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h> 
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

int isBSTUtil(Node* root, int min, int max);  
  
int isBST(Node* root)  
{  
    return(isBSTUtil(root, INT_MIN, INT_MAX));  
}  
  
int isBSTUtil(Node* root, int min, int max)  
{  
    if (root==NULL)  
        return 1;  
    if (root->data < min || root->data > max)  
        return 0;  
    return
        isBSTUtil(root->next[0], min, root->data-1) && 
        isBSTUtil(root->next[1], root->data+1, max);   
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
	if(isBST(root))
	cout<<"yes";
	else
	cout<<"no";
	
	return 0;
}





