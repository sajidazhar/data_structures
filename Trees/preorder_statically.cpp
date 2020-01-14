#include<iostream>
using namespace std;
class Node
{
        public:
        int data;
        Node* next[2];
        Node* addNode(int newdata)
        {
                Node* temp=NULL;
                temp=new Node();
                temp->data=newdata;
                temp->next[0]=NULL;
                temp->next[1]=NULL;
                return temp;
        }
};
int main(int argc,char* argv[])
{
        Node o1;
        Node* root=NULL;
        root=new Node();
        root=o1.addNode(1);
        root->next[0]=o1.addNode(2);
        root->next[1]=o1.addNode(3);
        root->next[0]->next[0]=o1.addNode(4);
        cout<<root->data;
        cout<<root->next[0]->data;
        cout<<root->next[1]->data;
        cout<<root->next[0]->next[0]->data;
        return 0;
}
