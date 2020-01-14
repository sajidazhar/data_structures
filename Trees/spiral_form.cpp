//print all diagonal of a binary tree
#include<iostream>
#include<stdlib.h>
#include<stack>

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

void spiral(Node* root)
{
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
    int count=0;
    while((!s1.empty()) ||(!s2.empty()))
    {
        while(!s1.empty())
        {
            root=s1.top();
            s1.pop();
            if(count==0)
            {
            cout<<root->data;
            count=1;
            }
            else
            cout<<" "<<root->data;
            if(root->next[0])
            s2.push(root->next[0]);
            if(root->next[1])
            s2.push(root->next[1]);
        }
        while(!s2.empty())
        {
            root=s2.top();
            s2.pop();
            cout<<" "<<root->data;
            if(root->next[1])
            s1.push(root->next[1]);
            if(root->next[0])
            s1.push(root->next[0]);
        }
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
    //cout<<"The diagonal of a given tree is "<<printdiagonal(root);
	spiral(root);
	return 0;
}







