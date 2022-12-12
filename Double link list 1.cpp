#include <bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *left;
    int data;
    struct node *right;
};

struct Node *root= NULL;

void inorder(struct Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<< root->data<<" ->";
        inorder(root->right);
    }
}

struct Node* newnode(int val)
{
    Node *temp = new Node();
    temp->data =val;
    temp->right=NULL;
    temp->left=NULL;
    return temp;

}

void Insert(int val)
{
    if(root== NULL)
    {
        root= newnode(val);
    }
    else if(val< root->data)
    Insert(val);
    else
        root->right = Insert(root);

}

int main()
{
    Insert(10);
    Insert(5);
    Insert(20);
    inorder(10);

    return 0;
}


