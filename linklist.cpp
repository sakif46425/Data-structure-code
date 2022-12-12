#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node*next;
};
struct Node *head=NULL;

void insert_first(int value)

{
    struct Node *n1;
    n1= new Node();
    n1->data =value;
    n1->next =NULL;
    if(head==NULL)
    {
        head=n1;
    }
    else
    {
        n1->next=head;
        head=n1;
    }
}
void deleteform_b
