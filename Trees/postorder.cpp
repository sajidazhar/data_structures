#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
void postorder(Node* root)
{
    if(root==NULL)
    return;
    else
    {
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main(int argc,const char* argv[])
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    postorder(root);
}
