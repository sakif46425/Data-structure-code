#include<bits/stdc++.h>
using namespace std;

class stackNode
{
public:
    int data;
    stackNode * next;
};
stackNode * mewNode(int data)
{
    stackNode * stacknode = new stackNode ();
    stacknode-> data = data;
    stacknode-> next = NULL;

    return stacknode;
}

int isEmpty (stackNode *root)
{
    return !root;
}

void push(stackNode * root, int new_data)
{
    stackNode
}
void push(stackNode** root, int new_data)
{
    stackNode* stackNode = newNode(new_data);
    stackNode->next = *root;
    *root = stackNode;
    cout<<new_data<<endl;

}

int
