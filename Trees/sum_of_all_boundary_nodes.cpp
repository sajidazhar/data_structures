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

void LeftBoundary(Node* root, int& sum_of_boundary_nodes) 
{ 
    if (root)
    { 
        if (root->next[0]) 
        { 
            sum_of_boundary_nodes += root->data; 
            LeftBoundary(root->next[0], sum_of_boundary_nodes); 
        } 
        else if (root->next[1]) { 
            sum_of_boundary_nodes += root->data; 
            LeftBoundary(root->next[1], sum_of_boundary_nodes); 
        } 
    } 
} 

void RightBoundary(Node* root, int& sum_of_boundary_nodes) 
{ 
    if (root) { 
        if (root->next[1]) 
        { 
            RightBoundary(root->next[1], sum_of_boundary_nodes); 
            sum_of_boundary_nodes += root->data; 
        } 
        else if (root->next[0]) 
        { 
            RightBoundary(root->next[0], sum_of_boundary_nodes); 
            sum_of_boundary_nodes += root->data; 
        } 
    } 
} 
void Leaves(Node* root, int& sum_of_boundary_nodes) 
{ 
    if (root)
    { 
        Leaves(root->next[0], sum_of_boundary_nodes); 
  
        if (!(root->next[0]) && !(root->next[1])) 
            sum_of_boundary_nodes += root->data; 
  
        Leaves(root->next[1], sum_of_boundary_nodes); 
    } 
} 
int sumOfBoundaryNodes(Node* root) 
{ 
    if (root) 
    { 
        int sum_of_boundary_nodes = root->data; 
        LeftBoundary(root->next[0], sum_of_boundary_nodes); 
        Leaves(root->next[0], sum_of_boundary_nodes); 
        Leaves(root->next[1], sum_of_boundary_nodes); 
        RightBoundary(root->next[1], sum_of_boundary_nodes); 
        return sum_of_boundary_nodes; 
    } 
  
    return 0; 
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
    Node* root=construct_binary_tree(arr,root,0,n);
    cout<<sumOfBoundaryNodes(root);
}

