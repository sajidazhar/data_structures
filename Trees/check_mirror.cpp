#include<iostream>
#include<stdlib.h>

using namespace std;
/*class Node{
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
int ismirror(Node* root1,Node* root2)
{
    if(root1==NULL && root2==NULL)
    return 1;
    if(root1==NULL || root2==NULL)
    return 0;
    if(root1->data==root2->data)
    {
        if((ismirror(root1->next[0]),root2->next[1]) && ismirror(root1->next[1],root2->next[0]))
        return 1;
    }
    return 0;
}*/
int main(int argc,const char* argv[]){
	int n = argc-1;
	
	int x=atoi(argv[1]);
	int arr[x];
	int k=atoi(argv[x+2]);
	cout<<x<<" "<<k;
	int arr2[k];
	int c=2;
	for(int i=0;i<x;i++){
	    arr[i]=atoi(argv[c]);
	    c++;
	}
	int b=0;
	int d=x+3;
	for(int i=k;i<argc-1;i++){
	    arr2[b]=atoi(argv[d]);
	    b++;
	    d++;
	}
	for(int i=0;i<x;i++){
	    cout<<arr[i];
	}
	cout<<endl;
	for(int i=0;i<x;i++){
	    cout<<arr2[i];
	}
	/*
	int j=0;
	for(int i=0;i<argc;i++)
	{
		if(i==0)continue;
		arr[j++]=atoi(argv[i]);	
	} 
	Node* root = construct_binary_tree(arr,root,0,n);
	ismirror(root1,root2);
	*/
	return 0;
}



