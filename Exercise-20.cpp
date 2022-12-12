#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class stack
{
    struct Node* top;
public:
    stack()
    {
        top=NULL;
    }
    void push(){
    int value;
    Node* ptr;
    cout<<"Enter the number->"<<endl;
    cin>>value;
    ptr=new Node;
    ptr->data=value;
    ptr->next=NULL;
    if(top!=NULL)
        ptr->next=top;
    top=ptr;}

    void pop()
    {
        Node* temp;
        if(top == NULL){
        {
            cout<<"Empty stack"<<endl;
        }
        return ;
    }
    temp=top;
    top=top->next;
    cout<<"Popped element is "<<temp->data;
    delete temp;
    }
    void printer()
    {
        Node* temp1=top;
        cout<<"The stack is "<<endl;
        while(temp1!=NULL)
        {
            cout<<temp1->data<<" ";
            temp1=temp1->next;
        }
        cout<<endl;
    }


};

int main()
{
    stack s;
    int n;
    cout<<"How many elements : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
        s.push();
    s.printer();
    cout<<"How many elements to pop?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        s.pop();}
        s.printer();
        return 0;
}
