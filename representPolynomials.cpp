// polynomial representation using linked list
// example: 2x2 +3x2+2x+1
#include<iostream>
using namespace std;
class Node
{
    public:
    
    int data1;
    int data2;
    Node* next;

    Node(){}

    Node(int data1,int data2)
    {
        this->data1=data1;
        this->data2=data2;
        this->next=NULL;
    }
};

// polynomial representation
void polynomialRepresentation(Node* &head,int d1,int d2)
{
    Node* temp=head;
    Node* newPolynomial=new Node(d1,d1);
    if(head==NULL)
    {
        head=newPolynomial;
        newPolynomial->next=NULL;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newPolynomial;
    newPolynomial->next=NULL;
}

//dsiplay
void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data1<<"+";
        cout<<head->data2;
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head=NULL;
    polynomialRepresentation(head,2,3);
    display(head);
}