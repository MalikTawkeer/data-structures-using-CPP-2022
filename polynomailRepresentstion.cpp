// polynomial representation using linked list
// example: 2x2 +3x2+2x+1
#include<iostream>
using namespace std;
class Node
{
    public:
    
    int coffecient;
    int exponent;
    Node* next;

    Node(){}

    Node(int coffecient,int exponent)
    {
        this->coffecient=coffecient;
        this->exponent=exponent;
        this->next=NULL;
    }
};


// polynomial representation
void polynomialRepresentation(Node* &head,int d1,int d2)
{
    Node* temp=head;
    
    Node* newPolynomial=new Node(d1,d2);
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
    int count=0;
    while(head!=NULL)
    {
        count++;
        if(count != 1)
        {
         if(head->exponent >0)
        {
            cout<<"+";
        }
        }
        cout<<head->coffecient<<"^";
        cout<<head->exponent;
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    Node* p1=NULL;
    Node* p2=NULL;

     // 2x2 + 3x2 + 2x + 1 ------------>polynomial 1
    polynomialRepresentation(p1,2,0);
    polynomialRepresentation(p1,3,2);
    polynomialRepresentation(p1,4,3);
    polynomialRepresentation(p1,1,2);
    display(p1);
    cout<<endl;

    // 3x2 + 7x4 + 2x + 1 ------------>polynomial 2
    polynomialRepresentation(p2,3,2);
    polynomialRepresentation(p2,7,4);
    polynomialRepresentation(p2,2,1);
    polynomialRepresentation(p2,1,1);
    display(p2);
}